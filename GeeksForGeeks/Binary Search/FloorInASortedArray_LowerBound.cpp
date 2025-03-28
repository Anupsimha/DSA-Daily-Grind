// int findFloor(vector<int>& arr, int x) {
//        
//     int n = arr.size();
//    
//     int s = 0 , e = n - 1;
//     int ans = -1;
//    
//     while(s <= e){
//         int mid = s + (e - s) / 2;
//
//         if (arr[mid] == x) {
//             s = mid + 1;
//             ans = mid;
//         }
//         else if (arr[mid] > x) { 
//             e = mid - 1;
//         } 
//         else {  
//             ans = mid;
//             s = mid + 1;
//         }
//     }
//    
//     return ans;
//    
// }



//Approach II

// vector<int> getFloorAndCeil(int x, vector<int> &arr) {
//     int n = arr.size();
//    
//     int lower = -1 , upper = INT_MAX;
//    
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == x)
//             return {x , x};
//         else{
//             if(arr[i] < x && lower < arr[i]){
//                 lower = arr[i];
//             }
//             if(arr[i] > x && upper > arr[i]){
//                 upper = arr[i];
//             }
//         }
//     }
//    
//     if (upper == INT_MAX) upper = -1;
//    
//     return {lower , upper};
// }