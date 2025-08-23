// Approach : Sliding Window
// Time Complexity : O(N)

// int atMostK(vector<int>& nums, int k) {
//     int n = nums.size();
//     int i = 0, j = 0;
//     long long count = 0;
//     unordered_map<int, int> freq;

//     while (j < n) {
//         freq[nums[j]]++;

//         while (freq.size() > k) {
//             freq[nums[i]]--;
//             if (freq[nums[i]] == 0) {
//                 freq.erase(nums[i]);
//             }
//             i++;
//         }

//         count += (j - i + 1);
//         j++;
//     }

//     return count;
// }

// int subarraysWithKDistinct(vector<int>& nums, int k) {
//     return atMostK(nums, k) - atMostK(nums, k - 1);
// }




// Approach 2
// Time Complexity : O(N)

// int subarraysWithKDistinct(vector<int>& nums, int k) {
//     int n = nums.size();

//     unordered_map<int , int> freq;
//     int i = 0 , j = 0;
//     int large_subarray = 0;
//     int count = 0;

//     while(j < n){
//         freq[nums[j]]++;

//         while(freq.size() > k){
//             freq[nums[i]]--;
//             if(freq[nums[i]] == 0)
//                 freq.erase(nums[i]);
//             i++;
//             large_subarray = i;
//         }

//         while(freq[nums[i]] > 1){
//             freq[nums[i]]--;
//             i++;
//         }

//         if(freq.size() == k)
//             count += (1 + (i - large_subarray));
            
//         j++;
//     }

//     return count;
// }