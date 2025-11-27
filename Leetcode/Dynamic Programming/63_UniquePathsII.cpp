// Approach : Recursion

// int m , n;

// int solve(vector<vector<int>>& obstacleGrid , int i , int j){
//     if(i >= m || j >= n)
//         return 0;

//     if(i == m - 1 && j == n - 1)
//         return 1;

//     if(obstacleGrid[i][j] == 1)
//         return 0;

//     int right = solve(obstacleGrid , i , j + 1);
//     int down = solve(obstacleGrid , i + 1 , j);

//     return right + down;
// }

// int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//     m = obstacleGrid.size();
//     n = obstacleGrid[0].size();

//     return solve(obstacleGrid , 0 , 0);
// }




// Approach : Recursion + Memoization

// int m , n;

// int solve(vector<vector<int>>& obstacleGrid , int i , int j , vector<vector<int>>& dp){
//     if(i >= m || j >= n || obstacleGrid[i][j] == 1)
//         return 0;

//     if(dp[i][j] != -1)
//         return dp[i][j];

//     if(i == m - 1 && j == n - 1)
//         return 1;

//     int right = solve(obstacleGrid , i , j + 1 , dp);
//     int down = solve(obstacleGrid , i + 1 , j , dp);

//     return dp[i][j] = right + down;
// }

// int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//     m = obstacleGrid.size();
//     n = obstacleGrid[0].size();

//     vector<vector<int>> dp(m , vector<int>(n , -1));

//     return solve(obstacleGrid , 0 , 0 , dp);
// }





// Approach : Tabulation

// int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//     int m = obstacleGrid.size();
//     int n = obstacleGrid[0].size();

//     if(obstacleGrid[0][0] == 1)
//         return 0;

//     vector<vector<int>> dp(m , vector<int>(n , 1));

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(obstacleGrid[i][j] == 1){
//                 dp[i][j] = 0;
//                 continue;
//             }

//             if (i == 0 && j == 0) 
//                 continue;

//             int fromLeft = (j > 0) ? dp[i][j - 1] : 0;
//             int fromTop  = (i > 0) ? dp[i - 1][j] : 0;

//             dp[i][j] = fromLeft + fromTop;
//         }
//     }

//     return dp[m - 1][n - 1];
// }




// Approach : Space Optimized

// int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//     int m = obstacleGrid.size();
//     int n = obstacleGrid[0].size();

//     vector<int> dp(n, 0);

//     // Base Case
//     dp[0] = (obstacleGrid[0][0] == 1 ? 0 : 1);

//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {

//             if (obstacleGrid[i][j] == 1) {
//                 dp[j] = 0;     // obstacle blocks path
//                 continue;
//             }

//             if (j == 0) continue;  // left cell doesn't exist

//             dp[j] += dp[j - 1];    // dp[j] is top, dp[j-1] is left
//         }
//     }

//     return dp[n - 1];
// }