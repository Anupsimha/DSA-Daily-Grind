// Approach 1

// int numberOfSubarrays(vector<int>& nums, int k) {
//     int n = nums.size();

//     unordered_map<int , int> oddStore;
//     oddStore[0] = 1;
//     int countOdd = 0;
//     int nice = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(nums[i] % 2 == 1)
//             countOdd++;

//         if(oddStore.find(countOdd - k) != oddStore.end())
//             nice += oddStore[countOdd - k];
            
//         oddStore[countOdd]++;
//     }

//     return nice;
// }





// Approach 2

// int numberOfSubarrays(vector<int>& nums, int k) {
//     int n = nums.size();

//     int oddCount = 0;
//     int prevCount = 0;  // Count of previous Nice subarray's
//     int result = 0;
//     int i = 0 , j = 0;
//     while(i < n && j < n){
//         if(nums[j] % 2 != 0){
//             oddCount++;
//             prevCount = 0;
//         }

//         while(oddCount == k){
//             prevCount++;
//             if(nums[i] % 2 != 0)
//                 oddCount--;
//             i++;
//         }

//         result += prevCount;
//         j++;
//     }

//     return result;
// }