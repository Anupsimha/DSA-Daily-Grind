// Approach : Using Recursion
// Time Complexity : O(2^N) -> Exponential
// Space Complexity : O(N)  (Recursion Stack Space)
//
// long long int countDerangements(int n) {
//     Base Case
//     if(n == 1)
//         return 0;
//
//     if(n == 2)
//         return 1;
//
//     int ans = ( ((n - 1) % MOD) * ( (countDerangements(n - 1) % MOD) + (countDerangements(n - 2) % MOD) ) % MOD );
//
//     return ans;
// }




// Approach : Using Recursion + Memoization
// Time Complexity : O(N)
// Space Complexity : O(N) + O(N)  (Recursion Stack Space + DP
//
// #define MOD 1000000007
// #include <vector>
//
// long long int solveMem(int n , vector<long long int>& dp){
//     // Base Case
//     if(n == 1)
//         return 0;
//
//     if(n == 2)
//         return 1;
//
//     if(dp[n] != -1)
//         return dp[n];
//
//     dp[n] = ( ((n - 1) % MOD) * ( (solveMem(n - 1 , dp) % MOD) + (solveMem(n - 2 , dp) % MOD) ) % MOD );
//
//     return dp[n];
// }
//
// long long int countDerangements(int n) {
//     vector<long long int> dp(n + 1 , -1);
//
//     return solveMem(n , dp);
// }




// Approach : Using Tabulation
// Time Complexity : O(N)
// Space Complexity : O(N)  (DP Array Space)

// #define MOD 1000000007
// #include <vector>
//
// long long int solveTab(int n){
//     vector<long long int> dp(n + 1 , 0);
//
//     dp[1] = 0;
//     dp[2] = 1;
//
//     for(int i = 3 ; i <= n ; i++){
//         long long int first = dp[i - 1] % MOD;
//         long long int second = dp[i - 2] % MOD;
//         long long int sum = (first + second) % MOD;
//
//         long long int ans = ((i - 1) * sum) % MOD;
//         dp[i] = ans;
//     }
//
//     return dp[n];
// }
//
// long long int countDerangements(int n) {
//     return solveTab(n);
// }





// Approach : Using Space Optimization
// Time Complexity : O(N)
// Space Complexity : O(1)  (Constant Space)

// #define MOD 1000000007
// #include <vector>
//
// long long int solveSpace(int n){
//     long long int prev2 = 0;
//     long long int prev1 = 1;
//
//     for(int i = 3 ; i <= n ; i++){
//         long long int first = prev1 % MOD;
//         long long int second = prev2 % MOD;
//         long long int sum = (first + second) % MOD;
//
//         long long int ans = ((i - 1) * sum) % MOD;
//         prev2 = prev1;
//         prev1 = ans;
//     }
//
//     return prev1;
// }
//
// long long int countDerangements(int n) {
//     return solveSpace(n);
// }