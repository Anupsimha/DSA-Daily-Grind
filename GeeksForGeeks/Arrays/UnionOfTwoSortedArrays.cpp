// vector<int> findUnion(vector<int> &a, vector<int> &b) {
//        
//     int m = a.size();
//     int n = b.size();
//    
//     vector<int> c;
//    
//     int idx1 = 0 , idx2 = 0;
//     int mainArrayIndex = 0;
//     while(idx1 < m && idx2 < n){
//         if (!c.empty() && c.back() == a[idx1]) {
//         idx1++;
//         continue;
//         }
//         if (!c.empty() && c.back() == b[idx2]) {
//             idx2++;
//             continue;
//         }
//
//         if (a[idx1] == b[idx2]) {
//             c.push_back(a[idx1++]);
//             idx2++;
//         } 
//         else if (a[idx1] < b[idx2]) {
//             c.push_back(a[idx1++]);
//         } 
//         else {
//             c.push_back(b[idx2++]);
//         }
//     }
//    
//     while (idx1 < m) {
//         if (c.empty() || c.back() != a[idx1]) 
//         c.push_back(a[idx1]);
//         idx1++;
//     }
//
//     while (idx2 < n) {
//         if (c.empty() || c.back() != b[idx2]) 
//         c.push_back(b[idx2]);
//         idx2++;
//     }
//    
//     return c;
// }