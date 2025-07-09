// Approach 1

// long long zeroFilledSubarray(vector<int>& nums) {
//     int n = nums.size();

//     long long count = 0;

//     int i = 0;
//     while(i < n){
//         if(nums[i] == 0){
//             int j = i;
//             while(j < n && nums[j] == 0){
//                 j++;
//             }
//             long long size = j - i;
//             count += (size * (size + 1)) / 2;
//             i = j;
//         }

//         i++;
//     }

//     return count;
// }




// Approach 2 : Using Simple Intuition

// long long zeroFilledSubarray(vector<int>& nums) {
//     int n = nums.size();

//     long long count = 0;
//     int sum = 0;

//     for(int i = 0 ; i < n ; i++){
//         if(nums[i] == 0)
//             sum++;
//         else
//             sum = 0;

//         count = count + sum;
//     }

//     return count;
// }