// double findMaxAverage(vector<int>& nums, int k) {
//     int n = nums.size();
    
//     int sum = 0;

//     for(int i = 0; i < k; i++) {
//         sum += nums[i];
//     }

//     double maxAvg = (double)sum / k;

//     for(int i = k; i < n; i++) {
//         sum += nums[i] - nums[i - k]; 
//         maxAvg = max(maxAvg, (double)sum / k);
//     }

//     return maxAvg;
// }