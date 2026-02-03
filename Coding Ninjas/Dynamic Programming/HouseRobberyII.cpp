// Approach : Recusion

// long long int solve(vector<int>& nums , int n){
//     if(n < 0)
//         return 0;
//
//     if(n == 0)
//         return nums[0];
//
//     long long int incl = nums[n] + solve(nums , n - 2);
//     long long int excl = 0 + solve(nums , n - 1);
//
//     return max(incl , excl);
// }
//
// long long int houseRobber(vector<int>& valueInHouse)
// {
//     int n = valueInHouse.size();
//
//     if(n == 1)
//         return valueInHouse[0];
//
//     vector<int> first;
//     vector<int> second;
//
//     for(int i = 0 ; i < n ; i++){
//         if(i != n - 1)
//             first.push_back(valueInHouse[i]);
//
//         if(i != 0)
//             second.push_back(valueInHouse[i]);
//     }
//
//     return max(solve(first , n - 2) , solve(second , n - 2));
// }




// Approach 2 : Recursion + Memoization

// long long int solve(vector<int>& nums , vector<int>& dp , int n){
//     if(n < 0)
//         return 0;
//    
//     if(n == 0)
//         return nums[0];
//
//     if(dp[n] != -1)
//         return dp[n];
//
//     long long int incl = nums[n] + solve(nums , dp , n - 2);
//     long long int excl = 0 + solve(nums , dp , n - 1);
//
//     dp[n] = max(incl , excl);
//
//     return dp[n];
// }
//
// long long int houseRobber(vector<int>& valueInHouse)
// {
//     int n = valueInHouse.size();
//
//     if(n == 1)
//         return valueInHouse[0];
//
//     vector<int> first;
//     vector<int> second;
//
//     for(int i = 0 ; i < n ; i++){
//         if(i != n - 1)
//             first.push_back(valueInHouse[i]);
//
//         if(i != 0)
//             second.push_back(valueInHouse[i]);
//     }
//
//     vector<int> dp1(n - 1 , -1);
//     vector<int> dp2(n - 1 , -1);
//
//     return max(solve(first , dp1 , n - 2) , solve(second , dp2 , n - 2));
// }




// Approach 3 : Tabulation

// long long int solve(vector<int>& nums){
//     int n = nums.size();
//
//     vector<long long> dp(n , 0);
//     dp[0] = nums[0];
//     dp[1] = max((long long)nums[0], (long long)nums[1]);
//
//     for(int i = 2 ; i < n ; i++){
//         long long int incl = nums[i] + dp[i - 2];
//         long long int excl = 0 + dp[i - 1];
//
//         dp[i] = max(incl , excl);
//     }
//
//     return dp[n - 1];
// }
//
// long long int houseRobber(vector<int>& valueInHouse)
// {
//     int n = valueInHouse.size();
//
//     if(n == 1)
//         return valueInHouse[0];
//
//     vector<int> first;
//     vector<int> second;
//
//     for(int i = 0 ; i < n ; i++){
//         if(i != n - 1)
//             first.push_back(valueInHouse[i]);
//
//         if(i != 0)
//             second.push_back(valueInHouse[i]);
//     }
//
//     return max(solve(first) , solve(second));
// }





// #include <bits/stdc++.h> 

// long long int solveTab(vector<int> &valueInHouse){
//     long long int n = valueInHouse.size();
//
//     long long int prev2 = 0;
//     long long int prev1 = valueInHouse[0];
//
//     for(int i = 1 ; i < n ; i++){
//         long long int incl = prev2 + valueInHouse[i];
//         long long int excl = prev1 + 0;
//
//         long long int ans = max(incl , excl);
//         prev2 = prev1;
//         prev1 = ans;
//     }
//
//     return prev1;
// }
//
// long long int houseRobber(vector<int>& valueInHouse)
// {
//     int n = valueInHouse.size();
//
//     if(n == 1)
//         return valueInHouse[0];
//
//     vector<int> first , second;
//     for(int i = 0 ; i < n ; i++){
//         if(i != n - 1)
//             first.push_back(valueInHouse[i]);
//         if(i != 0)
//             second.push_back(valueInHouse[i]);
//     }
//
//     return max(solveTab(first) , solveTab(second));
// }