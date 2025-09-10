// int maxElement(vector<vector<int>>& mat , int m , int n , int mid){
//     int row = -1;
//     int maxEle = -1;

//     for(int i = 0 ; i < m ; i++){
//         if(mat[i][mid] > maxEle){
//             maxEle = mat[i][mid];
//             row = i;
//         }
//     }

//     return row;
// }

// vector<int> findPeakGrid(vector<vector<int>>& mat) {
//     int m = mat.size();
//     int n = mat[0].size();

//     int s = 0 , e = n - 1;
//     while(s <= e){
//         int mid = s + (e - s)/2;

//         int row = maxElement(mat , m , n , mid);

//         int left = mid - 1 >= 0 ? mat[row][mid - 1] : -1;
//         int right = mid + 1 < n ? mat[row][mid + 1] : -1;

//         if(mat[row][mid] > left && mat[row][mid] > right)
//             return {row , mid};
//         else if(mat[row][mid] < left)
//             e = mid - 1;
//         else 
//             s = mid + 1;
//     }

//     return {-1 , -1};
// }