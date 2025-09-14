// vector<vector<int>> res;

// void solve(vector<int>& candidates, int target , vector<int> &nums , int sum , int i){
//     if(sum == target){
//         res.push_back(nums);
//         return ;
//     }

//     if(sum > target || i >= candidates.size())   return ;

//     nums.push_back(candidates[i]);
//     solve(candidates , target , nums , sum + candidates[i] , i);
//     nums.pop_back();
    
//     solve(candidates , target , nums , sum , i + 1);
// }

// vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//     vector<int> nums;

//     solve(candidates , target , nums , 0 , 0);

//     return res;
// }