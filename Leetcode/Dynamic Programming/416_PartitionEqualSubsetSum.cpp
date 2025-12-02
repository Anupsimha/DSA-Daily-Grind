// Approach : Recursion

//(My Approach)
// Time Complexity : O(2^n)
// int n;

// bool solve(vector<int>& nums , int sum1 , int sum2 , int idx){
//     if(idx == n && (sum1 == 0 || sum2 == 0))
//         return false;
    
//     if(idx == n)
//         return sum1 == sum2;

//     bool add_in_first = solve(nums , sum1 + nums[idx] , sum2 , idx + 1);

//     bool add_in_second = solve(nums , sum1 , sum2 + nums[idx] , idx + 1);

//     if(add_in_first || add_in_second)
//         return true;

//     return false;
// }

// bool canPartition(vector<int>& nums) {
//     n = nums.size();

//     return solve(nums , 0 , 0 , 0);
// }

                  // or //

// int n;

// bool solve(vector<int>& nums , int i , int x){
//     if(x == 0)
//         return true;

//     if(i >= n)
//         return false;

//     bool take = false;
//     if(nums[i] <= x)
//         take = solve(nums , i + 1 , x - nums[i]);

//     bool not_take = solve(nums , i + 1 , x);

//     return take || not_take;
// }

// bool canPartition(vector<int>& nums) {
//     n = nums.size();

//     int s = accumulate(begin(nums) , end(nums) , 0);

//     if(s % 2 != 0)
//         return false;

//     int x = s/2;

//     return solve(nums , 0 , x);
// }






// Approach : Recursion + Memoization
// Time Complexity : O(n * x)
// Space Complexity : O(n * x) + O(n)

// int n;

// bool solve(vector<int>& nums , int i , int x , vector<vector<int>>& dp){
//     if(x == 0)
//         return true;

//     if(i >= n)
//         return false;

//     if(dp[i][x] != -1)
//         return dp[i][x];

//     bool take = false;
//     if(nums[i] <= x)
//         take = solve(nums , i + 1 , x - nums[i] , dp);

//     bool not_take = solve(nums , i + 1 , x , dp);

//     return dp[i][x] = take || not_take;
// }

// bool canPartition(vector<int>& nums) {
//     n = nums.size();

//     int s = accumulate(begin(nums) , end(nums) , 0);

//     if(s % 2 != 0)
//         return false;

//     int x = s/2;

//     vector<vector<int>> dp(n + 1 , vector<int>(x + 1 , -1));

//     return solve(nums , 0 , x , dp);
// }






// Approach : Tabulation
// Time Complexity : O(n * x)
// Space Complexity : O(n * x)

// bool canPartition(vector<int>& nums) {
//     int n = nums.size();

//     int s = accumulate(begin(nums) , end(nums) , 0);

//     if(s % 2 != 0)
//         return false;

//     int x = s/2;

//     // dp[i][j] = whether we can make sum j using first i elements
//     vector<vector<bool>> dp(n + 1, vector<bool>(x + 1, false));

//     // Base case: sum 0 is always possible (by taking no elements)
//     for (int i = 0; i <= n; i++)
//         dp[i][0] = true;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= x; j++) {

//             bool not_take = dp[i - 1][j];
//             bool take = false;

//             if (nums[i - 1] <= j)
//                 take = dp[i - 1][j - nums[i - 1]];

//             dp[i][j] = take || not_take;
//         }
//     }

//     return dp[n][x];
// }




// Approach : Space Optimized Tabulation
// Time Complexity : O(n * x)
// Space Complexity : O(x)

// bool canPartition(vector<int>& nums) {
//     int sum = accumulate(nums.begin(), nums.end(), 0);

//     if (sum % 2 != 0) return false;

//     int target = sum / 2;
//     vector<bool> dp(target + 1, false);
//     dp[0] = true;

//     for (int num : nums) {
//         for (int s = target; s >= num; s--) {
//             dp[s] = dp[s] || dp[s - num];
//         }
//     }

//     return dp[target];
// }