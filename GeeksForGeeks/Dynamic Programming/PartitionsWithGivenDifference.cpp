// Approach : Using Recursion

// int solve(vector<int>& arr , int n , int target , int idx){
//     if(idx >= n)
//         return target == 0;
        
//     int take = solve(arr , n , target - arr[idx] , idx + 1);
    
//     int notTake = solve(arr , n , target , idx + 1);
    
//     return take + notTake;
// }

// int countPartitions(vector<int>& arr, int diff) {
//     int n = arr.size();
    
//     int totalSum = accumulate(begin(arr) , end(arr) , 0);
    
//     return solve(arr , n , (totalSum - diff)/2 , 0);
// }

                        // or //

// int solve(vector<int>& arr , int n , int diff , int leftSum , int rightSum , int idx){
//     if(leftSum > rightSum)  return 0;
    
//     if(idx >= n)
//         return rightSum - leftSum == diff;
        
//     int addToLeft = solve(arr , n , diff , leftSum + arr[idx] , rightSum - arr[idx] , idx + 1);
    
//     int skipForLeft = solve(arr , n , diff , leftSum , rightSum , idx + 1);
    
//     return addToLeft + skipForLeft;
// }

// int countPartitions(vector<int>& arr, int diff) {
//     int n = arr.size();
    
//     int totalSum = accumulate(begin(arr) , end(arr) , 0);
    
//     return solve(arr , n , diff , 0 , totalSum , 0);
// }






// Approach : Using Recursion + Memoization

// const int mod = 1e9 + 7;

// int solve(vector<int>& arr , int n , vector<vector<int>>& dp , int target , int idx){
//     if(idx >= n)
//         return target == 0;
        
//     if (target < 0) return 0;
        
//     if(dp[idx][target] != -1)   return dp[idx][target];    
    
//     int take = 0;
//     if (arr[idx] <= target)
//         take = solve(arr , n , dp , target - arr[idx] , idx + 1);
    
//     int notTake = solve(arr , n , dp , target , idx + 1);
    
//     return dp[idx][target] = (take + notTake) % mod;
// }

// int countPartitions(vector<int>& arr, int diff) {
//     int n = arr.size();
    
//     int totalSum = accumulate(begin(arr) , end(arr) , 0);
    
//     if(totalSum < diff || (totalSum - diff) % 2 != 0)   return 0;
    
//     vector<vector<int>> dp(n + 1 , vector<int>(((totalSum - diff)/2) + 1 , -1));
    
//     return solve(arr , n , dp , (totalSum - diff)/2 , 0);
// }





// Approach : Using Tabulation

// int countPartitions(vector<int>& arr, int diff) {
//     int n = arr.size();
    
//     int totalSum = accumulate(begin(arr) , end(arr) , 0);
    
//     if(totalSum < diff || (totalSum - diff) % 2 != 0)   return 0;
    
//     int target = (totalSum - diff)/2;
//     vector<vector<int>> dp(n , vector<int>(target + 1 , 0));
    
//     if (arr[0] == 0)
//         dp[0][0] = 2;
//     else
//         dp[0][0] = 1;

//     if (arr[0] != 0 && arr[0] <= target)
//         dp[0][arr[0]] = 1;
        
//     for(int i = 1 ; i < n ; i++){
//         for(int j = 0 ; j <= target ; j++){
//             int take = 0;
//             if (arr[i] <= j)
//                 take = dp[i - 1][j - arr[i]];
            
//             int notTake = dp[i - 1][j];
            
//             dp[i][j] = (take + notTake);
//         }
//     }
    
//     return dp[n - 1][target];
// }