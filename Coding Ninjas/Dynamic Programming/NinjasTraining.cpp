// Approach : Recursion

// void solve(vector<vector<int>> &points , int &maxSum , int n , int sum , int idx , int prevIdx){
//     if(idx >= n){
//         maxSum = max(maxSum , sum);
//         return ;
//     }

//     for(int i = 0 ; i < points[idx].size() ; i++){
//         if(i == prevIdx)
//             continue;

//         solve(points , maxSum , n , sum + points[idx][i] , idx + 1 , i);
//     }
// }

// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     int maxSum = 0;

//     solve(points , maxSum , n , 0 , 0 , -1);

//     return maxSum;
// }





// Approach : Recursion + Memoization

// int solve(vector<vector<int>> &points , vector<vector<int>>& dp , int idx , int prevIdx){
//     if(idx == points.size())
//         return 0;

//     if(prevIdx != -1 && dp[idx][prevIdx] != -1)
//         return dp[idx][prevIdx];

//     int maxi = 0;
//     for(int i = 0 ; i < 3 ; i++){
//         if(i == prevIdx)
//             continue;

//         maxi = max(maxi , points[idx][i] + solve(points , dp , idx + 1 , i));
//     }

//     if(prevIdx != -1)
//         return dp[idx][prevIdx] = maxi;

//     return maxi;
// }

// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     vector<vector<int>> dp(n , vector<int>(n , -1));

//     return solve(points , dp , 0 , -1);
// }






// Approach : Tabulation

// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     vector<vector<int>> dp(n, vector<int>(4, 0));

//     // Base case: Day 0
//     dp[0][0] = max(points[0][1], points[0][2]);
//     dp[0][1] = max(points[0][0], points[0][2]);
//     dp[0][2] = max(points[0][0], points[0][1]);
//     dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));

//     for (int day = 1; day < n; day++) {       // dp[day][last] = maximum points till day if the task done on the previous day was last
//         for (int last = 0; last < 4; last++) {
//             dp[day][last] = 0;
//             for (int task = 0; task < 3; task++) {
//                 if (task != last) {
//                     dp[day][last] = max(dp[day][last],
//                         points[day][task] + dp[day - 1][task]);
//                 }
//             }
//         }
//     }

//     return dp[n - 1][3];
// }
