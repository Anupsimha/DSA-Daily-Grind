// int countPartitions(vector<int>& nums) {
//     int n = nums.size();

//     int cnt = 0;
//     int leftSum = 0;
//     int rightSum = accumulate(begin(nums) , end(nums) , 0);
//     for(int i = 0 ; i < n - 1 ; i++){
//         leftSum += nums[i];
//         rightSum -= nums[i];

//         if((leftSum + rightSum) % 2 == 0) cnt++;
//     }

//     return cnt;
// }