// Approach : Brute Force DFS
// Time Complexity : O((m*n)^2)
// Space Complexity : O(m*n)

// int m, n;

// bool dfsPacific(vector<vector<int>>& h, int i, int j, int prev, vector<vector<int>>& vis) {
//     // Pacific if flow goes OUT of grid from top or left
//     if (i < 0 || j < 0) return true; 

//     if (i >= m || j >= n) return false;  
//     if (vis[i][j]) return false;
//     if (h[i][j] > prev) return false;  // must be <= prev height

//     vis[i][j] = 1;

//     return dfsPacific(h, i - 1, j, h[i][j], vis) || // up
//         dfsPacific(h, i, j - 1, h[i][j], vis) || // left
//         dfsPacific(h, i + 1, j, h[i][j], vis) || // down
//         dfsPacific(h, i, j + 1, h[i][j], vis);   // right
// }

// bool dfsAtlantic(vector<vector<int>>& h, int i, int j, int prev, vector<vector<int>>& vis) {
//     // Atlantic if flow goes OUT of grid from bottom or right
//     if (i >= m || j >= n) return true;

//     if (i < 0 || j < 0) return false;
//     if (vis[i][j]) return false;
//     if (h[i][j] > prev) return false;

//     vis[i][j] = 1;

//     return dfsAtlantic(h, i - 1, j, h[i][j], vis) ||
//         dfsAtlantic(h, i, j - 1, h[i][j], vis) ||
//         dfsAtlantic(h, i + 1, j, h[i][j], vis) ||
//         dfsAtlantic(h, i, j + 1, h[i][j], vis);
// }

// vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
//     m = heights.size();
//     n = heights[0].size();
//     vector<vector<int>> res;

//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {

//             vector<vector<int>> visPac(m, vector<int>(n, 0));
//             vector<vector<int>> visAtl(m, vector<int>(n, 0));

//             bool pac = dfsPacific(heights, i, j, heights[i][j], visPac);
//             bool atl = dfsAtlantic(heights, i, j, heights[i][j], visAtl);

//             if (pac && atl)
//                 res.push_back({i, j});
//         }
//     }
//     return res;
// }






// Approach : Optimized DFS from Ocean Borders
// Time Complexity : O(m*n)
// Space Complexity : O(m*n)

// int m, n;
// vector<vector<int>> directions = {{1 , 0} , {-1 , 0} , {0 , -1} , {0 , 1}};

// void dfs(vector<vector<int>>& heights , int i , int j , int prev , vector<vector<bool>>& visited){
//     if(i < 0 || i >= m || j < 0 || j >= n)
//         return ;

//     if(heights[i][j] < prev || visited[i][j])
//         return ;

//     visited[i][j] = true;

//     for(auto &dir : directions){
//         int i_ = i + dir[0];
//         int j_ = j + dir[1];

//         dfs(heights , i_ , j_ , heights[i][j] , visited);
//     }
// }

// vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
//     m = heights.size();
//     n = heights[0].size();
//     vector<vector<int>> res;

//     vector<vector<bool>> pacificVisited(m , vector<bool>(n , false));
//     vector<vector<bool>> atlanticVisited(m , vector<bool>(n , false));

//     for(int j = 0 ; j < n ; j++){
//         dfs(heights , 0 , j , INT_MIN , pacificVisited);
//         dfs(heights , m - 1 , j , INT_MIN , atlanticVisited);
//     }

//     for(int i = 0 ; i < m ; i++){
//         dfs(heights , i , 0 , INT_MIN , pacificVisited);
//         dfs(heights , i , n - 1 , INT_MIN , atlanticVisited);
//     }

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(pacificVisited[i][j] && atlanticVisited[i][j])
//                 res.push_back({i , j});
//         }
//     }
    
//     return res;
// }