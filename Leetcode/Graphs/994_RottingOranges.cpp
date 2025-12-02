// Approach : Using BFS only (Because, in this case, we need to traverse level by level to count the time taken for rotting)
// Time Complexity : O(m * n)
// Space Complexity : O(m * n)

// int orangesRotting(vector<vector<int>>& grid) {
//     int m = grid.size();
//     int n = grid[0].size();

//     queue<pair<int, int>> q;
//     int fresh = 0;
//     int time = 0;

//     // Step 1: Push all initially rotten oranges into queue
//     //         Count fresh oranges
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             if (grid[i][j] == 2) 
//                 q.push({i, j});
//             else if (grid[i][j] == 1)
//                 fresh++;
//         }
//     }

//     // If no fresh oranges → time = 0
//     if (fresh == 0) return 0;

//     vector<vector<int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

//     // Step 2: BFS Level Order Traversal
//     while (!q.empty()) {
//         int size = q.size();
//         bool rottedThisMinute = false;

//         while (size--) {
//             auto [x, y] = q.front();
//             q.pop();

//             for (auto &d : directions) {
//                 int _i = x + d[0];
//                 int _j = y + d[1];

//                 if (_i >= 0 && _i < m && _j >= 0 && _j < n && grid[_i][_j] == 1) {
//                     grid[_i][_j] = 2;      // rot it
//                     fresh--;               // reduce fresh count
//                     q.push({_i, _j});
//                     rottedThisMinute = true;
//                 }
//             }
//         }

//         if (rottedThisMinute)
//             time++;
//     }

//     // If some oranges never got rotten
//     return (fresh == 0) ? time : -1;
// }