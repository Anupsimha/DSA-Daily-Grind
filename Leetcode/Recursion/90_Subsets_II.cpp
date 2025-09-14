// vector<vector<int>> res;

// void solve(vector<int>& nums , vector<int>& sub , int i){
//     res.push_back(sub); 

//     for(int j = i ; j < nums.size() ; j++){
//         if(j > i && nums[j] == nums[j - 1]) continue;

//         sub.push_back(nums[j]);
//         solve(nums , sub , j + 1);
//         sub.pop_back();
//     }
// }

// vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//     sort(nums.begin() , nums.end());

//     vector<int> sub;

//     solve(nums , sub , 0);

//     return res;
// }