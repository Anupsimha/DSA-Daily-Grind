// int removeDuplicates(vector<int>& nums) {
//     int n = nums.size();
//
//     int unique = 0;
//     for(int i = 1 ; i < n ; i++){
//         if(nums[i] != nums[i - 1]){
//             unique++;
//             nums[unique] = nums[i];
//         }
//     }
//
//     return unique + 1;
// }
//



// Java Implementation

// public int removeDuplicates(int[] nums) {
//     int n = nums.length;

//     int unique = 0;
//     for(int i = 1 ; i < n ; i++){
//         if(nums[i] != nums[i - 1]){
//             unique++;
//             nums[unique] = nums[i];
//         }
//     }

//     return unique + 1;
// }