// Approach : Recursion

// int m , n;
//
// void solve(vector<vector<int>>& grid , int i , int j , int &minSum , int sum){
//     if(i >= m || j >= n)
//         return ;
//
//     if(i == m - 1 && j == n - 1){
//         minSum = min(minSum , sum + grid[i][j]);
//         return ;
//     }
//
//     solve(grid , i , j + 1 , minSum , sum + grid[i][j]);
//     solve(grid , i + 1 , j , minSum , sum + grid[i][j]);
// }
//
// int minPathSum(vector<vector<int>>& grid) {
//     m = grid.size();
//     n = grid[0].size();
//
//     int minSum = INT_MAX;
//
//     solve(grid , 0 , 0 , minSum , 0);
//
//     return minSum;
// }





// Approach : Recursion + Memoization

// int m , n;
//
// int solve(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {
//     if (i < 0 || j < 0) 
//         return 1e9;
//
//     if (i == 0 && j == 0) 
//         return grid[0][0];
//
//     if (dp[i][j] != -1) 
//         return dp[i][j];
//
//     int top = solve(i - 1, j, grid, dp);
//     int left = solve(i, j - 1, grid, dp);
//
//     return dp[i][j] = grid[i][j] + min(top, left);
// }
//
// int minPathSum(vector<vector<int>>& grid) {
//     m = grid.size();
//     n = grid[0].size();
//
//     vector<vector<int>> dp(m, vector<int>(n, -1));
//
//     return solve(m - 1, n - 1, grid, dp);
// }





// Approach : Tabulation

// int minPathSum(vector<vector<int>>& grid) {
//     int m = grid.size();
//     int n = grid[0].size();
//
//     vector<vector<int>> dp(m,vector<int>(n,grid[0][0]));
//    
//     for(int i=1;i<n;i++){
//         dp[0][i] = dp[0][i-1] + grid[0][i];
//     }
//    
//     for(int i=1;i<m;i++){
//         dp[i][0] = dp[i-1][0] + grid[i][0];
//     }
//    
//     for(int i = 1 ; i < m; i++){
//         for(int j = 1; j < n; j++){
//             dp[i][j] = min(dp[i-1][j] , dp[i][j-1]) + grid[i][j];
//         }
//     }
//
//     return dp[m-1][n-1];
// }


                                // or //

//
// int minPathSum(vector<vector<int>>& grid) {
//     int m = grid.size();
//     int n = grid[0].size();
//
//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(i == 0 && j == 0)    continue;
//
//             int fromLeft = (j > 0) ? grid[i][j - 1] : INT_MAX;
//             int fromTop = (i > 0) ? grid[i - 1][j] : INT_MAX;
//
//             grid[i][j] += min(fromLeft , fromTop);
//         }
//     }
//
//     return grid[m - 1][n - 1];
// }






// Approach : Space Optimized

// int minPathSum(vector<vector<int>>& grid) {
//     int m = grid.size();
//     int n = grid[0].size();
//
//     vector<int> dp(n, 0);
//
//     dp[0] = grid[0][0];
//
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//
//             if (i == 0 && j == 0) continue;
//
//             int top = (i > 0) ? dp[j] : INT_MAX;
//             int left = (j > 0) ? dp[j - 1] : INT_MAX;
//
//             dp[j] = grid[i][j] + min(top, left);
//         }
//     }
//
//     return dp[n - 1];
// }