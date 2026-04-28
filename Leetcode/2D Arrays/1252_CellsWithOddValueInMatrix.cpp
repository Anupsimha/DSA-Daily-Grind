// int oddCells(int m, int n, vector<vector<int>>& indices) {
//     int p = indices.size();
    
//     vector<vector<int>> matrix(m , vector<int>(n , 0));

//     for(int k = 0 ; k < p ; k++){
//         int row = indices[k][0];
//         int col = indices[k][1];

//         for(int i = 0 ; i < n ; i++){
//             matrix[row][i]++;
//         }

//         for(int i = 0 ; i < m ; i++){
//             matrix[i][col]++;
//         }
//     }

//     int cnt = 0;
//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(matrix[i][j] % 2 == 1)   cnt++;
//         }
//     }

//     return cnt;
// }