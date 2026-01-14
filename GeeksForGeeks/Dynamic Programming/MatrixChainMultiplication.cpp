// Approach : Using Recursion

// int solve(vector<int>& arr , int i , int j){
//     if(i == j)  return 0;
    
//     int mini = INT_MAX;
//     for(int k = i ; k <= j - 1 ; k++){
//         int steps = (arr[i - 1] * arr[k] * arr[j]) + solve(arr , i , k) + solve(arr , k + 1 , j);
//         mini = min(mini , steps);
//     }
    
//     return mini;
// }

// int matrixMultiplication(vector<int> &arr) {
//     int n = arr.size();
    
//     return solve(arr , 1 , n - 1);
// }





// Approach : Using Memoization

// int solve(vector<int>& arr , vector<vector<int>>& dp , int i , int j){
//     if(i == j)  return 0;
    
//     if(dp[i][j] != -1)
//         return dp[i][j];
    
//     int mini = INT_MAX;
//     for(int k = i ; k <= j - 1 ; k++){
//         int steps = (arr[i - 1] * arr[k] * arr[j]) + solve(arr , dp , i , k) + solve(arr , dp , k + 1 , j);
//         mini = min(mini , steps);
//     }
    
//     return mini;
// }

// int matrixMultiplication(vector<int> &arr) {
//     int n = arr.size();
    
//     vector<vector<int>> dp(n , vector<int>(n , -1));
    
//     return solve(arr , dp , 1 , n - 1);
// }





// Approach : Using Tabulation

// int matrixMultiplication(vector<int> &arr) {
//     int n = arr.size();     

//     vector<vector<int>> dp(n, vector<int>(n, 0));

//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = i + 1; j < n; j++) {
//             int mini = INT_MAX;

//             for (int k = i; k < j; k++) {
//                 int steps = arr[i - 1] * arr[k] * arr[j]
//                             + dp[i][k]
//                             + dp[k + 1][j];
//                 mini = min(mini, steps);
//             }

//             dp[i][j] = mini;
//         }
//     }

//     return dp[1][n - 1];
// }