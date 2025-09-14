// void solve(vector<int>& nums , int k , int n , int sum , int i , vector<vector<int>>& res){
//     if(nums.size() == k){
//         if(sum == n)    res.push_back(nums);
//         return ;
//     }

//     if(sum > n || i > 9) return ;

//     nums.push_back(i);
//     solve(nums , k , n , sum + i , i + 1 , res);
//     nums.pop_back();

//     solve(nums , k , n , sum , i + 1 , res);
// }

// vector<vector<int>> combinationSum3(int k, int n) {
//     vector<vector<int>> res;
//     vector<int> nums;

//     solve(nums , k , n , 0 , 1 , res);

//     return res;
// }