//Approach I

// int missingNumber(vector<int>& nums) {
//     int n = nums.size();
//     for(int i = 0; i < nums.size(); i++){
//         n += i - nums[i];
//     }
//     return n;
// }


//Approach II

// int missingNumber(vector<int>& nums) {
//     int n = nums.size();
//     int sum = (n * (n + 1)) / 2;  // Expected sum
//     int actualSum = accumulate(nums.begin(), nums.end(), 0);
//     return sum - actualSum;
// }


//Approach III

// int missingNumber(vector<int>& nums) {
//     int n = nums.size(), xorAll = 0;
//     for (int i = 0; i <= n; i++) xorAll ^= i;
//     for (int num : nums) xorAll ^= num;
//     return xorAll;
// }


