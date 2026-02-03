// Approach : Recursion

// int solve(int idx , vector<int>& coins , int amount , int n){
//     if(amount == 0) return 1;
//     if(amount < 0 || idx == n)  return 0;

//     int pick = solve(idx, coins, amount - coins[idx] , n);
//     int skip = solve(idx + 1, coins, amount , n);

//     return pick + skip;
// }

// int change(int amount, vector<int>& coins) {
//     int n = coins.size();

//     return solve(0 , coins , amount , n);
// }




// Approach : Memoization

// int solve(int idx , vector<int>& coins , int amount , int n , vector<vector<int>>& dp){
//     if(amount == 0) return 1;
//     if(amount < 0 || idx == n)  return 0;

//     if(dp[idx][amount] != -1)   return dp[idx][amount];

//     int pick = solve(idx, coins, amount - coins[idx] , n , dp);
//     int skip = solve(idx + 1, coins, amount , n , dp);

//     return dp[idx][amount] = pick + skip;
// }

// int change(int amount, vector<int>& coins) {
//     int n = coins.size();

//     vector<vector<int>> dp(n + 1 , vector<int>(amount + 1 , -1));

//     return solve(0 , coins , amount , n , dp);
// }




// Approach : Tabulation

// int change(int amount, vector<int>& coins) {
//     vector<unsigned long long> dp(amount + 1, 0); 
//     dp[0] = 1;
    
//     for (int c : coins) {
//         for (int a = c; a <= amount; a++) {
//             dp[a] += dp[a - c];
//         }
//     }
    
//     return dp[amount]; 
// }