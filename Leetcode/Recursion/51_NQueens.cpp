// void addSolution(vector<string>& board , vector<vector<string>>& ans , int n){
//     ans.push_back(board);
// }  

// bool isSafe(int row , int col , vector<string>& board , int n){
//     int x = row;
//     int y = col;

//     //check for same row
//     while(y >= 0){
//         if(board[x][y] == 'Q')
//             return false;
//         y--;
//     }

//     x = row;
//     y = col;
//     // check for upper left diagonal
//     while(x >= 0 && y >= 0){
//         if(board[x][y] == 'Q')
//             return false;
//         y--;
//         x--;
//     }

//     x = row;
//     y = col;
//     //check for lower left diagonal
//     while(x < n && y >= 0){
//         if(board[x][y] == 'Q')
//             return false;
//         y--;
//         x++;
//     }

//     return true;
// }  

// void solve(int col , vector<vector<string>>& ans , vector<string>& board , int n){
//     //Base Case
//     if(col == n){
//         addSolution(board , ans , n);
//         return ;
//     }

//     for(int rows = 0 ; rows < n ; rows++){
//         if(isSafe(rows , col , board , n)){
//             board[rows][col] = 'Q';
//             solve(col + 1 , ans , board , n);
//             board[rows][col] = '.';
//         }
//     }
// }

// vector<vector<string>> solveNQueens(int n) {
//     vector<string> board(n , string(n , '.'));
//     vector<vector<string>> ans;

//     solve(0 , ans , board , n);

//     return ans;
// }