// Approach : Using BFS
// Time Complexity : O(m * n)
// Space Complexity : O(min(m , n))

// int numIslands(vector<vector<char>>& grid) {
//     int m = grid.size();
//     int n = grid[0].size();
//     int count = 0;

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(grid[i][j] == '0')   continue;

//             count++;

//             grid[i][j] = '0';

//             queue<pair<int , int>> q;
//             q.push({i , j});

//             while(!q.empty()){
//                 auto curr = q.front();
//                 q.pop();

//                 int currRow = curr.first;
//                 int currCol = curr.second;

//                 if(currRow - 1 >= 0 && grid[currRow - 1][currCol] == '1'){
//                     q.push({currRow - 1 , currCol});
//                     grid[currRow - 1][currCol] = '0';
//                 }

//                 if(currRow + 1 < m && grid[currRow + 1][currCol] == '1'){
//                     q.push({currRow + 1 , currCol});
//                     grid[currRow + 1][currCol] = '0';
//                 }

//                 if(currCol - 1 >= 0 && grid[currRow][currCol - 1] == '1'){
//                     q.push({currRow , currCol - 1});
//                     grid[currRow][currCol - 1] = '0';
//                 }

//                 if(currCol + 1 < n && grid[currRow][currCol + 1] == '1'){
//                     q.push({currRow , currCol + 1});
//                     grid[currRow][currCol + 1] = '0';
//                 }
//             }
//         }
//     }
    
//     return count;
// }




// Approach : Using DFS
// Time Complexity : O(m * n)
// Space Complexity : O(m * n)

// int m , n;
// vector<vector<bool>> vis;

// void dfs(vector<vector<char>>& grid , int i , int j){
//     if(i < 0 || i >= m || j < 0 || j >= n)
//         return ;

//     if(grid[i][j] == '0' || vis[i][j])
//         return ;

//     vis[i][j] = true;

//     // UP
//     dfs(grid , i - 1 , j);
//     // DOWN
//     dfs(grid , i + 1 , j);
//     // LEFT
//     dfs(grid , i , j - 1);
//     // RIGHT
//     dfs(grid , i , j + 1);
// }

// int numIslands(vector<vector<char>>& grid) {
//     m = grid.size();
//     n = grid[0].size();
//     vis.assign(m , vector<bool>(n , false));

//     int count = 0;

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(grid[i][j] == '1' && !vis[i][j]){
//                 count++;
//                 dfs(grid , i , j);
//             }
//         }
//     }
    
//     return count;
// }
