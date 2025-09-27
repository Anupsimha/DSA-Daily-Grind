// int solve(string &s , vector<vector<int>> &dp , int i , int j){
//     if(dp[i][j] != -1)
//         return dp[i][j];
        
//     if(i > j)
//         return 0;
        
//     if(i == j)
//         return 1;

//     if(s[i] == s[j])
//         return dp[i][j] = 1 + solve(s , dp , i + 1 , j) + solve(s , dp , i , j - 1);
//     else
//         return dp[i][j] = solve(s , dp , i + 1 , j) + solve(s , dp , i , j - 1) - solve(s , dp , i + 1 , j - 1);
// }

// int countPS(string &s) {
//     int n = s.length();
    
//     vector<vector<int>> dp(n, vector<int>(n, -1));

//     return solve(s , dp , 0 , n - 1);
// }