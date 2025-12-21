// Approach : Using Recursion (Backtracking) 

// void solve(vector<int>& nums , int n , vector<int>& res , vector<int>& temp , int idx , int prev){
//     if(idx >= n){
//         if(temp.size() > res.size())
//             res = temp  ;
//
//         return ;
//     }
//
//     if(prev == -1 || nums[idx] % prev == 0){
//         temp.push_back(nums[idx]);
//         solve(nums , n , res , temp , idx + 1 , nums[idx]);
//         temp.pop_back();
//     }
//
//     solve(nums , n , res , temp , idx + 1 , prev);
// }
//
// vector<int> largestDivisibleSubset(vector<int>& nums) {
//     int n = nums.size();
//
//     sort(begin(nums) , end(nums));
//
//     vector<int> res;
//     vector<int> temp;
//     solve(nums , n , res , temp , 0 , -1);
//
//     return res;
// }




// Approach : Tabulation

// vector<int> largestDivisibleSubset(vector<int>& nums) {
//     int n = nums.size();
//
//     sort(begin(nums) , end(nums));
//
//     vector<int> dp(n , 1);
//     vector<int> prev(n , -1);
//
//     int last_chosen_idx = 0;
//     int maxL = 1;
//
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < i ; j++){
//             if(nums[i] % nums[j] == 0){
//                 if(dp[i] < dp[j] + 1){
//                     dp[i] = dp[j] + 1;
//                     prev[i] = j;
//                 }
//
//                 if(dp[i] > maxL){
//                     maxL = dp[i];
//                     last_chosen_idx = i;
//                 }
//             }
//         }
//     }
//
//     vector<int> res;
//     while(last_chosen_idx != -1){
//         res.push_back(nums[last_chosen_idx]);
//         last_chosen_idx = prev[last_chosen_idx];
//     }
//
//     return res;
// }

