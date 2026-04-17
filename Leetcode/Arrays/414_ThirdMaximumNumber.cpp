// int thirdMax(vector<int>& nums) {
//     int n = nums.size();
//
//     sort(begin(nums) , end(nums));
//
//     int cnt = 1;
//     for(int i = n - 2 ; i >= 0 ; i--){
//         if(nums[i] != nums[i + 1])  cnt++;
//
//         if(cnt == 3)    return nums[i];
//     }
//
//     return nums[n - 1];
// }