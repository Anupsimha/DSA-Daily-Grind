// Approach : Using Recursion

// vector<int> currency = {1 , 2 , 5 , 10 , 20 , 50 , 100 , 500 , 1000};
//
// void solve(int n, vector<int>& res, vector<int>& best, int idx, int total, int& finalTotal){
//     if (n == 0) {
//         if (total < finalTotal) {
//             finalTotal = total;
//             best = res; 
//         }
//         return;
//     }
//
//     if(n < 0 || idx >= currency.size())
//         return ;
//
//     res.push_back(currency[idx]);
//     solve(n - currency[idx], res, best, idx, total + 1, finalTotal);
//     res.pop_back();
//
//     solve(n, res, best, idx + 1, total, finalTotal);
// }
//
// vector<int> MinimumCoins(int n)
// {
//     vector<int> res, best;
//     int finalTotal = INT_MAX;
//
//     solve(n, res, best, 0, 0, finalTotal);
//
//     reverse(begin(best) , end(best));
//
//     return best;
// }




// Approach 2 : Using Top Down (Memoization)

// vector<int> currency = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
//
// int solve(int n, vector<int>& dp) {
//     if (n == 0) return 0;              // Base case
//     if (dp[n] != -1) return dp[n];     // Already computed
//
//     int ans = INT_MAX;
//     for (int coin : currency) {
//         if (coin <= n) {
//             int sub = solve(n - coin, dp);
//             if (sub != INT_MAX) {
//                 ans = min(ans, sub + 1);
//             }
//         }
//     }
//     return dp[n] = ans;
// }
//
// vector<int> MinimumCoins(int n) {
//     vector<int> dp(n + 1, -1);
//     int minCoins = solve(n, dp);
//
//     // To reconstruct which coins were used
//     vector<int> res;
//     while (n > 0) {
//         for (int coin : currency) {
//             if (coin <= n && dp[n] == dp[n - coin] + 1) {
//                 res.push_back(coin);
//                 n -= coin;
//                 break;
//             }
//         }
//     }
//     return res;
// }