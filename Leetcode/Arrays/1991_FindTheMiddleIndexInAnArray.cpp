// int findMiddleIndex(vector<int>& nums) {
//     int n = nums.size();

//     int leftPart = 0;
//     int rightPart = accumulate(begin(nums) , end(nums) , 0);

//     for(int i = 0 ; i < n ; i++){
//         if(leftPart == (rightPart - nums[i])) return i;

//         leftPart += nums[i];
//         rightPart -= nums[i];
//     }

//     return -1;
// }