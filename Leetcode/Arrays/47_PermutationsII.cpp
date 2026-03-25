// Approach 2 : Using Recursion 

// int n;
// vector<vector<int>> result;

// void solve(unordered_map<int , int>& mp , vector<int>& temp){
//     if(temp.size() == n){
//         result.push_back(temp);
//         return ;
//     }

//     for(auto& [num , count] : mp){
//         if(count == 0)
//             continue;

//         temp.push_back(num);
//         mp[num]--;

//         solve(mp , temp);

//         temp.pop_back();
//         mp[num]++;
//     }
// }

// vector<vector<int>> permuteUnique(vector<int>& nums) {
//     n = nums.size();

//     unordered_map<int , int> mp;
//     for(int &num : nums){
//         mp[num]++;
//     }

//     vector<int> temp;
//     solve(mp , temp);
    
//     return result;
// }




// Approach 2 : Using Recursion In different way

// int n;
// vector<vector<int>> result;

// void solve(vector<int>& nums , int idx){
//     if(idx == n){
//         result.push_back(nums);
//         return ;
//     }

//     unordered_set<int> st;
//     for(int i = idx ; i < n ; i++){
//         if(st.find(nums[i]) != st.end())    continue;

//         st.insert(nums[i]);
//         swap(nums[i] , nums[idx]);

//         solve(nums , idx + 1);

//         swap(nums[i] , nums[idx]);
//     }
// }

// vector<vector<int>> permuteUnique(vector<int>& nums) {
//     n = nums.size();

//     solve(nums , 0);
    
//     return result;
// }




// Approach 2 : Using STL

// vector<vector<int>> permuteUnique(vector<int>& nums) {
//     vector<vector<int>> res;

//     sort(nums.begin(), nums.end());

//     do {
//         res.push_back(nums);
//     } while(next_permutation(nums.begin(), nums.end()));

//     return res;
// }