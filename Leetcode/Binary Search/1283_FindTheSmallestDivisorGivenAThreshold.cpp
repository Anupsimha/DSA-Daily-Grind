// int checkThreshold(vector<int> nums, int mid){
//     int sum = 0;

//     for(int num : nums){
//         sum += (int)ceil((double)num/mid);
//     }

//     return sum;
// }

// int smallestDivisor(vector<int>& nums, int threshold) {
//     int n = nums.size();

//     int s = 1 , e = *max_element(begin(nums) , end(nums));
//     int ans = INT_MAX;
//     while(s <= e){
//         int mid = (s + e)/2;

//         if(checkThreshold(nums , mid) <= threshold){
//             ans = min(mid , ans);
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//     }

//     return ans;
// }