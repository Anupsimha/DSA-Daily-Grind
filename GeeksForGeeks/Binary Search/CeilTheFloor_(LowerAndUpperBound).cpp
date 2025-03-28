// int floorNum(vector<int> &arr , int n , int x){
//     int s = 0  , e = n - 1;
//     int ans = -1;
    
//     while(s <= e){
//         int mid = s + (e - s)/2;
        
//         if(arr[mid] == x){
//             s = mid + 1;
//             ans = arr[mid];
//         }
//         else if(arr[mid] > x)
//             e = mid - 1;
//         else{
//             ans = arr[mid];
//             s = mid + 1;
//         } 
//     }
    
//     return ans;
// }

// int ceilNum(vector<int> &arr , int n , int x){
//     int s = 0  , e = n - 1;
//     int ans = -1;
    
//     while(s <= e){
//         int mid = s + (e - s)/2;
        
//         if(arr[mid] == x){
//             e = mid - 1;
//             ans = arr[mid];
//         }
//         else if(arr[mid] < x)
//             s = mid + 1;
//         else{
//             ans = arr[mid];
//             e = mid - 1;
//         } 
//     }
    
//     return ans;
// }

// vector<int> getFloorAndCeil(int x, vector<int> &arr) {
//     int n = arr.size();
    
//     sort(arr.begin() , arr.end());
    
//     int lower = floorNum(arr , n , x);
//     int upper = ceilNum(arr , n , x);
    
//     return {lower , upper};
// }