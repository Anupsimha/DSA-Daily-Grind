// Approach : DFS
// Time Complexity : O(m*n)
// Space Complexity : O(m*n)

// int m , n;
// vector<vector<int>> directions = {{1 , 0} , {-1 , 0} , {0 , -1} , {0 , 1}};

// void dfs(vector<vector<int>>& image, int i, int j, int color , int val ,vector<vector<bool>>& visited) {
//     if(i < 0 || i >= m || j < 0 || j >= n)
//         return ;

//     if(image[i][j] != val || visited[i][j])
//         return ;

//     visited[i][j] = true;

//     image[i][j] = color;

//     for(auto &dir : directions){
//         int i_ = i + dir[0];
//         int j_ = j + dir[1];

//         dfs(image , i_ , j_ , color , val , visited);
//     }
// }

// vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//     m = image.size();
//     n = image[0].size();

//     vector<vector<bool>> visited(m , vector<bool>(n , false));
//     dfs(image , sr , sc , color , image[sr][sc] , visited);

//     return image;
// }