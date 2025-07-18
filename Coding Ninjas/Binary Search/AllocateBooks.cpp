// int isPossible(vector<int>& arr, int n, int mid){
//     int studCount = 1;
//     int booksCount = 0;

//     for(int i = 0 ; i < n ; i++){
//         if(booksCount + arr[i] <= mid){
//             booksCount += arr[i];
//         }
//         else{
//             studCount++;
//             booksCount = arr[i];
//         }
//     }

//     return studCount;
// }

// int findPages(vector<int>& arr, int n, int m) {
//     if(m > n)
//         return -1;

//     int s = *max_element(begin(arr) , end(arr));
//     int e = accumulate(begin(arr) , end(arr) , 0);
//     int ans = -1;

//     while(s <= e){
//         int mid = (s + e)/2;

//         if(isPossible(arr , n , mid) <= m){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//     }

//     return ans;
// }