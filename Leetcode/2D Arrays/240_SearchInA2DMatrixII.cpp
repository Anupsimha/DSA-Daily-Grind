// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int m = matrix.size();
//     int n = matrix[0].size();

//     int rowIdx = 0;
//     int colIdx = n - 1;

//     while(rowIdx < m && colIdx >= 0){
//         int ele = matrix[rowIdx][colIdx];

//         if(ele == target)
//             return true;
//         else if(ele < target)
//             rowIdx++;
//         else
//             colIdx--;
//     }

//     return false;
// }