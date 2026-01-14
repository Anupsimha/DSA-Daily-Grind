// Recursive Approach 
//
// int solve(vector<int>& nums , int i){
//     if(i < 0)
//         return 0;
//
//     return max(solve(nums , i - 2) + nums[i] , solve(nums , i - 1));
// }
//
// int rob(vector<int>& nums) {
//     int n = nums.size();
//
//     return solve(nums , n - 1);
// }




// Memoization Approach
//
// int solve(vector<int>& nums , vector<int>& dp , int i){
//     if(i < 0)
//         return 0;
//
//     if(dp[i] != -1)
//         return dp[i];
//
//     dp[i] = max(solve(nums , dp , i - 2) + nums[i] , solve(nums , dp , i - 1)); 
//
//     return dp[i];
// }
//
// int rob(vector<int>& nums) {
//     int n = nums.size();
//
//     vector<int> dp(n + 1 , -1);
//
//     return solve(nums , dp , n - 1);
// }




// Tabulation Approach
//
// int solveTab(vector<int>& nums , int n){
//     if(n == 0)
//         return 0;
//
//     vector<int> dp(n + 1 , -1);
//     dp[0] = 0;
//     dp[1] = nums[0];
//
//     for(int i = 1 ; i < n ; i++){
//         int val = nums[i];
//         dp[i + 1] = max(dp[i] , dp[i - 1] + val); 
//     }
//
//     return dp[n];
// }
//
// int rob(vector<int>& nums) {
//     int n = nums.size();
//
//     return solveTab(nums , n);
// }




// Space Optimization Approach
//
// int solveSpace(vector<int>& nums){
//     if(nums.size() == 0)
//         return 0;
//
//     int prev1 = 0;
//     int prev2 = 0;
//
//     for(int num : nums){
//         int temp = prev1;
//         prev1 = max(prev2 + num , prev1);
//         prev2 = temp;
//     }
//
//     return prev1;
// }
//
// int rob(vector<int>& nums) {
//     int n = nums.size();
//
//     return solveSpace(nums);
// }