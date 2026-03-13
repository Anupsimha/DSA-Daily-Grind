// The answer of this question is basically a catalan number series -> Formula is (2n)! / (n + 1)! * n!

// Approach 1 : Using Recursion

// int numTrees(int n) {
//     if(n <= 1)    return 1;

//     int ans = 0;
//     for(int i = 1 ; i <= n ; i++){
//         ans += numTrees(i - 1) * numTrees(n - i);
//     }

//     return ans;
// }





// Approach 2 : Using Memoization

// int solve(int n , vector<int>& dp) {
//     if(n <= 1)    return 1;

//     if(dp[n] != -1) return dp[n];

//     int ans = 0;
//     for(int i = 1 ; i <= n ; i++){
//         ans += solve(i - 1 , dp) * solve(n - i , dp);
//     }

//     return dp[n] = ans;
// }

// int numTrees(int n) {
//     vector<int> dp(n + 1 , -1);

//     return solve(n , dp);
// }





// Approach : Using Tabulation

// int solve(int n) {
//     vector<int> dp(n + 1 , 0);
//     dp[0] = 1;
//     dp[1] = 1;

//     // i --> root Node 
//     for(int i = 2 ; i <= n ; i++){
//         // j --> No. of Nodes
//         for(int j = 1 ; j <= i ; j++){
//             dp[i] += dp[j - 1] * dp[i - j];
//         }
//     }

//     return dp[n];
// }

// int numTrees(int n) {
//     return solve(n);
// }