// vector<vector<int>> res;

// void solve(vector<int>& candidates, int target , vector<int>& nums , int sum , int i){
//     if(sum == target){
//         res.push_back(nums);
//         return ;
//     }

//     if(sum > target)   return ;

//     for(int j = i ; j < candidates.size() ; j++){
//         if(j > i && candidates[j] == candidates[j - 1]) continue;

//         if(sum + candidates[j] > target)    break;

//         nums.push_back(candidates[j]);
//         solve(candidates , target , nums , sum + candidates[j] , j + 1);
//         nums.pop_back();
//     }
// }

// vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//     vector<int> nums;

//     sort(candidates.begin() , candidates.end());

//     solve(candidates , target , nums , 0 , 0);

//     return res;
// }