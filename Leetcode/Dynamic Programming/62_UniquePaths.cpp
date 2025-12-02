// Approach : Recursion
// Time Complexity : O(2^(m+n))
// Space Complexity : O(m+n)
//
// int solve(int m , int n , int i , int j){
//     if(i >= m || j >= n)
//         return 0;
//
//     if(i == m - 1 && j == n - 1)
//         return 1;
//
//     int right = solve(m , n , i , j + 1);
//     int down = solve(m , n , i + 1 , j);
//
//     return right + down;
// }
//
// int uniquePaths(int m, int n) {
//     return solve(m , n , 0 , 0);
// }




// Approach : Recursion + Memoization
// Time Complexity : O(m*n)
// Space Complexity : O(m*n)
//
// int solve(int m , int n , int i , int j , vector<vector<int>>& dp){
//     if(i >= m || j >= n)
//         return 0;
//
//     if(i == m - 1 && j == n - 1)
//         return 1;
//
//     if(dp[i][j] != -1)
//         return dp[i][j];
//
//     int right = solve(m , n , i , j + 1 , dp);
//     int down = solve(m , n , i + 1 , j , dp);
//
//     return dp[i][j] = right + down;
// }
//
// int uniquePaths(int m, int n) {
//     vector<vector<int>> dp(m , vector<int>(n , -1));
//
//     return solve(m , n , 0 , 0 , dp);
// }





// Approach : Tabulation
// Time Complexity : O(m*n)
// Space Complexity : O(m*n)

// int uniquePaths(int m, int n) {
//     vector<vector<int>> dp(m , vector<int>(n , 1));
//    
//     for(int i = 1 ; i < m ; i++){
//         for(int j = 1 ; j < n ; j++){
//             dp[i][j] = dp[i][j - 1] + dp[i - 1][j]; 
//         }
//     }
//
//     return dp[m - 1][n - 1];
// }





// Approach : Space Optimized 
// Time Complexity : O(m*n)
// Space Complexity : O(n)

// int uniquePaths(int m, int n) {
//     vector<int> dp(n, 1); 
//
//     for (int i = 1; i < m; i++) {
//         for (int j = 1; j < n; j++) {
//             dp[j] = dp[j] + dp[j - 1]; 
//         }
//     }
//
//     return dp[n - 1];
// }