// int countPairs(vector<int>& nums, int target) {
//     int n = nums.size();

//     sort(begin(nums) , end(nums));

//     int pairs = 0;
//     int s = 0 , e = n - 1;
//     while(s < e){
//         if(nums[s] + nums[e] < target){
//             pairs += e - s;
//             s++;
//         }
//         else    e--;
//     }

//     return pairs;
// }