// Approach : Recursion
//
// typedef long long ll; 
//
// ll solve(int n){
//     if(n == 0)
//         return 1;
//
//     if(n < 0)
//         return 0;
//
//     return solve(n - 1) + solve(n - 2);
// }
//
// int climbStairs(int n) {
//     return (int)solve(n);
// }





// Approach : Recursion + Memoization
// Time Complexity : O(n)
// Space Complexity : O(n)

// typedef long long ll; 
//
// ll solve(int n , int i , vector<ll> &dp){
//     // Base Case
//     if(i == n)
//         return 1;
//
//     if(i > n)
//         return 0;
//
//     if(dp[i] != -1)
//         return dp[i];
//
//     dp[i] = solve(n , i + 1 , dp) + solve(n , i + 2 , dp);
//
//     return dp[i];
// }
//
// int climbStairs(int n) {
//     vector<ll> dp(n + 1 , -1);
//
//     ll ans = solve(n , 0 , dp);
//
//     return (int)ans;
// }





// Approach : Tabulation
// Time Complexity : O(n)
// Space Complexity : O(n)

// typedef long long ll; 
//
// ll solve(int n){
//     vector<ll> dp(n + 1 , 0);
//     dp[0] = 1;
//     dp[1] = 1;
//
//     for(int i = 2 ; i <= n ; i++){
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }
//
//     return dp[n];
// }
//
// int climbStairs(int n) {
//     return (int)solve(n);
// }





// Approach : Space Optimization
// Time Complexity : O(n)
// Space Complexity : O(1)

// typedef long long ll; 
//
// ll solve(int n){
//     int prev1 = 1;
//     int prev2 = 1;
//
//     for(int i = 2 ; i <= n ; i++){
//         int curr = prev1 + prev2;
//
//         prev2 = prev1;
//         prev1 = curr;
//     }
//
//     return prev1;
// }
//
// int climbStairs(int n) {
//     return (int)solve(n);
// }