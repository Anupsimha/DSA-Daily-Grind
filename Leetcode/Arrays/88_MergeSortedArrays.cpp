// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     int mid1 = m - 1;
//     int mid2 = n - 1;
//     int r = m + n - 1;

//     while(mid2 >= 0){
//         if(mid1 >= 0 && nums1[mid1] > nums2[mid2]){
//             nums1[r] = nums1[mid1];
//             mid1--;
//         }
//         else{
//             nums1[r] = nums2[mid2];
//             mid2--;
//         }
//         r--;
//     }
// }