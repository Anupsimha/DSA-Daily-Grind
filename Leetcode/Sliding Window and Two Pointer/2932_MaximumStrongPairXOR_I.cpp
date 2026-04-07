// int maximumStrongPairXor(vector<int>& nums) {
//     int n = nums.size();

//     sort(begin(nums) , end(nums));

//     int res = 0;
//     int i = 0 , j = 0;
//     while(j < n){
//         while(nums[j] > 2 * nums[i])
//             i++;

//         for(int k = i ; k < j ; k++){
//             res = max(res , nums[j] ^ nums[k]);
//         }

//         j++;
//     }

//     return res;
// }