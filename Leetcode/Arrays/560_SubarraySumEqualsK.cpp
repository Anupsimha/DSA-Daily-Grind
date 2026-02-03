// int subarraySum(vector<int>& nums, int k) {
//     unordered_map<int, int> prefixSumCount;
//     prefixSumCount[0] = 1; 
//
//     int count = 0;
//     int sum = 0;
//
//     for(int num : nums) {
//         sum += num;
//
//         if(prefixSumCount.find(sum - k) != prefixSumCount.end()) {
//             count += prefixSumCount[sum - k];
//         }
//
//         prefixSumCount[sum]++;
//     }
//
//     return count;
// }
//