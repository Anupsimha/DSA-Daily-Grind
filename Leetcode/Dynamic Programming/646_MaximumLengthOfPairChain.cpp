// Approach : Recursion

// int n;
//
// int solve(vector<vector<int>>& pairs , int n , int idx , int prev){
//     if(idx >= n)
//         return 0;
//
//     int take = 0;
//     if(prev == -1 || pairs[idx][0] > pairs[prev][1])
//         take = 1 + solve(pairs , n , idx + 1 , idx);
//
//     int skip = solve(pairs , n , idx + 1 , prev);
//
//     return max(take , skip);
// }
//
// int findLongestChain(vector<vector<int>>& pairs) {
//     n = pairs.size();
//
//     sort(begin(pairs) , end(pairs));
//
//     return solve(pairs , n , 0 , -1);
// }




// Approach : Memoization

// int n;
//
// int solve(vector<vector<int>>& pairs , int n , int idx , int prev , vector<vector<int>>& dp){
//     if(idx >= n)
//         return 0;
//    
//     if(prev != -1 && dp[idx][prev] != -1)
//         return dp[idx][prev];
//
//     int take = 0;
//     if(prev == -1 || pairs[idx][0] > pairs[prev][1])
//         take = 1 + solve(pairs , n , idx + 1 , idx , dp);
//
//     int skip = solve(pairs , n , idx + 1 , prev , dp);
//
//     if(prev != -1)
//         return dp[idx][prev] = max(take , skip);
//
//     return max(take , skip);
// }
//
// int findLongestChain(vector<vector<int>>& pairs) {
//     n = pairs.size();
//
//     vector<vector<int>> dp(n + 1 , vector<int>(n + 1 , -1));
//
//     sort(begin(pairs) , end(pairs));
//
//     return solve(pairs , n , 0 , -1 , dp);
// }





// Approach : Tabulation

// int n;
//
// int solve(vector<vector<int>>& pairs){
//     vector<int> dp(n + 1 , 1);
//     int maxLIS = 1;
//
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < i ; j++){
//             if(pairs[j][1] < pairs[i][0])
//                 dp[i] = max(dp[i] , 1 + dp[j]);
//
//             maxLIS = max(maxLIS , dp[i]);
//         }
//     }
//
//     return maxLIS;
// }
//
// int findLongestChain(vector<vector<int>>& pairs) {
//     n = pairs.size();
//     sort(begin(pairs) , end(pairs));
//
//     return solve(pairs);
// }