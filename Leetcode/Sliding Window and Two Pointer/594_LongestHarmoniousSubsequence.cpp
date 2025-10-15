// Appraoch : Using Sorting and Two Pointers(Sliding window)
// Time Complexity : O(NlogN)
// Space Complexity : O(1)

// int findLHS(vector<int>& nums) {
//     int n = nums.size();
//     int maxLen = 0;
    
//     sort(begin(nums) , end(nums));

//     int i = 0 , j = 0;
//     while(j < n){
//         while(nums[j] - nums[i] > 1)
//             i++;

//         if(nums[j] - nums[i] == 1)
//             maxLen = max(maxLen , j - i + 1);

//         j++;
//     }

//     return maxLen;
// }




// Approach : Using HashMap
// Time Complexity : O(N)
// Space Complexity : O(N)

// int findLHS(vector<int>& nums) {
//     unordered_map<int , int> mp;
//     for(int &num : nums){
//         mp[num]++;
//     }

//     int maxLen = 0;
//     for(auto &it : mp){
//         if(mp.find(it.first + 1) != mp.end()){
//             maxLen = max(maxLen , it.second + mp[it.first + 1]);
//         }
//     }

//     return maxLen;
// }