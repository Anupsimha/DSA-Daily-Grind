// int solve(vector<int>& height , vector<int>& dp , int step){
//     if (step == 0) return 0;  // base case: no cost at start

//     if (dp[step] != -1) return dp[step];  // already computed

//     // Jump from step-1
//     int lastFirst = solve(height, dp, step - 1) + abs(height[step] - height[step - 1]);

//     // Jump from step-2
//     int lastSecond = INT_MAX;
//     if (step > 1) {
//         lastSecond = solve(height, dp, step - 2) + abs(height[step] - height[step - 2]);
//     }

//     return dp[step] = min(lastFirst, lastSecond);
// }

// int minCost(vector<int>& height) {
//     int n = height.size();
    
//     vector<int> dp(n , -1);
    
//     return solve(height , dp , n - 1);
// }