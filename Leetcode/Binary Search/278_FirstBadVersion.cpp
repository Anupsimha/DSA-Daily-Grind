// int firstBadVersion(int n) {
//     int badVersion = -1;
//    
//     int s = 1 , e = n;
//     while(s <= e){
//         int mid = s + (e - s)/2;
//
//         if(isBadVersion(mid)){
//             badVersion = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//     }
//
//     return badVersion;
// }