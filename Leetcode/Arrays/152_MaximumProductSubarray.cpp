// Most Optimal Approach : Kadane's Algorithm
//
// int maxProduct(vector<int>& nums) {
//     int n = nums.size();
//
//     int leftProd = 1 , rightProd = 1;
//     int ans = nums[0];               // ex. {-2 , -5 , -7}, here leftProd = -2 and rightProd = -7, but if we declare ans = 0, then 
//                                      // the ans won't update to -2.
//     for(int i = 0 ; i < n ; i++){
//         leftProd = leftProd == 0 ? 1 : leftProd;
//         rightProd = rightProd == 0 ? 1 : rightProd;
//
//         leftProd *= nums[i];
//         rightProd *= nums[n - i - 1];
//
//         ans = max(ans , max(leftProd , rightProd));
//     }
//
//     return ans;
// }
//




// Approach : Brute Force
// Time Complexity : O(n^2)
//
// int maxProduct(vector<int>& nums) {
//     int n = nums.size();
//
//     if(n == 1)
//         return nums[0];
//
//     int maxProd = 0;
//     for(int i = 0 ; i < n ; i++){
//         int currProd = nums[i];
//         maxProd = max(maxProd , currProd);
//         for(int j = i + 1 ; j < n ; j++){
//             if(nums[j] == 0)    break;
//             currProd *= nums[j];
//             maxProd = max(maxProd , currProd);
//         }
//     }
//
//     return maxProd;
// }