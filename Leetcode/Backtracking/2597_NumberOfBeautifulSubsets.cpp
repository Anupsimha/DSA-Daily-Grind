// Approach : Recursion + Backtracking
// T.C = O(2^n) , S.C = O(n)

// int n;

// int solve(vector<int>& nums, int k , unordered_map<int , int>& freq , int idx){
//     if(idx == n)
//         return 1;

//     int res = solve(nums , k , freq , idx + 1);

//     if(!freq[nums[idx] - k] && !freq[nums[idx] + k]){
//         freq[nums[idx]]++;
//         res += solve(nums , k , freq , idx + 1);
//         freq[nums[idx]]--;
//     }

//     return res;
// }

// int beautifulSubsets(vector<int>& nums, int k) {
//     unordered_map<int , int> freq;

//     return solve(nums , k , freq , 0) - 1;  // -1 for empty subset
// }





// Approach : Recursion + Backtracking + Sorting
// T.C = O(2^n) , S.C = O(n)

// int n;

// int solve(vector<int>& nums, int k , unordered_map<int , int>& freq , int idx){
//     if(idx == n)
//         return 1;

//     int res = solve(nums , k , freq , idx + 1);

//     if(!freq[nums[idx] - k]){
//         freq[nums[idx]]++;
//         res += solve(nums , k , freq , idx + 1);
//         freq[nums[idx]]--;
//     }

//     return res;
// }

// int beautifulSubsets(vector<int>& nums, int k) {
//     n = nums.size();

//     unordered_map<int , int> freq;
//     sort(begin(nums) , end(nums));

//     return solve(nums , k , freq , 0) - 1;  // -1 for empty subset
// }




