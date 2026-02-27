// int maxCount(int m, int n, vector<vector<int>>& ops) {
//     int k = ops.size();

//     int minRow = m , minCol = n;
//     for(int i = 0 ; i < k ; i++){
//         minRow = min(minRow , ops[i][0]);
//         minCol = min(minCol , ops[i][1]);
//     }
    
//     return minRow * minCol;
// }