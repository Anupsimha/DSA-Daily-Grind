// int singleNonDuplicate(vector<int>& nums) {
//     int n = nums.size();

//     while(s < e){
//         int mid = s + (e-s)/2;

//         bool isEven;
//         if((e - mid)%2 == 0)
//             isEven = true;
//         else
//             isEven = false;

//         if(nums[mid] == nums[mid+1]){
//             if(isEven)
//                 s = mid + 2;
//             else
//                 e = mid - 1;
//         }
//         else{
//             if(isEven){
//                 e = mid;
//             }
//             else{
//                 s = mid + 1;
//             }
//         }
//     }

//     return nums[e];
// }