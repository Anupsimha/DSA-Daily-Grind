// vector<vector<int>> res;
// int n;

// void solve(vector<int>& nums , vector<int> output , int idx){
//     if (output.size() >= 2)
//         res.push_back(output);

//     unordered_set<int> used; 

//     for (int i = idx; i < n; i++) {
//         if ((output.empty() || nums[i] >= output.back()) && !used.count(nums[i])) {
//             used.insert(nums[i]);
//             output.push_back(nums[i]);
//             solve(nums, output, i + 1);
//             output.pop_back();
//         }
//     }
// }

// vector<vector<int>> findSubsequences(vector<int>& nums) {
//     n = nums.size();
//     vector<int> output;

//     solve(nums , output , 0);

//     return res;
// }