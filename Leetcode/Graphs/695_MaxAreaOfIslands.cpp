// Approach : DFS

// int m , n;
// vector<vector<int>> directions = {{1 , 0} , {-1 , 0} , {0 , 1} , {0 , -1}};

// void dfs(vector<vector<int>>& grid , int i , int j , vector<vector<bool>>& visited , int& area){
//     if(i < 0 || i >= m || j < 0 || j >= n)
//         return ;

//     if(grid[i][j] == 0 || visited[i][j])
//         return ;
        
//     visited[i][j] = 1;
//     area++;

//     for(auto &dir : directions){
//         int _i = i + dir[0];
//         int _j = j + dir[1];

//         dfs(grid , _i , _j , visited , area);
//     }
    
// }

// int maxAreaOfIsland(vector<vector<int>>& grid) {
//     m = grid.size();
//     n = grid[0].size();

//     vector<vector<bool>> visited(m , vector<bool>(n , false));
//     int maxArea = 0;

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(!visited[i][j] && grid[i][j] == 1){
//                 int area = 0;
//                 dfs(grid , i , j , visited , area);
//                 maxArea = max(maxArea , area);
//             }
//         }
//     }

//     return maxArea;
// }


                // or //


// int m , n;

// int dfs(vector<vector<int>>& grid , int i , int j){
//     if(i < 0 || i >= m || j < 0 || j >= n)
//         return 0;

//     if(grid[i][j] == 0)
//         return 0;

//     grid[i][j] = 0;

//     return 1 + dfs(grid , i + 1 , j) + dfs(grid , i - 1 , j) + dfs(grid , i , j + 1) + dfs(grid , i , j - 1);
// }

// int maxAreaOfIsland(vector<vector<int>>& grid) {
//     m = grid.size();
//     n = grid[0].size();

//     int maxArea = 0;

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(grid[i][j]){
//                 maxArea = max(maxArea , dfs(grid , i , j));
//             }
//         }
//     }

//     return maxArea;
// }