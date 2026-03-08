// int jump(vector<int>& nums) {
//     int n = nums.size();

//     int no_of_jumps = 0;
//     int i = 0 , j = 0;
//     while(j < n - 1){
//         int farthest = 0;

//         for(int idx = i ; idx <= j ; idx++){
//             farthest = max(idx + nums[idx] , farthest);
//         }

//         i = j + 1;
//         j = farthest;
//         no_of_jumps++;
//     }

//     return no_of_jumps;
// }