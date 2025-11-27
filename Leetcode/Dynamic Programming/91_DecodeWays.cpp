// Approach : Recursion 
// Time Complexity : Exponential
// Space Complexity : O(n)

// int solve(string &s , int &n , int i){
//     if(i == n)
//         return 1;

//     if(s[i] == '0')
//         return 0;

//     int curr_char_possibilities = solve(s , n , i + 1);

//     int next_char_possibilities = 0;
//     if(i + 1 < n && (s[i] == '1' || (s[i] == '2' && s[i + 1] <= '6'))) // check is next number makes less than 26
//         next_char_possibilities = solve(s , n , i + 2);

//     return curr_char_possibilities + next_char_possibilities;
// }

// int numDecodings(string s) {
//     int n = s.length();
    
//     return solve(s , n , 0);
// }




// Approach : Recursion + Memoization
// Time Complexity : O(n)
// Space Complexity : O(n)

// int solve(string &s , int &n , int i , vector<int>& dp){
//     if(i == n)
//         return 1;

//     if(s[i] == '0')
//         return 0;

//     if(dp[i] != -1)
//         return dp[i];

//     int curr_char_possibilities = solve(s , n , i + 1 , dp);

//     int next_char_possibilities = 0;
//     if(i + 1 < n && (s[i] == '1' || (s[i] == '2' && s[i + 1] <= '6'))) // check is next number makes less than 26
//         next_char_possibilities = solve(s , n , i + 2 , dp);

//     return dp[i] = curr_char_possibilities + next_char_possibilities;
// }

// int numDecodings(string s) {
//     int n = s.length();
//     vector<int> dp(n + 1 , -1);
    
//     return solve(s , n , 0 , dp);
// }





// Approach : Tabulation
// Time Complexity : O(n)
// Space Complexity : O(n)

// int numDecodings(string s) {
//     if(s[0] == '0')
//         return 0;

//     int n = s.length();
//     vector<int> dp(n + 1 , 0);
//     dp[0] = 1;
//     dp[1] = 1;

//     for(int i = 2 ; i <= n ; i++){
//         int one = s[i - 1] - '0';
//         int two = stoi(s.substr(i - 2 , 2));

//         if(1 <= one && one <= 9){
//             dp[i] += dp[i - 1];
//         } 
//         if(10 <= two && two <= 26){
//             dp[i] += dp[i - 2];
//         }
//     }

//     return dp[n];
// }