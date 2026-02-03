// int getPivot(vector<int> &nums , int n){
//     int s = 0 , e = nums.size() - 1;
//     while(s < e && nums[s] == nums[s + 1])
//         s++;
//
//     int mid = s + (e-s)/2;
//     while(s < e){
//         if(nums[mid] > nums[e])
//             s = mid + 1;
//         else
//             e = mid;
//        
//         mid = s + (e-s)/2;
//     }
//
//     return s;
// }
//
// bool binarySearch(vector<int>& nums , int st , int e , int target){
//     while(st <= e){
//         int mid = st + (e - st)/2;
//
//         if(nums[mid] == target)
//             return true;
//         else if(nums[mid] < target)
//             st = mid + 1;
//         else
//             e = mid - 1;
//     }
//     return false;
// }
//
// bool search(vector<int>& nums, int target) {
//     int n = nums.size();
//
//     int pivot = getPivot(nums , n);
//
//     if(target >= nums[pivot] && target <= nums[nums.size() - 1])
//         return binarySearch(nums , pivot , nums.size() - 1 , target);
//     else
//         return binarySearch(nums , 0 , pivot - 1 , target);
// }