// Appraoch : Recursion
// Time Complexity : O(3^(N^2))
// Space Complexity : O(N) [Recursion Stack Space]

// int n;

// void solve(vector<vector<int>>& matrix , int &minSum , int sum , int row , int col){
//     sum += matrix[row][col];

//     if(row == n - 1){
//         minSum = min(minSum , sum);
//         return ;
//     }

//     if (col - 1 >= 0)
//         solve(matrix, minSum, sum, row + 1, col - 1);

//     solve(matrix, minSum, sum, row + 1, col);

//     if (col + 1 < n)
//         solve(matrix, minSum, sum, row + 1, col + 1);
// }

// int minFallingPathSum(vector<vector<int>>& matrix) {
//     n = matrix.size();

//     int minSum = INT_MAX;

//     for (int col = 0; col < n; col++) {
//         solve(matrix, minSum, 0, 0, col); 
//     }

//     return minSum;
// }





// Approach : Top-Down DP (Memoization)
// Time Complexity : O(N^2)
// Space Complexity : O(N^2) + O(N) [Recursion Stack Space]

// int n;
// vector<vector<int>> dp;

// int dfs(vector<vector<int>>& matrix , int row , int col){
//     if (col < 0 || col >= n)
//         return INT_MAX;

//     if (row == n - 1)
//         return matrix[row][col];

//     if (dp[row][col] != INT_MAX)
//         return dp[row][col];

//     int downLeft = dfs(matrix , row + 1, col - 1);
//     int down = dfs(matrix , row + 1, col);
//     int downRight = dfs(matrix , row + 1, col + 1);

//     return dp[row][col] = matrix[row][col] + min({downLeft, down, downRight});
// }

// int minFallingPathSum(vector<vector<int>>& matrix) {
//     n = matrix.size();
//     dp.assign(n, vector<int>(n, INT_MAX));

//     int result = INT_MAX;

//     for (int col = 0; col < n; col++) {
//         result = min(result , dfs(matrix, 0, col)); 
//     }

//     return result;
// }





// Approach : Bottom-Up DP (Tabulation)
// Time Complexity : O(N^2)
// Space Complexity : O(N^2)

// int minFallingPathSum(vector<vector<int>>& matrix) {
//     int n = matrix.size();

//     vector<vector<int>> dp = matrix; 

//     for (int row = n - 2; row >= 0; row--) {
//         for (int col = 0; col < n; col++) {

//             int down = dp[row + 1][col];

//             int downLeft = (col - 1 >= 0) ? dp[row + 1][col - 1] : INT_MAX;
//             int downRight = (col + 1 < n) ? dp[row + 1][col + 1] : INT_MAX;

//             dp[row][col] += min({downLeft, down, downRight});
//         }
//     }

//     return *min_element(dp[0].begin(), dp[0].end());
// }