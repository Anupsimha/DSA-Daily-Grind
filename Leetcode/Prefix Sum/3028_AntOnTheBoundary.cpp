// int returnToBoundaryCount(vector<int>& nums) {
//     int n = nums.size();

//     int cnt = 0;
//     for(int i = 1 ; i < n ; i++){
//         nums[i] += nums[i - 1];

//         if(nums[i] == 0)    cnt++;
//     }

//     return cnt;
// }