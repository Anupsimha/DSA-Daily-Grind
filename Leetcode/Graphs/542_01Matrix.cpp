// Approach : Using BFS
// Time Complexity : O(m * n)
// Space Complexity : O(m * n)

// vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//     int m = mat.size();
//     int n = mat[0].size();

//     queue<pair<int , int>> q;
//     vector<vector<int>> dist(m , vector<int>(n , INT_MAX));

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(mat[i][j] == 0){
//                 dist[i][j] = 0;
//                 q.push({i , j});
//             }
//         }
//     }

//     vector<vector<int>> directions = {{-1 , 0} , {1 , 0} , {0 , -1} , {0 , 1}};

//     while(!q.empty()){
//         auto [x , y] = q.front();
//         q.pop();

//         for(auto &dir : directions){
//             int _i = x + dir[0];
//             int _j = y + dir[1];

//             if(_i >= 0 && _i < m && _j >= 0 && _j < n){
//                 if(dist[_i][_j] > dist[x][y] + 1){
//                     dist[_i][_j] = dist[x][y] + 1;
//                     q.push({_i , _j});
//                 }
//             }
//         }
//     }

//     return dist;
// }