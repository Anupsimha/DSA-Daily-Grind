// Approach : Using Recursion

// int solve(vector<int>& arr , int n , int target , int idx){
//     if(idx == n || target < 0)    return target == 0;
    
//     int take = 0;
//     if(arr[idx] <= target)
//         take = solve(arr , n , target - arr[idx] , idx + 1);
        
//     int notTake = solve(arr , n , target , idx + 1);
    
//     return take + notTake;
// }

// int perfectSum(vector<int>& arr, int target) {
//     int n = arr.size();
    
//     return solve(arr , n , target , 0);
// }




// Approach : Using Recursion + Memoization

// int solve(vector<int>& arr , int n , vector<vector<int>>& dp , int target , int idx){
//     if(idx == n)    
//         return target == 0;
    
//     if(dp[idx][target] != -1)   return dp[idx][target];
    
//     int take = 0;
//     if(arr[idx] <= target)
//         take = solve(arr , n , dp , target - arr[idx] , idx + 1);
        
//     int notTake = solve(arr , n , dp , target , idx + 1);
    
//     return dp[idx][target] = take + notTake;
// }

// int perfectSum(vector<int>& arr, int target) {
//     int n = arr.size();
    
//     vector<vector<int>> dp(n + 1 , vector<int>(target + 1 , -1));
    
//     return solve(arr , n , dp , target , 0);
// }





// Approach : Using Tabulation

// int perfectSum(vector<int>& arr, int target) {
//     int n = arr.size();
    
//     vector<vector<int>> dp(n , vector<int>(target + 1 , 0));
    
//     dp[0][0] = (arr[0] == 0) ? 2 : 1;
    
//     if(arr[0] != 0 && arr[0] <= target)    dp[0][arr[0]] = 1;
    
//     for(int i = 1 ; i < n ; i++){
//         for(int j = 0 ; j <= target ; j++){
//             int take = 0;
//             if(arr[i] <= j)
//                 take = dp[i - 1][j - arr[i]];
                
//             int notTake = dp[i - 1][j];
            
//             dp[i][j] = take + notTake;
//         }
//     }
    
//     return dp[n - 1][target];
// }