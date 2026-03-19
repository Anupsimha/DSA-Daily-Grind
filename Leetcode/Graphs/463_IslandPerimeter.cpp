// Approach : Using DFS

// int m , n;
// vector<vector<int>> directions = {{1 , 0} , {-1 , 0} , {0 , 1} , {0 , -1}};

// int solve(vector<vector<int>>& grid , vector<vector<bool>>& visited , int i , int j){
//     if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0)
//         return 1;

//     if(visited[i][j])   return 0;

//     visited[i][j] = true;
//     int count = 0;
//     for(auto dir : directions){
//         int _i = i + dir[0];
//         int _j = j + dir[1];

//         count += solve(grid , visited , _i , _j);
//     }

//     return count;
// }

// int islandPerimeter(vector<vector<int>>& grid) {
//     m = grid.size();
//     n = grid[0].size();

//     vector<vector<bool>> visited(m , vector<bool>(n , false));

//     int count = 0;
//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(grid[i][j] == 1 && !visited[i][j]){
//                 count += solve(grid , visited , i , j);
//             }
//         }
//     }

//     return count;
// }






// Approach : Using BFS

// int m , n;
// vector<vector<int>> directions = {{1 , 0} , {-1 , 0} , {0 , 1} , {0 , -1}};

// int solve(vector<vector<int>>& grid , int i , int j){
//     int count = 0;

//     queue<pair<int , int>> q;
//     q.push({i , j});
//     grid[i][j] = -1;
//     while(!q.empty()){
//         auto it = q.front();
//         q.pop();

//         for(auto dir : directions){
//             int _i = it.first + dir[0];
//             int _j = it.second + dir[1];

//             if(_i < 0 || _i >= m || _j < 0 || _j >= n || grid[_i][_j] == 0)
//                 count++;
//             else if(grid[_i][_j] == -1) 
//                 continue;
//             else{
//                 q.push({_i , _j});
//                 grid[_i][_j] = -1;
//             }
//         }
//     }

//     return count;
// }

// int islandPerimeter(vector<vector<int>>& grid) {
//     m = grid.size();
//     n = grid[0].size();

//     int count = 0;
//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(grid[i][j] == 1){
//                 count += solve(grid , i , j);
//             }
//         }
//     }

//     return count;
// }






// Approach : Using Greedy Algorithm

// int m , n;
// vector<vector<int>> directions = {{1 , 0} , {-1 , 0} , {0 , 1} , {0 , -1}};

// int islandPerimeter(vector<vector<int>>& grid) {
//     int m = grid.size();
//     int n = grid[0].size();

//     int count = 0;
//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(grid[i][j] == 0){
//                 continue;
//             }


//             if(i + 1 >= m || grid[i + 1][j] == 0)
//                 count++;
//             if(i - 1 < 0 || grid[i - 1][j] == 0)
//                 count++;
//             if(j + 1 >= n || grid[i][j + 1] == 0)
//                 count++;
//             if(j - 1 < 0 || grid[i][j - 1] == 0)
//                 count++;
//         }
//     }

//     return count;
// }