// bool isCovered(vector<vector<int>>& ranges, int left, int right) {
//     int n = ranges.size();

//     vector<int> nums(52 , 0);
//     for(auto range : ranges){
//         nums[range[0]]++;
//         nums[range[1] + 1]--;
//     }

//     for(int i = 1 , overlaps = 0 ; i <= right ; i++){
//         overlaps += nums[i];
//         if(i >= left && overlaps == 0)
//             return false;
//     }

//     return true;
// }