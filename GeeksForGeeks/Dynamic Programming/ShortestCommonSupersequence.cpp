// Approach : Using Recursion

// int m , n;
//
// int solve(string &s1 , string &s2 , int i , int j){
//     if(i >= m && j >= n)
//         return 0;
//        
//     if(i >= m)
//         return n - j;
//        
//     if(j >= n)
//         return m - i;
//        
//     if(s1[i] == s2[j])
//         return 1 + solve(s1 , s2 , i + 1 , j + 1);
//        
//     return min(1 + solve(s1 , s2 , i , j + 1) , 1 + solve(s1 , s2 , i + 1 , j));
// }
//
// int minSuperSeq(string &s1, string &s2) {
//     m = s1.size();
//     n = s2.size();
//    
//     int ans = solve(s1 , s2 , 0 , 0);
//    
//     return ans;
// }




// Approach : Using Memoization

// int m , n;

// int solve(string &s1 , string &s2 , vector<vector<int>>& dp , int i , int j){
//     if(i >= m && j >= n)
//         return 0;
        
//     if(i >= m)
//         return n - j;
        
//     if(j >= n)
//         return m - i;
        
//     if(dp[i][j] != -1)
//         return dp[i][j];
        
//     if(s1[i] == s2[j])
//         return dp[i][j] = 1 + solve(s1 , s2 , dp , i + 1 , j + 1);
        
//     return dp[i][j] = min(1 + solve(s1 , s2 , dp , i , j + 1) , 1 + solve(s1 , s2 , dp , i + 1 , j));
// }

// int minSuperSeq(string &s1, string &s2) {
//     m = s1.size();
//     n = s2.size();
    
//     vector<vector<int>> dp(m + 1 , vector<int>(n + 1 , -1));
    
//     int ans = solve(s1 , s2 , dp , 0 , 0);
    
//     return ans;
// }





// Approach : Tabulation

// int m , n;

// int minSuperSeq(string &s1, string &s2) {
//     m = s1.size();
//     n = s2.size();
    
//     vector<vector<int>> dp(m + 1 , vector<int>(n + 1 , 0));
    
//     for(int i = 0 ; i <= m ; i++){
//         for(int j = 0 ; j <= n ; j++){
//             if(i == 0 || j == 0)
//                 dp[i][j] = i + j;
//             else if(s1[i - 1] == s2[j - 1])
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//             else
//                 dp[i][j] = 1 + min(dp[i - 1][j] , dp[i][j - 1]);
//         }
//     }
    
//     return dp[m][n];
// }


                        // or //

// Using Length of Longest Common Subsequence

// int m , n;

// int minSuperSeq(string &s1, string &s2) {
//     m = s1.size();
//     n = s2.size();
    
//     vector<vector<int>> dp(m + 1 , vector<int>(n + 1 , 0));
    
//     for(int i = 0 ; i <= m ; i++){
//         for(int j = 0 ; j <= n ; j++){
//             if(i == 0 || j == 0)
//                 dp[i][j] = 0;
//             else if(s1[i - 1] == s2[j - 1])
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//             else
//                 dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
//         }
//     }
    
//     int LCS = dp[m][n];
//     int extra_char_s1 = m - LCS;
//     int extra_char_s2 = n - LCS;
    
//     return LCS + extra_char_s1 + extra_char_s2;
// }