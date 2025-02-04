/* My Approach and Optimal Approach */

// int minimumAverageDifference(vector<int>& nums) {
//         int n = nums.size();

//         // if(n == 1)  return nums[0];

//         long long arr_sum = 0;      
//         for(long long i = 0 ; i < n ; i++){
//             arr_sum += nums[i];
//         }

//         int min_avg_diff = INT_MAX;
//         int min_avg_diff_index = 0;
//         long long left_num = 0;

//         for(long long i = 0 ; i < n ; i++){
//             left_num += nums[i];
//             arr_sum -= nums[i];
//             int left_denom = i + 1;
//             int right_denom = n - left_denom;
//             long long left_avg = left_num / left_denom;
//             long long right_avg = (right_denom == 0) ? 0 : (arr_sum / right_denom); // Handle last element case
//             int avg_diff = abs(left_avg - right_avg);

//             if(avg_diff < min_avg_diff){
//                 min_avg_diff = avg_diff;
//                 min_avg_diff_index = i;
//             }
//         }

//         return min_avg_diff_index;
// }


