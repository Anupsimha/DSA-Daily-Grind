// Approach 1 : Recursion
// Time Complexity : O(2^n)
//
// #define MOD 1000000007
// #include <bits/stdc++.h> 
//
// int add(int a , int b){
//     return (a % MOD + b % MOD) % MOD;
// }
//
// int mull(int a , int b){
//     return ((a % MOD) * (b % MOD)) % MOD;
// }
//
// int solve(int n , int k){
//     // Base Case
//     if(n == 1)
//         return k;
//     if(n == 2)
//         return add(k , mull(k , k - 1));
//
//     int ans = add(mull(solve(n - 2 , k) , k - 1) , mull(solve(n - 1 , k) , k - 1));
//     return ans;
// }
//
// int numberOfWays(int n, int k) {
//     return solve(n , k);
// }




// Approach 2 : Recursion + Memoization
// Time Complexity : O(n)
// Space Complexity : O(n) + O(n)  (Recursion Stack Space + DP Array Space)
//
// #define MOD 1000000007
// #include <bits/stdc++.h> 
//
// int add(int a , int b){
//     return (a % MOD + b % MOD) % MOD;
// }
//
// int mull(int a , int b){
//     return ((a % MOD) * 1LL * (b % MOD)) % MOD;
// }
//
// int solveMem(int n , int k , vector<int> &dp){
//     // Base Case
//     if(n == 1)
//         return k;
//     if(n == 2)
//         return add(k , mull(k , k - 1));
//
//     if(dp[n] != -1)
//         return dp[n];
//
//     dp[n] = add(mull(solveMem(n - 2 , k , dp) , k - 1) , mull(solveMem(n - 1 , k , dp) , k - 1));
//     return dp[n];
// }
//
// int numberOfWays(int n, int k) {
//     vector<int> dp(n + 1 , -1);
//
//     return solveMem(n , k , dp);
// }




// Approach 3 : Tabulation
// Time Complexity : O(n)
// Space Complexity : O(n)  (DP Array Space)
//
// #define MOD 1000000007
// #include <bits/stdc++.h> 
//
// int add(int a , int b){
//     return (a % MOD + b % MOD) % MOD;
// }
//
// int mull(int a , int b){
//     return ((a % MOD) * 1LL * (b % MOD)) % MOD;
// }
//
// int solveTab(int n , int k){
//     vector<int> dp(n + 1 , 0);
//     dp[1] = k;
//     dp[2] = add(k , mull(k , k - 1));
//
//     for(int i = 3 ; i <= n ; i++){
//         dp[i] = add(mull(dp[i - 2] , k - 1) , mull(dp[i - 1] , k - 1));
//     }
//
//     return dp[n];
// }
//
// int numberOfWays(int n, int k) {
//     return solveTab(n , k);
// }




// Approach 4 : Space Optimization
// Time Complexity : O(n)
// Space Complexity : O(1)  (Constant Space)
//
// #define MOD 1000000007
// #include <bits/stdc++.h> 
//
// int add(int a , int b){
//     return (a % MOD + b % MOD) % MOD;
// }
//
// int mull(int a , int b){
//     return ((a % MOD) * 1LL * (b % MOD)) % MOD;
// }
//
// int solveSpace(int n , int k){
//     int prev2 = k;
//     int prev1 = add(k , mull(k , k - 1));
//
//     for(int i = 3 ; i <= n ; i++){
//         int ans = add(mull(prev2 , k - 1) , mull(prev1 , k - 1));
//
//         prev2 = prev1;
//         prev1 = ans;
//     }
//
//     return prev1;
// }
//
// int numberOfWays(int n, int k) {
//     return solveSpace(n , k);
// }

