// vector<int> MinimumCoins(int n) {
//     vector<int> currency = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
//     vector<int> res;

//     // Start from the largest coin
//     for (int i = currency.size() - 1; i >= 0; i--) {
//         while (n >= currency[i]) {
//             n -= currency[i];
//             res.push_back(currency[i]);
//         }
//     }

//     return res;
// }