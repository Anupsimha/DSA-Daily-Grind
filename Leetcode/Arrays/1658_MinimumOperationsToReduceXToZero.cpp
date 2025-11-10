// Approach : Memoization +Recursion

// int n;
// unordered_map<string, int> memo;

// int solve(vector<int>& nums, int x , int stIdx , int enIdx){
//     if(x == 0){
//         return 0;
//     }

//     if(x < 0 || stIdx > enIdx)
//         return INT_MAX;

//     string key = to_string(stIdx) + "|" + to_string(enIdx) + "|" + to_string(x);
//     if (memo.count(key))
//         return memo[key]; 

//     int takeStart = solve(nums , x - nums[stIdx] , stIdx + 1 , enIdx);
//     if (takeStart != INT_MAX)
//         takeStart += 1;

//     int takeEnd = solve(nums , x - nums[enIdx] , stIdx , enIdx - 1);
//     if (takeEnd != INT_MAX)
//         takeEnd += 1;

//     return memo[key] = min(takeStart, takeEnd);
// }

// int minOperations(vector<int>& nums, int x) {
//     n = nums.size();

//     int ans = solve(nums , x , 0 , n - 1);

//     return ans == INT_MAX ? -1 : ans;
// }





// Approach : Sliding Window (More Optimal Approach)

// int minOperations(vector<int>& nums, int x) {
//     int n = nums.size();

//     unordered_map<int , int> mp;
//     mp[0] = -1;

//     int sum = 0;
//     for(int i = 0 ; i < n ; i++){
//         sum += nums[i];
//         mp[sum] = i;
//     }

//     if(sum < x)
//         return -1;

//     int remainingSum = sum - x;
//     int longestSubArray = INT_MIN;

//     sum = 0;
//     for(int i = 0 ; i < n ; i++){
//         sum += nums[i];

//         int findSum = sum - remainingSum;

//         if(mp.find(findSum) != mp.end()){
//             int idx = mp[findSum];

//             longestSubArray = max(longestSubArray , i - idx);
//         }
//     }

//     return longestSubArray == INT_MIN ? -1 : (n - longestSubArray);
// }