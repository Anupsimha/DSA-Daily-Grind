// int findUpper(vector<int>& nums , int n , int target){
//     int ans = n;
//     int s = 0 , e = n - 1;

//     while(s <= e){
//         int mid = s + (e - s)/2;

//         if(nums[mid] >= target){
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//             s = mid + 1;
//     }

//     return ans;
// }

// int specialArray(vector<int>& nums) {
//     int n = nums.size();

//     sort(begin(nums) , end(nums));

//     int s = 0 , e = n;
//     while(s <= e){
//         int mid = s + (e - s)/2;

//         int idx = findUpper(nums , n , mid);
//         int noOfEle = n - idx;

//         if(noOfEle == mid)  return mid;
//         else if(noOfEle > mid)  s = mid + 1;
//         else    e = mid - 1;
//     }

//     return -1;
// }