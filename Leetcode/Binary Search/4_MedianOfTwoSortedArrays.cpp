// Approach : Binary Search

// double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//     if(nums2.size() < nums1.size())
//         return findMedianSortedArrays(nums2 , nums1);
    
//     int m = nums1.size();
//     int n = nums2.size();

//     int s = 0 , e = m;
//     while(s <= e){
//         int Px = s + (e - s)/2;
//         int Py = (m + n + 1)/2 - Px;

//         int x1 = (Px == 0) ? INT_MIN : nums1[Px - 1];
//         int x2 = (Py == 0) ? INT_MIN : nums2[Py - 1];

//         int x3 = (Px == m) ? INT_MAX : nums1[Px];
//         int x4 = (Py == n) ? INT_MAX : nums2[Py];

//         if(x1 <= x4 && x2 <= x3){
//             if((m + n) % 2 == 1)
//                 return max(x1 , x2);

//             return (max(x1 , x2) + min(x3 , x4))/2.0;
//         }

//         if(x1 > x4)
//             e = Px - 1;
//         else
//             s = Px + 1;
//     }

//     return -1;
// }




// Appraoch : Brute Force

// double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//     int m = nums1.size();
//     int n = nums2.size();

//     vector<int> num;

//     int p = 0 , q = 0;
//     while(p < m && q < n){
//         if(nums1[p] < nums2[q]){
//             num.push_back(nums1[p++]);
//         }
//         else{
//             num.push_back(nums2[q++]);
//         }
//     }

//     while(p < m){
//         num.push_back(nums1[p++]);
//     }

//     while(q < n){
//         num.push_back(nums2[q++]);
//     }

//     if((m + n) % 2 == 0){
//         int x = (m + n)/2;
//         int y = (m + n)/2 - 1;

//         return (double)(num[x] + num[y])/2;
//     }

//     return (double)num[(m + n)/2];
// }