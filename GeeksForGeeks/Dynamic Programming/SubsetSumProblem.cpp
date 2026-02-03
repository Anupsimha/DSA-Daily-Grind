// Approach : Using Recursion

// bool solve(vector<int>& arr , int n , int sum , int idx){
//     if(sum == 0)    return true;
    
//     if(idx >= n)    return false;
    
//     bool take = false;
//     if(arr[idx] <= sum)
//         take = solve(arr , n , sum - arr[idx] , idx + 1);
        
//     bool notTake = solve(arr , n , sum , idx + 1);
    
//     return take || notTake;
// }

// bool isSubsetSum(vector<int>& arr, int sum) {
//     int n = arr.size();
    
//     return solve(arr , n , sum , 0);
// }




// Approach : Using Recursion + Memoization

// bool solve(vector<int>& arr , int n , vector<vector<bool>>& dp , int sum , int idx){
//     if(sum == 0)    return true;
    
//     if(idx >= n)    return false;
    
//     if(dp[idx][sum])    return dp[idx][sum];
    
//     bool take = false;
//     if(arr[idx] <= sum)
//         take = solve(arr , n , dp , sum - arr[idx] , idx + 1);
        
//     bool notTake = solve(arr , n , dp , sum , idx + 1);
    
//     return dp[idx][sum] = take || notTake;
// }

// bool isSubsetSum(vector<int>& arr, int sum) {
//     int n = arr.size();
    
//     vector<vector<bool>> dp(n + 1 , vector<bool>(sum + 1 , false));
    
//     return solve(arr , n , dp , sum , 0);
// }




// Approach : Using Tabulation

// bool isSubsetSum(vector<int>& arr, int sum) {
//     int n = arr.size();
    
//     vector<vector<bool>> dp(n , vector<bool>(sum + 1 , false));
    
//     for(int i = 0 ; i < n ; i++){
//         dp[i][0] = true;
//     }
    
//     dp[0][arr[0]] = true;
    
//     for(int i = 1 ; i < n ; i++){
//         for(int j = 1 ; j <= sum ; j++){
//             bool take = false;
//             if(arr[i] <= j)
//                 take = dp[i - 1][j - arr[i]];
                
//             bool notTake = dp[i - 1][j];
            
//             dp[i][j] = take || notTake;
//         }
//     }
    
//     return dp[n - 1][sum];
// }