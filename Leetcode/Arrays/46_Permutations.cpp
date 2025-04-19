//Appraoch 1: Iterative

// int factorial(int n){
//     if(n == 1 || n == 0)  return 1;

//     return n * factorial(n - 1);
// }

// void nextPerm(vector<int>& nums , int n){
//     int pointing_idx = -1;
//     for(int j = n - 1 ; j > 0 ; j--){
//         if(nums[j] > nums[j - 1]){
//             pointing_idx = j - 1;
//             break;
//         }
//     }

//     if(pointing_idx != -1){
//         int swapping_idx = pointing_idx;
//         for(int j = n - 1 ; j > pointing_idx ; j--){
//             if(nums[j] > nums[pointing_idx]){
//                 swapping_idx = j;
//                 break;
//             }
//         }
//         swap(nums[swapping_idx] , nums[pointing_idx]);
//     }

//     reverse(nums.begin() + pointing_idx + 1 , nums.end());
// }

// vector<vector<int>> permute(vector<int>& nums) {
//     int n = nums.size();
//     sort(nums.begin() , nums.end());
    
//     vector<vector<int>> ans;
//     int totalPermu = factorial(n);

//     for(int i = 0 ; i < totalPermu ; i++){
//         ans.push_back(nums);
//         nextPerm(nums , n);
//     }

//     return ans;
// }




// Approach 2: Backtracking

// void backtrack(vector<int>& nums, int idx, vector<vector<int>>& ans) {
//     if (idx == nums.size()) {
//         ans.push_back(nums);
//         return;
//     }

//     for (int i = idx; i < nums.size(); i++) {
//         swap(nums[i], nums[idx]);  // fix one element at idx
//         backtrack(nums, idx + 1, ans);  // recursively permute remaining elements
//         swap(nums[i], nums[idx]);  // backtrack to original state
//     }
// }

// vector<vector<int>> permute(vector<int>& nums) {
//     vector<vector<int>> ans;
//     backtrack(nums, 0, ans);
//     return ans;
// }
