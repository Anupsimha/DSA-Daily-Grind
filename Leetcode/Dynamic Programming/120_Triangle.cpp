// Approach : Recursion
// Time Complexity : O(2^(N^2))
// Space Complexity : O(N) [Recursion Stack Space]

// int n;
//
// void dfs(vector<vector<int>>& triangle , int &minSum , int row , int col , int sum){
//     sum += triangle[row][col];
//
//     if(row == n - 1){
//         minSum = min(minSum , sum);
//         return ;
//     }
//
//     dfs(triangle , minSum , row + 1 , col , sum);
//
//     dfs(triangle , minSum , row + 1 , col + 1 , sum);
// }
//
// int minimumTotal(vector<vector<int>>& triangle) {
//     n = triangle.size();
//
//     int minSum = INT_MAX;
//
//     dfs(triangle , minSum , 0 , 0 , 0);
//
//     return minSum;
// }





// Approach : Top-Down DP (Memoization)
// Time Complexity : O(N^2)
// Space Complexity : O(N^2) + O(N) [Recursion Stack Space]
//
// int n;
//
// int dfs(vector<vector<int>>& triangle, int row , int col , vector<vector<int>> dp){
//     if(dp[row][col] != INT_MAX)
//         return dp[row][col];
//
//     if(row == n - 1){
//         return dp[row][col] = triangle[row][col];
//     }
//
//     int down = dfs(triangle , row + 1, col , dp);
//     int diag = dfs(triangle , row + 1, col + 1 , dp);
//
//     return dp[row][col] = triangle[row][col] + min(down , diag);
// }
//
// int minimumTotal(vector<vector<int>>& triangle) {
//     n = triangle.size();
//
//     vector<vector<int>> dp(n , vector<int>(n , INT_MAX));
//
//     return dfs(triangle , 0 , 0 , dp);;
// }





// Approach : Bottom-Up DP (Tabulation)
// Time Complexity : O(N^2)
// Space Complexity : O(N)
//
// int minimumTotal(vector<vector<int>>& triangle) {
//     int n = triangle.size();
//
//     vector<int> dp = triangle[n - 1];
//
//     for (int row = n - 2; row >= 0; row--) {
//         for (int col = 0; col < triangle[row].size(); col++) {
//             dp[col] = triangle[row][col] + min(dp[col], dp[col + 1]);
//         }
//     }
//
//     return dp[0]; 
// }