// Approach : Recursion
// Time Complexity : O(2^N)
// Space Complexity : O(N)

// int res = 0;
// int n;

// void solve(vector<int>& nums , vector<int> temp , int idx){
//     res = max(res, (int)temp.size());

//     for(int i = idx ; i < n ; i++){
//         if (temp.empty() || nums[i] > temp.back()) {
//             temp.push_back(nums[i]);
//             solve(nums, temp, i + 1);
//             temp.pop_back();
//         }
//     }
// }

// int lengthOfLIS(vector<int>& nums) {
//     n = nums.size();
//     vector<int> temp;
//     solve(nums , temp , 0);

//     return res;
// }

            // or //

// Time Complexity : O(2^N)
// Space Complexity : O(1)

// int n;

// int solve(vector<int>& nums , int idx , int prev){
//     if(idx >= n)
//         return 0;

//     int take = 0;
//     if(prev == -1 || nums[prev] < nums[idx])
//         take = 1 + solve(nums , idx + 1 , idx);

//     int skip = solve(nums , idx + 1 , prev);

//     return max(take , skip);
// }

// int lengthOfLIS(vector<int>& nums) {
//     n = nums.size();

//     return solve(nums , 0 , -1);
// }





// Approach : Memoization
// Time Complexity : O(N^2)
// Space Complexity : O(N^2)

// int n;

// int solve(vector<int>& nums , int idx , int prev , vector<vector<int>>& dp){
//     if(idx >= n)
//         return 0;

//     if(prev != -1 && dp[idx][prev] != -1)
//         return dp[idx][prev];

//     int take = 0;
//     if(prev == -1 || nums[prev] < nums[idx])
//         take = 1 + solve(nums , idx + 1 , idx , dp);

//     int skip = solve(nums , idx + 1 , prev , dp);

//     if(prev != -1)
//         dp[idx][prev] = max(take , skip);

//     return max(take , skip);
// }

// int lengthOfLIS(vector<int>& nums) {
//     n = nums.size();
//     vector<vector<int>> dp(n + 1 , vector<int>(n + 1 , -1));

//     return solve(nums , 0 , -1 , dp);
// }





// Approach : Tabulation
// Time Complexity : O(N^2)
// Space Complexity : O(N)

// int n;

// int solve(vector<int>& nums){
//     vector<int> dp(n , 1);
//     int maxLIS = 1;

//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < i ; j++){
//             if(nums[j] < nums[i])
//                 dp[i] = max(dp[i] , dp[j] + 1);

//             maxLIS = max(maxLIS , dp[i]);
//         }
//     }

//     return maxLIS;
// }

// int lengthOfLIS(vector<int>& nums) {
//     n = nums.size();

//     return solve(nums);
// }