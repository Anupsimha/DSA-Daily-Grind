// My Approach - Approach I using Hashing

// int singleNumber(vector<int>& nums) {
//     int n = nums.size();

//     unordered_map<int , int> mp;
//     for(int i = 0 ; i < n ; i++){
//         mp[nums[i]]++;
//     }

//     int ans = 0;
//     for(auto it : mp){
//         if(it.second == 1)
//             ans = it.first;
//     }

//     return ans;
// }

// Approach II - Appraoch using Sorting

// int singleNumber(vector<int>& nums) {
//     int n = nums.size();

//     sort(nums.begin() , nums.end());

//     if (n == 1 || nums[0] != nums[1]) return nums[0];
//     if (nums[n - 1] != nums[n - 2]) return nums[n - 1];

//     for (int i = 1; i < n - 1; i++) {
//         if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
//             return nums[i];
//         }
//     }

//     return -1;
// }