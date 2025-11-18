// Approach : Using Recursion

// int solve(vector<int> &num, int tar){
//     if(tar < 0)
//         return 0;

//     if(tar == 0)
//         return 1;

//     int ans = 0;
//     for(int idx = 0 ; idx < num.size() ; idx++){ 
//         ans += solve(num , tar - num[idx]);
//     }

//     return ans;
// }

// int findWays(vector<int> &num, int tar)
// {
//     return solve(num , tar);
// }




// Approach : Using Memoization

// int solve(vector<int> &num, int tar , vector<int>& dp){
//     if(tar < 0)
//         return 0;

//     if(tar == 0)
//         return 1;

//     if(dp[tar] != -1)
//         return dp[tar];

//     int ans = 0;
//     for(int idx = 0 ; idx < num.size() ; idx++){ 
//         ans += solve(num , tar - num[idx] , dp);
//     }

//     return dp[tar] = ans;
// }

// int findWays(vector<int> &num, int tar)
// {
//     vector<int> dp(tar + 1 , -1);

//     return solve(num , tar , dp);
// }





// Approach : Using Tabulation

// int solve(vector<int> &num, int tar){
//     vector<int> dp(tar + 1 , 0);
//     dp[0] = 1;

//     for(int i = 1 ; i <= tar ; i++){
//         // traversing on num vector
//         for(int j = 0 ; j < num.size() ; j++){
//             if(i - num[j] >= 0)
//                 dp[i] += dp[i - num[j]];
//         }
//     }

//     return dp[tar];
// }

// int findWays(vector<int> &num, int tar)
// {
//     return solve(num , tar);
// }