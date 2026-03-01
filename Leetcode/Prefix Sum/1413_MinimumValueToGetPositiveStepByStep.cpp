// int minStartValue(vector<int>& nums) {
//     int n = nums.size();

//     int minVal = INT_MAX;
//     int prefixSum = 0;

//     for(int i = 0 ; i < n ; i++){
//         prefixSum += nums[i];

//         minVal = min(minVal , prefixSum);
//     }

//     return minVal < 0 ? abs(minVal) + 1 : 1;
// }