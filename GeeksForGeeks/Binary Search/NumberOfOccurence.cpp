// int firstOcc(vector<int>& arr, int n , int target){
//     int st = 0 , e = n - 1;
//     int ans = -1;
//     while(st <= e){
//         int mid = st + (e - st)/2;
//        
//         if(arr[mid] == target){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(arr[mid] > target){
//             e = mid - 1;
//         }
//         else{
//             st = mid + 1;
//         }
//     }
//     return ans;
// }
//
// int lastOcc(vector<int>& arr, int n , int target){
//     int st = 0 , e = n - 1;
//     int ans = -1;
//     while(st <= e){
//         int mid = st + (e - st)/2;
//        
//         if(arr[mid] == target){
//             ans = mid;
//             st = mid + 1;
//         }
//         else if(arr[mid] > target){
//             e = mid - 1;
//         }
//         else{
//             st = mid + 1;
//         }
//     }
//     return ans;
// }
//
// int countFreq(vector<int>& arr, int target) {
//     int n = arr.size();
//    
//     int first = firstOcc(arr , n , target);
//     int last = lastOcc(arr , n , target);
//    
//     if(first == -1 && last == -1) return 0;
//    
//     return last - first + 1;
// }
//