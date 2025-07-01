// Approach : Time Complexity O(2n) for worse 

// int longestOnes(vector<int>& nums, int k) {
//     int n = nums.size();

//     int i = 0 , j = 0;
//     int zeros = 0;
//     int maxConsec = 0;

//     while(j < n){
//         if(nums[j] == 0)    zeros++;

//         while(zeros > k){
//             if(nums[i] == 0)    zeros--;
//             i++;
//         }

//         if(zeros <= k){
//             maxConsec = max(maxConsec , j - i + 1);
//         }

//         j++;
//     }

//     return maxConsec;
// }




// Approach 2 : Time Complexity o(N)

// int longestOnes(vector<int>& nums, int k) {
//     int n = nums.size();

//     int i = 0 , j = 0;
//     int zeros = 0;
//     int maxConsec = 0;

//     while(j < n){
//         if(nums[j] == 0)    zeros++;

//         if(zeros > k){
//             if(nums[i] == 0)    zeros--;
//             i++;
//         }

//         if(zeros <= k){
//             maxConsec = max(maxConsec , j - i + 1);
//         }

//         j++;
//     }

//     return maxConsec;
// }