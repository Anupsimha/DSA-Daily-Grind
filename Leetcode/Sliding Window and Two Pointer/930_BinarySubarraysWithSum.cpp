// int numSubarraysWithSum(vector<int>& nums, int goal) {
//     int n = nums.size();

//     int i = 0 , j = 0;
//     int sub_array = 0;
//     int count_zero = 0;
//     int window_sum = 0;
//     while(j < n){
//         window_sum += nums[j];

//         while(i < j && (nums[i] == 0 || window_sum > goal)){
//             if(nums[i] == 0)
//                 count_zero++;
//             else
//                 count_zero = 0;

//             window_sum -= nums[i];
//             i++;
//         }

//         if(window_sum == goal)
//             sub_array += 1 + count_zero;

//         j++;
//     }

//     return sub_array;
// }