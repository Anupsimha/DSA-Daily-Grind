// Approach : Using Recursion + Memoization

// #include <bits/stdc++.h> 

// const long long MOD = 1e9+7;
//
// int solve(long long nStairs , int i , vector<long long> &dp){
//     // Base Case
//     if(i == nStairs)
//         return 1;
//
//     if(i > nStairs)
//         return 0;
//
//     if(dp[i] != -1)
//         return dp[i];
//
//     dp[i] = (solve(nStairs , i + 1 , dp) + solve(nStairs , i + 2 , dp)) % MOD;
//     return dp[i];
// }
//
// int countDistinctWays(int nStairs) {
//     vector<long long> dp(nStairs + 1 , -1);
//     long long ans = solve(nStairs , 0 , dp);
//     return (int)ans;
// }

///////////////////////////////////////////////////////////////////////////////////////

// From nStairs to 0 Counting Ways
//
// const long long MOD = 1e9 + 7;
//
// int solve(int n , vector<int>& dp){
//     if(n < 0)
//         return 0;
//    
//     if(n == 0)
//         return 1;
//
//     if(dp[n] != -1)
//         return dp[n] % MOD;
//
//     dp[n] = (solve(n - 1 , dp) % MOD + solve(n - 2 , dp) % MOD) % MOD;
//
//     return dp[n];
// }
//
// int countDistinctWays(int nStairs) {
//     vector<int> dp(nStairs + 1 , -1);
//
//     return solve(nStairs , dp);
// }





// Approach : Using Tabulation
//
// const long long MOD = 1e9+7;
//
// int solve(long long nStairs){
//     if(nStairs == 0)    return 1;
//     if(nStairs == 1)    return 1;
//
//     vector<long long> dp(nStairs + 1 , 0);
//     dp[0] = 1;  // one way to stay at the bottom
//     dp[1] = 1;  // one way to climb the stair 1
//
//     for(int i = 2 ; i <= nStairs ; i++){
//         dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
//     }
//
//     return dp[nStairs];
// }
//
// int countDistinctWays(int nStairs) {
//     long long ans = solve(nStairs);
//     return (int)ans;
// }



// Approach : Space Optimization


// #include <bits/stdc++.h> 
//
// const long long MOD = 1e9+7;
//
// int solve(long long nStairs){
//     if(nStairs == 0)    return 1;
//     if(nStairs == 1)    return 1;
//
//     int prev2 = 1;
//     int prev1 = 1;
//
//     for(int i = 2 ; i <= nStairs ; i++){
//         long long curr = (prev1 + prev2) % MOD;
//         prev2 = prev1;
//         prev1 = curr;
//     }
//
//     return (int)prev1;
// }
//
// int countDistinctWays(int nStairs) {
//     long long ans = solve(nStairs);
//     return (int)ans;
// }