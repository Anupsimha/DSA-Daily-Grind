// int n;

// int solve(vector<int>& nums , vector<vector<int>>& dp , int target , int idx){
//     if(target == 0) return 1;
//     if(target < 0 || idx >= n)  return 0;

//     if(dp[idx][target] != -1)   return dp[idx][target];

//     int result = 0;
//     for(int i = idx ; i < n ; i++){
//         int take = solve(nums , dp , target - nums[i] , 0);
//         result += take;
//     }
//     return dp[idx][target] = result;
// }

// int combinationSum4(vector<int>& nums, int target) {
//     n = nums.size();

//     vector<vector<int>> dp(n + 1 , vector<int>(target + 1 , -1));

//     return solve(nums , dp , target , 0);
// }