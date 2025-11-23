// Approach : Using DFS
// Time Complexity : O(m * n)
// Space Complexity : O(m * n)

// int m , n;
// vector<vector<bool>> vis;

// void dfs(vector<vector<char>>& board , int i , int j){
//     if(i < 0 || i >= m || j < 0 || j >= n)
//         return ;

//     if(board[i][j] != 'O' || vis[i][j])
//         return ;

//     vis[i][j] = true;
//     board[i][j] = '#';

       // Check If any O's are connected to the boundary O's
//     // UP
//     dfs(board , i - 1 , j);
    
//     // DOWN
//     dfs(board , i + 1 , j);

//     // LEFT
//     dfs(board , i , j - 1);

//     // RIGHT
//     dfs(board , i , j + 1);
// }

// void solve(vector<vector<char>>& board) {
//     m = board.size();
//     n = board[0].size();
//     vis.assign(m , vector<bool>(n , false));

//     for(int i = 0 ; i < m ; i++){
//         if(board[i][0] == 'O')  dfs(board , i , 0);
//         if(board[i][n - 1] == 'O')  dfs(board , i , n - 1);
//     }

//     for(int j = 0 ; j < n ; j++){
//         if(board[0][j] == 'O')  dfs(board , 0 , j);
//         if(board[m - 1][j] == 'O')  dfs(board , m - 1 , j);
//     }

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ;  j++){
//             if(board[i][j] == 'O')
//                 board[i][j] = 'X';
//             if(board[i][j] == '#')
//                 board[i][j] = 'O';
//         }
//     }
// }