// vector<vector<int>> generateMatrix(int n) {
//     vector<vector<int>> res(n , vector<int>(n , 0));

//     int top = 0 , bottom = n - 1;
//     int left = 0 , right = n - 1;
//     int count = 1;
//     while(count <= n * n){
//         for(int i = left ; i <= right && count <= n * n ; i++){
//             res[top][i] = count++;
//         }
//         top++;

//         for(int i = top ; i <= bottom && count <= n * n ; i++){
//             res[i][right] = count++;
//         }
//         right--;

//         for(int i = right ; i >= left && count <= n * n ; i--){
//             res[bottom][i] = count++;
//         }
//         bottom--;

//         for(int i = bottom ; i >= top && count <= n * n ; i--){
//             res[i][left] = count++;
//         }
//         left++;
//     }

//     return res;
// }