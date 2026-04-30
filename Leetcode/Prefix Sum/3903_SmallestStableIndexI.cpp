// int firstStableIndex(vector<int>& nums, int k) {
//     int n = nums.size();

//     vector<int> mini(n);

//     int minVal = INT_MAX;
//     for(int i = n - 1 ; i >= 0 ; i--){
//         minVal = min(minVal , nums[i]);
//         mini[i] = minVal;
//     }

//     int maxVal = 0;
//     for(int i = 0 ; i < n ; i++){
//         maxVal = max(maxVal , nums[i]);
//         if(maxVal - mini[i] <= k)   return i;
//     }

//     return -1;
// }