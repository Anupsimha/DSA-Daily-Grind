// int getPivot(vector<int>& nums , int n){
//     int low = 0, high = n - 1;
//     while (low < high) {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] > nums[high]) {
//             low = mid + 1;
//         } else {
//             high = mid;
//         }
//     }
//     return low;
// }
//
// int binarySearch(vector<int>& nums , int st , int e , int target){
//     while(st <= e){
//         int mid = st + (e - st)/2;
//
//         if(nums[mid] == target)  return mid;
//         else if(nums[mid] > target)  e = mid - 1;
//         else    st = mid + 1;
//     }
//     return -1;
// }
//
// int search(vector<int>& nums, int target) {
//     int n = nums.size();
//
//     int pivot = getPivot(nums , n);
//     int ans = -1;
//     if(target >= nums[pivot] && target <= nums[n - 1]){
//         ans = binarySearch(nums , pivot , n - 1 ,target);
//     }
//     else{
//         ans = binarySearch(nums , 0 , pivot - 1 ,target);
//     }
//
//     return ans;
// }