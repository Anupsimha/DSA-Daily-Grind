// Approach : Brute Force

// bool isPalindrome(string st , int i , int j){
//     if(i > j)   return true;

//     if(st[i] == st[j])
//         return isPalindrome(st , i + 1 , j - 1);

//     return false;
// }

// int countSubstrings(string s) {
//     int n = s.length();

//     int cnt = 0;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = i ; j < n ; j++){
//             if(isPalindrome(s , i , j))
//                 cnt++;
//         }
//     }

//     return cnt;
// }





// Approach : Using Recursion + Memoization

// bool isPalindrome(string st , vector<vector<int>>& dp , int i , int j){
//     if(i > j)   return true;

//     if(dp[i][j] != -1)  return dp[i][j];

//     if(st[i] == st[j])
//         return dp[i][j] = isPalindrome(st , dp , i + 1 , j - 1);

//     return dp[i][j] = false;
// }

// int countSubstrings(string s) {
//     int n = s.length();

//     vector<vector<int>> dp(n + 1 , vector<int>(n + 1 , -1));

//     int cnt = 0;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = i ; j < n ; j++){
//             if(isPalindrome(s , dp , i , j))
//                 cnt++;
//         }
//     }

//     return cnt;
// }





// Approach : Using bottom-up

// int countSubstrings(string s) {
//     int n = s.length();

//     vector<vector<bool>> dp(n + 1 , vector<bool>(n + 1 , false));

//     int count = 0;

//     for(int L = 1 ; L <= n ; L++){
//         for(int i = 0 ; i + L - 1 < n ; i++){
//             int j = i + L - 1;

//             if(i == j){
//                 dp[i][i] = true;
//             }
//             else if(i + 1 == j){
//                 dp[i][j] = (s[i] == s[j]);
//             }
//             else{
//                 dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);
//             }

//             if(dp[i][j] == true)
//                 count++;
//         }
//     }

//     return count;
// }





// Approach : Using Two pointer's (Expanding from center)

// int count;

// void check(string& s , int i , int j , int n){
//     while(i >= 0 && j < n && s[i] == s[j]){
//         count++;
//         i--;
//         j++;
//     }
// }

// int countSubstrings(string s) {
//     int n = s.length();

//     for(int i = 0 ; i < n ; i++){
//         check(s , i , i , n);
//         check(s , i , i + 1 , n);
//     }

//     return count;
// }