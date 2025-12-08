// Approach : Recursion

// int m , n;

// int solve(string text1 , string text2 , int i , int j){
//     if(i >= m || j >= n)
//         return 0;

//     if(text1[i] == text2[j])
//         return 1 + solve(text1 , text2 , i + 1 , j + 1);

//     return max(solve(text1 , text2 , i + 1 , j) , solve(text1 , text2 , i , j + 1));
// }

// int longestCommonSubsequence(string text1, string text2) {
//     m = text1.size();
//     n = text2.size();

//     return solve(text1 , text2 , 0 , 0);
// }




// Approach : Memoization

// int m , n;

// int solve(string text1 , string text2 , int i , int j , vector<vector<int>>& dp){
//     if(i >= m || j >= n)
//         return 0;

//     if(dp[i][j] != -1)
//         return dp[i][j];

//     if(text1[i] == text2[j])
//         return dp[i][j] = 1 + solve(text1 , text2 , i + 1 , j + 1 , dp);

//     return dp[i][j] = max(solve(text1 , text2 , i + 1 , j , dp) , solve(text1 , text2 , i , j + 1 , dp));
// }

// int longestCommonSubsequence(string text1, string text2) {
//     m = text1.size();
//     n = text2.size();

//     vector<vector<int>> dp(m + 1 , vector<int>(n + 1 , -1));

//     return solve(text1 , text2 , 0 , 0 , dp);
// }





// Approach : Tabulation

