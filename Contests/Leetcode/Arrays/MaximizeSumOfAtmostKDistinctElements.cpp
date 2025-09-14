// vector<int> maxKDistinct(vector<int>& nums, int k) {
//     int n = nums.size();

//     sort(nums.begin() , nums.end());

//     vector<int> ans;

//     int j = n - 1;
//     while(j >= 0 && k > 0){
//         if (j < n - 1 && nums[j] == nums[j + 1]) {
//             j--;
//             continue;
//         }
//         ans.push_back(nums[j]);
//         j--;
//         k--;
//     }

//     return ans;
// }