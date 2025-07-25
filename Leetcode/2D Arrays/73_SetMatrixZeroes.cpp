// Approach : Most Optimal Solution
// Without using extra space

// void setZeroes(vector<vector<int>>& matrix) {
//     int m = matrix.size();
//     int n = matrix[0].size();

//     int col0 = 1;

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(matrix[i][j] == 0){
//                 matrix[i][0] = 0;

//                 if(j != 0)
//                     matrix[0][j] = 0;
//                 else
//                     col0 = 0; 
//             }
//         }
//     }

//     for(int i = 1 ; i < m ; i++){
//         for(int j = 1 ; j < n ; j++){
//             if(matrix[i][j] != 0){
//                 if(matrix[0][j] == 0 || matrix[i][0] == 0){
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }

//     if(matrix[0][0] == 0){
//         for(int j = 0 ; j < n ; j++)    
//             matrix[0][j]  = 0;
//     }

//     if(col0 == 0){
//         for(int i = 0 ; i < m ; i++)    
//             matrix[i][0] = 0;
//     }
// }



// Approach : Using Extra Space

// void setZeroes(vector<vector<int>>& matrix) {
//     int m = matrix.size();
//     int n = matrix[0].size();

//     vector<int> rows(m , 0);
//     vector<int> coloumns(n , 0);

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(matrix[i][j] == 0){
//                 rows[i] = 1;
//                 coloumns[j] = 1;
//             }
//         }
//     }

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(rows[i] == 1 || coloumns[j] == 1){
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }