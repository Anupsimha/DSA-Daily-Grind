// Approach : Using DFS (Not Optimal, Throws TLE on Large Inputs)
// Time Complexity : O((m*n)^2)
// Space Complexity : O(m*n)

// int m , n;
// vector<vector<int>> directions = {{-1 , 0} , {1 , 0} , {0 , -1} , {0 , 1}};

// void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2 , int i , int j){
//     if(i < 0 || i >= m || j < 0 || j >= n || !grid1[i][j] || !grid2[i][j])
//         return ;

//     grid2[i][j] = 0;
//     for(auto &dir : directions){
//         int _i = i + dir[0];
//         int _j = j + dir[1];

//         dfs(grid1 , grid2 , _i , _j);
//     }
// }

// bool checkSubIsland(vector<vector<int>>& grid1, vector<vector<int>>& grid2 , int i , int j , vector<vector<bool>>& visited){
//     if(i < 0 || i >= m || j < 0 || j >= n || !grid2[i][j])
//         return true;

//     if(grid1[i][j] == 0)
//         return false;

//     if(visited[i][j])
//         return true;

//     visited[i][j] = true;

//     bool valid = true;
//     for(auto &dir : directions){
//         int _i = i + dir[0];
//         int _j = j + dir[1];

//         valid = valid && checkSubIsland(grid1 , grid2 , _i , _j , visited);
//     }

//     return valid;
// }

// int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
//     m = grid1.size();
//     n = grid1[0].size();

//     int count = 0;

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(grid1[i][j] && grid2[i][j]){
//                 vector<vector<bool>> visited(m , vector<bool>(n , false));
//                 bool check = checkSubIsland(grid1 , grid2 , i , j , visited);
//                 if(check){
//                     count++;
//                     dfs(grid1 , grid2 , i , j);
//                 }
//             }
//         }
//     }

//     return count;
// }







// Approach : Using DFS (Optimal)
// Time Complexity : O(m*n)
// Space Complexity : O(m*n)    

// int m , n;
// vector<vector<int>> directions = {{-1 , 0} , {1 , 0} , {0 , -1} , {0 , 1}};

// bool checkSubIsland(vector<vector<int>>& grid1, vector<vector<int>>& grid2 , int i , int j){
//     if(i < 0 || i >= m || j < 0 || j >= n)
//         return true;

//     if(grid2[i][j] != 1)
//         return true;

//     grid2[i][j] = -1;

//     bool result = (grid1[i][j] == 1);

//     for(auto &dir : directions){
//         int _i = i + dir[0];
//         int _j = j + dir[1];

//         result = result & checkSubIsland(grid1 , grid2 , _i , _j);
//     }

//     return result;
// }

// int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
//     m = grid1.size();
//     n = grid1[0].size();

//     int count = 0;

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(grid2[i][j] == 1 && checkSubIsland(grid1 , grid2 , i , j)){
//                 count++;
//             }
//         }
//     }

//     return count;
// }





// Approach : Using BFS (Optimal)
// Time Complexity : O(m*n)
// Space Complexity : O(m*n)

// int m , n;
// vector<vector<int>> directions = {{-1 , 0} , {1 , 0} , {0 , -1} , {0 , 1}};

// bool checkSubIsland(vector<vector<int>>& grid1, vector<vector<int>>& grid2 , int i , int j){
//     bool result = true;

//     queue<pair<int , int>> q;
//     q.push({i , j});
//     grid2[i][j] = -1;

//     while(!q.empty()){
//         auto [x , y] = q.front();
//         q.pop();

//         if(grid1[x][y] != 1){
//             result = false;
//         }
        
//         // Even Though, If the result turns out to be false, then also iterate through 
//         // because, to mark the cells of sub-island in grid2 as visited
//         for(vector<int>& dir : directions){
//             int _i = x + dir[0];
//             int _j = y + dir[1];

//             if(_i >= 0 && _i < m && _j >= 0 && _j < n && grid2[_i][_j] == 1){
//                 grid2[_i][_j] = -1;
//                 q.push({_i , _j});
//             }
//         }
//     }

//     return result;
// }

// int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
//     m = grid1.size();
//     n = grid1[0].size();

//     int count = 0;

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(grid2[i][j] == 1 && checkSubIsland(grid1 , grid2 , i , j)){
//                 count++;
//             }
//         }
//     }

//     return count;
// }