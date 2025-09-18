// bool isPossible(vector<int>& arr, int n, int mid){
//     int studCount = 1;
//     int pageSum = 0;
//
//     for(int i = 0 ; i < n ; i++){
//         if(pageSum + arr[i] <= mid){
//             pageSum += arr[i];
//         }
//         else{
//             studCount++;
//             if(studCount > m || arr[i] > mid)
//                 return false;
//             pageSum = arr[i];
//         }
//     }
//
//     return true;
// }
//
// int findPages(vector<int>& arr, int n, int m) {
//     if(m > n)
//         return -1;
//
//     int s = *max_element(begin(arr) , end(arr));
//     int e = accumulate(begin(arr) , end(arr) , 0);
//     int ans = -1;
//
//     while(s <= e){
//         int mid = (s + e)/2;
//
//         if(isPossible(arr , n , mid)){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//     }
//
//     return ans;
// }