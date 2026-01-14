// Approach : Using Recursion
// Time Complexity : O(2^N)

// int n;

// int findMaxLIS(vector<int>& nums, int idx, int prevIdx) {
//     if (idx == n)
//         return 0;

//     int take = 0;
//     if (prevIdx == -1 || nums[idx] > nums[prevIdx]) {
//         take = 1 + findMaxLIS(nums, idx + 1, idx);
//     }

//     int notTake = findMaxLIS(nums, idx + 1, prevIdx);

//     return max(take, notTake);
// }

// int countLIS(vector<int>& nums, int idx, int prevIdx, int currLen, int maxLen) {
//     if (idx == n) {
//         return (currLen == maxLen);
//     }

//     int count = 0;

//     // Skip
//     count += countLIS(nums, idx + 1, prevIdx, currLen, maxLen);

//     // Take
//     if (prevIdx == -1 || nums[idx] > nums[prevIdx]) {
//         count += countLIS(nums, idx + 1, idx, currLen + 1, maxLen);
//     }

//     return count;
// }

// int findNumberOfLIS(vector<int>& nums) {
//     n = nums.size();

//     int maxLen = findMaxLIS(nums, 0, -1);
//     return countLIS(nums, 0, -1, 0, maxLen);
// }





// Approach : Using Memoization
// Time Complexity : O(N^2)
// Space Complexity : O(N^2)

// int n;

// int findMaxLIS(vector<int>& nums, vector<vector<int>>& dp , int idx, int prevIdx) {
//     if (idx == n)
//         return 0;

//     if(prevIdx != -1 && dp[idx][prevIdx] != -1)
//         return dp[idx][prevIdx];

//     int take = 0;
//     if (prevIdx == -1 || nums[idx] > nums[prevIdx]) {
//         take = 1 + findMaxLIS(nums, dp , idx + 1, idx);
//     }

//     int notTake = findMaxLIS(nums, dp , idx + 1, prevIdx);

//     if(prevIdx != -1)
//         dp[idx][prevIdx] = max(take, notTake);

//     return max(take, notTake);
// }

// int countLIS(vector<int>& nums, vector<vector<vector<int>>>& dpCnt , int idx, int prevIdx, int currLen, int maxLen) {
//     if (idx == n)
//         return (currLen == maxLen);

//     int &res = dpCnt[idx][prevIdx + 1][currLen];
//     if (res != -1)
//         return res;

//     int count = 0;

//     // Skip
//     count += countLIS(nums, dpCnt, idx + 1, prevIdx, currLen, maxLen);

//     // Take
//     if (prevIdx == -1 || nums[idx] > nums[prevIdx]) {
//         count += countLIS(nums, dpCnt, idx + 1, idx, currLen + 1, maxLen);
//     }

//     return res = count;
// }

// int findNumberOfLIS(vector<int>& nums) {
//     n = nums.size();

//     vector<vector<int>> dp(n + 1 , vector<int>(n + 1 , -1));
//     int maxLen = findMaxLIS(nums, dp , 0, -1);

//     vector<vector<vector<int>>> dpCnt;
//     dpCnt.assign(n, vector<vector<int>>(n + 1, vector<int>(maxLen + 1, -1)));
//     return countLIS(nums, dpCnt, 0, -1, 0, maxLen);
// }





// Approach : Using Tabulation
// Time Complexity : O(N^2)
// Space Complexity : O(N)

// int findNumberOfLIS(vector<int>& nums) {
//     int n = nums.size();

//     vector<int> dp(n , 1);
//     vector<int> count(n , 1);
    
//     for(int i = 1 ; i < n ; i++){
//         for(int j = 0 ; j < i ; j++){
//             if(nums[i] > nums[j]){
//                 if(dp[j] + 1 == dp[i])
//                     count[i] += count[j];
//                 else if(dp[j] + 1 > dp[i]){
//                     dp[i] = dp[j] + 1;
//                     count[i] = count[j];
//                 }
//             }
//         }
//     }

//     int maxVal = *max_element(begin(dp) , end(dp));

//     int res = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(dp[i] == maxVal)
//             res += count[i];
//     }

//     return res;
// }