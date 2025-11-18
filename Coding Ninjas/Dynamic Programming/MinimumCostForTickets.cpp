// Approach : Recursion

// int solve(int n , vector<int>& days, vector<int>& cost , int index){
//     // BASE CASE
//     if(index >= n){
//         return 0;
//     }

//     // 1 day pass
//     int option1 = cost[0] + solve(n , days , cost , index + 1);

//     // 7 day pass
//     int i;
//     for(i = index ; i < n && days[i] < days[index] + 7 ; i++);

//     int option2 = cost[1] + solve(n , days , cost , i);

//     // 30 day pass
//     for(i = index ; i < n && days[i] < days[index] + 30 ; i++);

//     int option3 = cost[2] + solve(n , days , cost , i);

//     return min(option1 , min(option2 , option3));
// }

// int minimumCoins(int n, vector<int> days, vector<int> cost)
// {
//     return solve(n , days , cost , 0);
// }





// Approach : Memoization
// Time Complexity : O(1)
// Space Complexity : O(N)

// int solve(int n , vector<int>& days, vector<int>& cost , int index , vector<int>& dp){
//     // BASE CASE
//     if(index >= n){
//         return 0;
//     }

//     if(dp[index] != -1)
//         return dp[index];

//     // 1 day pass
//     int option1 = cost[0] + solve(n , days , cost , index + 1 , dp);

//     // 7 day pass
//     int i;
//     for(i = index ; i < n && days[i] < days[index] + 7 ; i++);

//     int option2 = cost[1] + solve(n , days , cost , i , dp);

//     // 30 day pass
//     for(i = index ; i < n && days[i] < days[index] + 30 ; i++);

//     int option3 = cost[2] + solve(n , days , cost , i , dp);

//     return dp[index] = min(option1 , min(option2 , option3));
// }

// int minimumCoins(int n, vector<int> days, vector<int> cost)
// {
//     vector<int> dp(n + 1 , -1);

//     return solve(n , days , cost , 0 , dp);
// }





// Approach : Tabulation
// Time Complexity : O(N)
// Space Complexity : O(N)

// int solve(int n , vector<int>& days, vector<int>& cost){
//     vector<int> dp(n + 1 , INT_MAX);
//     dp[n] = 0;

//     for(int k = n - 1 ; k >= 0 ; k--){
//         // 1 day pass
//         int option1 = cost[0] + dp[k + 1];

//         // 7 day pass
//         int i;
//         for(i = k ; i < n && days[i] < days[k] + 7 ; i++);
//         int option2 = cost[1] + dp[i];

//         // 30 day pass
//         for(i = k ; i < n && days[i] < days[k] + 30 ; i++);
//         int option3 = cost[2] + dp[i];

//         dp[k] = min(option1 , min(option2 , option3));
//     }

//     return dp[0];
// }

// int minimumCoins(int n, vector<int> days, vector<int> cost)
// {
//     return solve(n , days , cost);
// }