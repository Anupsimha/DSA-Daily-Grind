// Approach : Using Unordered Set

// vector<int> findDisappearedNumbers(vector<int>& nums) {
//     int n = nums.size();

//     vector<int> res;
//     unordered_set<int> st(begin(nums) , end(nums));

//     for(int i = 1 ; i <= n ; i++){
//         if(st.find(i) == st.end())  res.push_back(i);
//     }

//     return res;
// }





// Approach : Using In-place

// vector<int> findDisappearedNumbers(vector<int>& nums) {
//     for (int i = 0; i < nums.size(); i++) {
//         int idx = abs(nums[i]) - 1;
//         if (nums[idx] > 0) {
//             nums[idx] = -nums[idx];
//         }
//     }
    
//     vector<int> result;
//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] > 0) {
//             result.push_back(i + 1);
//         }
//     }
    
//     return result;        
// }