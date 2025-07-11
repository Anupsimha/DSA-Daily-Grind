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





// Java Implementation

// public void nextPermutation(int[] nums) {
//     int n = nums.length;

//     int pointingIndex = -1;
//     for(int i = n - 1 ; i > 0 ; i--){
//         if(nums[i] > nums[i - 1]){
//             pointingIndex = i - 1;
//             break;
//         }
//     }   

//     if(pointingIndex != -1){
//         int swapIndex = pointingIndex;
//         for(int j = n - 1; j >= pointingIndex ; j--){
//             if(nums[j] > nums[pointingIndex]){
//                 swapIndex = j;
//                 break;
//             }
//         }
//         swap(nums , swapIndex , pointingIndex);
//     }

//     reverse(nums , pointingIndex + 1 , n - 1);
// }

// private void swap(int[] nums, int i, int j) {
//     int temp = nums[i];
//     nums[i] = nums[j];
//     nums[j] = temp;
// }

// private void reverse(int[] nums, int start, int end) {
//     while (start < end) {
//         swap(nums, start, end);
//         start++;
//         end--;
//     }
// }