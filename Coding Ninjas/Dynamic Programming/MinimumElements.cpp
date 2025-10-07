// Approach 1 : Using Recursion

// int solveRec(vector<int> &num , int x){
//     // Base Case
//     if(x == 0)
//         return 0;

//     if(x < 0)
//         return INT_MAX;

//     int mini = INT_MAX;
//     for(int i = 0 ; i < num.size() ; i++){
//         int ans = solveRec(num , x - num[i]);
//         if(ans != INT_MAX)
//             mini = min(mini , 1 + ans);
//     }

//     return mini;
// }

// int minimumElements(vector<int> &num, int x)
// {
//     int ans = solveRec(num , x);
//     if(ans == INT_MAX)
//         return -1;
//     return ans;
// }

///////////////////////////  or  ////////////////////////////

// void solve(vector<int> &num, int x , int idx , int sum , int count , int &minCount){
//     if(sum == x){
//         minCount = min(minCount , count);
//         return ;
//     }

//     if(idx >= num.size() || sum > x)
//         return ;

//     solve(num , x , idx , sum + num[idx] , count + 1 , minCount);

//     solve(num , x , idx + 1 , sum , count , minCount);
// }

// int minimumElements(vector<int> &num, int x)
// {
//     int minCount = INT_MAX;
//     int count = 0;

//     solve(num , x , 0 , 0 , count , minCount);
    
//     return (minCount == INT_MAX ? -1 : minCount);
// }





// Approach 2 : Using Top Down
// Time Complexity : O(N * X)
// Space Complexity : O(X)

// int solveMem(vector<int> &num , int x , vector<int> &dp){
//     // Base Case
//     if(x == 0)
//         return 0;

//     if(x < 0)
//         return INT_MAX;

//     if(dp[x] != -1)
//         return dp[x];

//     int mini = INT_MAX;
//     for(int i = 0 ; i < num.size() ; i++){
//         int ans = solveMem(num , x - num[i] , dp);
//         if(ans != INT_MAX)
//             mini = min(mini , 1 + ans);
//     }

//     dp[x] = mini;

//     return mini;
// }

// int minimumElements(vector<int> &num, int x)
// {
//     vector<int> dp(x + 1 , -1);
//     int ans = solveMem(num , x , dp);

//     if(ans == INT_MAX)
//         return -1;
//     else
//         return ans;
// }




// Approach 3 : Using Bottom Up (Tabulation)
// Time Complexity : O(N * X)
// Space Complexity : O(X)

// int solveTab(vector<int> &num , int x){
//     vector<int> dp(x + 1 , INT_MAX);     // Stores the amount of coins needed
//     dp[0] = 0;

//     for(int i = 1 ; i <= x ; i++){
//         // trying to solve for every amt figure from 1 to x
//         for(int j = 0 ; j < num.size() ; j++){
//             if(i - num[j] >= 0 && dp[i - num[j]] != INT_MAX)
//                  dp[i] = min(dp[i]  , 1 + dp[i - num[j]]);
//         }
//     }

//     if(dp[x] == INT_MAX)
//         return -1;

//     return dp[x];
// }

// int minimumElements(vector<int> &num, int x)
// {
//     return solveTab(num , x);
// }



// Approach 4 : Using Space Optimisation

// No use of doing space optimisation here as we are using only 1D array