// Approach : Recursion

// int m , n;
//
// bool solve(string s , string t , int i , int j){
//     if(i == m)
//         return true;
//
//     if(j == n)
//         return false;
//
//     if(s[i] == t[j])
//         return solve(s , t , i + 1 , j + 1);
//    
//     return solve(s , t , i , j + 1); 
// }
//
// bool isSubsequence(string s, string t) {
//     m = s.size();
//     n = t.size();
//
//     return solve(s , t , 0 , 0);
// }





// Approach : Memoization

// int m , n;
//
// bool solve(string s , string t , int i , int j , vector<vector<int>>& dp){
//     if(i == m)
//         return true;
//
//     if(j == n)
//         return false;
//
//     if(dp[i][j] != -1)
//         return dp[i][j];
//
//     if(s[i] == t[j])
//         return dp[i][j] = solve(s , t , i + 1 , j + 1 , dp);
//    
//     return dp[i][j] = solve(s , t , i , j + 1 , dp); 
// }
//
// bool isSubsequence(string s, string t) {
//     m = s.size();
//     n = t.size();
//
//     vector<vector<int>> dp(m , vector<int>(n , -1));
//
//     return solve(s , t , 0 , 0 , dp);
// }






// Approach : Tabulation

// bool isSubsequence(string s, string t) {
//     int m = s.size();
//     int n = t.size();
//
//     vector<vector<bool>> dp(m + 1 , vector<bool>(n + 1 , false));
//    
//     for (int j = 0; j <= n; j++)
//         dp[m][j] = true;
//
//     for (int i = m - 1; i >= 0; i--) {
//         for (int j = n - 1; j >= 0; j--) {
//             if (s[i] == t[j])
//                 dp[i][j] = dp[i + 1][j + 1];   
//             else
//                 dp[i][j] = dp[i][j + 1];     
//         }
//     }
//
//     return dp[0][0];
// }





// Approach : Space Optimization

// bool isSubsequence(string s, string t) {
//     int m = s.size();
//     int n = t.size();
//
//     if(m == 0)
//         return true;
//
//     vector<bool> curr(n + 1, false);
//     vector<bool> next(n + 1, true);   
//
//     for (int i = m - 1; i >= 0; i--) {
//         curr[n] = false;               
//
//         for (int j = n - 1; j >= 0; j--) {
//
//             if (s[i] == t[j])
//                 curr[j] = next[j + 1];  
//             else
//                 curr[j] = curr[j + 1];    
//         }
//
//         next = curr; 
//     }
//
//     return curr[0];
// }






// Approach : Two Pointer

// bool isSubsequence(string s, string t) {
//     int i = 0, j = 0;
//    
//     while (i < s.length() && j < t.length()) {
//         if (s[i] == t[j])
//             i++;
//         j++;
//     }
//    
//     return i == s.length();
// }