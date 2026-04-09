// int firstOcc(vector<int>& nums , int n , int target){
//     int ans = -1;

//     int s = 0 , e = n - 1;
//     while(s <= e){
//         int mid = s + (e - s)/2;

//         if(nums[mid] == target){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(nums[mid] < target)
//             s = mid + 1;
//         else
//             e = mid - 1;
//     }

//     return ans;
// }

// int lastOcc(vector<int>& nums , int n , int target){
//     int ans = -1;

//     int s = 0 , e = n - 1;
//     while(s <= e){
//         int mid = s + (e - s)/2;

//         if(nums[mid] == target){
//             ans = mid;
//             s = mid + 1; 
//         }
//         else if(nums[mid] < target)
//             s = mid + 1;
//         else
//             e = mid - 1;
//     }

//     return ans;
// }

// vector<int> targetIndices(vector<int>& nums, int target) {
//     int n = nums.size();

//     sort(begin(nums) , end(nums));

//     vector<int> res;
//     int st = firstOcc(nums , n , target);
//     int end = lastOcc(nums , n , target);

//     if(st == -1)    return {};

//     for(int i = st ; i <= end ; i++){
//         res.push_back(i);
//     }

//     return res;
// }