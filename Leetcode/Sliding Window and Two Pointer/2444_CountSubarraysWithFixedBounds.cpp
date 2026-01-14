// long long countSubarrays(vector<int>& nums, int minK, int maxK) {
//     int n = nums.size();

//     int minIndex = -1;
//     int maxIndex = -1;
//     int culpritIndex = -1;
//     long long ans = 0;

//     for(int i = 0 ; i < n ; i++){
//         if(nums[i] == minK)
//             minIndex = i;
//         if(nums[i] == maxK)
//             maxIndex = i;
//         if(nums[i] > maxK || nums[i] < minK)
//             culpritIndex = i;

//         int temp = min(minIndex , maxIndex) - culpritIndex;
//         ans += (temp <= 0) ? 0 : temp;
//     }

//     return ans;
// }