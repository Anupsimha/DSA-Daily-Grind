// void nextPermutation(vector<int>& nums) {
//     int n = nums.size();

//     int pointingIndex = -1;
//     for(int i = n - 1 ; i > 0 ; i--){
//         if(nums[i] > nums[i - 1]){
//             pointingIndex = i - 1;
//             break;
//         }
//     }

//     if(pointingIndex != -1){
//         int swapIndex = pointingIndex;
//         for(int j = n - 1 ; j >= pointingIndex ; j--){
//             if(nums[j] > nums[pointingIndex]){
//                 swapIndex = j;
//                 break;
//             }
//         }

//         swap(nums[pointingIndex] , nums[swapIndex]);
//     }

//     reverse(nums.begin() + pointingIndex + 1 , nums.end());
// }