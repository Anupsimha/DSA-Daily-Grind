// Approach : Recursion
// Time Complexity : O(2^N)
// Space Complexity : O(1)

// int n;

// int solve(vector<int>& nums, int target , int sum , int idx){
//     if(idx >= n){
//         return target == sum;
//     }

//     int pos = solve(nums , target , sum - nums[idx] , idx + 1);

//     int neg = solve(nums , target , sum + nums[idx] , idx + 1);

//     return pos + neg;
// }

// int findTargetSumWays(vector<int>& nums, int target) {
//     n = nums.size();

//     return solve(nums , target , 0 , 0);
// }





// Approach : Memoization
// Time:  O(n * sumRange)
// Space: O(n * sumRange)

// int n;
// unordered_map<string, int> memo;

// int solve(vector<int>& nums, int target , int sum , int idx){
//     if (idx == n)
//         return sum == target;

//     string key = to_string(idx) + "," + to_string(sum);
//     if (memo.count(key))
//         return memo[key];

//     int pos = solve(nums, target, sum + nums[idx], idx + 1);
//     int neg = solve(nums, target, sum - nums[idx], idx + 1);

//     return memo[key] = pos + neg;
// }

// int findTargetSumWays(vector<int>& nums, int target) {
//     n = nums.size();

//     memo.clear();
//     return solve(nums , target , 0 , 0);
// }


                                    // or //

// int n;
// int OFFSET;
// vector<vector<int>> dp;

// int solve(vector<int>& nums, int target, int sum, int idx) {
//     if (idx == n)
//         return sum == target;

//     if (dp[idx][sum + OFFSET] != -1)
//         return dp[idx][sum + OFFSET];

//     int pos = solve(nums, target, sum + nums[idx], idx + 1);
//     int neg = solve(nums, target, sum - nums[idx], idx + 1);

//     return dp[idx][sum + OFFSET] = pos + neg;
// }

// int findTargetSumWays(vector<int>& nums, int target) {
//     n = nums.size();

//     int totalSum = 0;
//     for (int x : nums) totalSum += x;

//     OFFSET = totalSum;
//     dp.assign(n, vector<int>(2 * totalSum + 1, -1));

//     return solve(nums, target, 0, 0);
// }





// Approach : Tabulation
// Time:  O(n * sumRange)
// Space: O(n * sumRange)

// int findTargetSumWays(vector<int>& nums, int target) {
//     int sum = 0;
//     for (auto num : nums) {
//         sum += num;
//     }

//     if ((sum + target) % 2) return 0;

//     // pos + neg = sum
//     // pos - neg = target
//     // pos = (sum + target) / 2
//     int pos = (sum + target) / 2;
//     if (pos < 0) return 0;

//     vector<int> dp(pos+1, 0);
//     dp[0]=1;
    
//     for (auto num : nums) {
//         for (int i=pos; i >= num; i--) {
//             dp[i] += dp[i-num]; // no need for conditional because adding 0 
//         }
//     }

//     return dp[pos];
// }