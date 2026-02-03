// Approach : Recursion

// void solve(vector<int>& coins , int n , int& minCoins , int cnt , int amount){
//     if(amount < 0)  return ;

//     if(amount == 0){
//         minCoins = min(minCoins , cnt);
//         return ;
//     }

//     for(int i = 0 ; i < n ; i++){
//         solve(coins , n , minCoins , cnt + 1 , amount - coins[i]);
//     }
// }

// int coinChange(vector<int>& coins, int amount) {
//     int n = coins.size();

//     int minCoins = INT_MAX;

//     solve(coins , n , minCoins , 0 , amount);

//     return minCoins == INT_MAX ? -1 : minCoins;
// }




// Approach : Memoization

// int solve(vector<int>& coins, int amount, vector<int>& dp) {
//     if (amount < 0) return INT_MAX;
//     if (amount == 0) return 0;

//     if (dp[amount] != -1)
//         return dp[amount];

//     int minCoins = INT_MAX;

//     for (int coin : coins) {
//         int res = solve(coins, amount - coin, dp);
//         if (res != INT_MAX) {
//             minCoins = min(minCoins, res + 1);
//         }
//     }

//     dp[amount] = minCoins;
//     return minCoins;
// }

// int coinChange(vector<int>& coins, int amount) {
//     vector<int> dp(amount + 1, -1);

//     int ans = solve(coins, amount, dp);
    
//     return (ans == INT_MAX) ? -1 : ans;
// }




// Approach : Tabulation

// int coinChange(vector<int>& coins, int amount) {
//     vector<int> dp(amount + 1, INT_MAX);

//     dp[0] = 0; // 0 coins needed to make amount 0

//     for (int i = 1; i <= amount; i++) {
//         for (int coin : coins) {
//             if (i - coin >= 0 && dp[i - coin] != INT_MAX) {
//                 dp[i] = min(dp[i], dp[i - coin] + 1);
//             }
//         }
//     }

//     return dp[amount] == INT_MAX ? -1 : dp[amount];
// }