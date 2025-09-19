// int n;
// vector<vector<int>> directions{{1 , 0}, {0 , -1}, {0 , 1}, {-1 , 0}};
// vector<char> dirChar{'D', 'L', 'R', 'U'};

// void findPath(vector<vector<int>>& maze , vector<string>& res , string& temp , int i , int j){
//     if(i < 0 || j < 0 || i >= n || j >= n)
//         return ;
    
//     if(maze[i][j] != 1) return ;
    
//     if(i == n - 1 && j == n - 1){
//         res.push_back(temp);
//         return ;
//     }
    
//     maze[i][j] = -1;
    
//     for(int k = 0 ; k < 4 ; k++){
//         int new_i = i + directions[k][0];
//         int new_j = j + directions[k][1];
        
//         temp.push_back(dirChar[k]);
        
//         findPath(maze , res , temp , new_i , new_j);
        
//         temp.pop_back();    
//     }
    
//     maze[i][j] = 1; 
// }

// vector<string> ratInMaze(vector<vector<int>>& maze) {
//     n = maze.size();
    
//     vector<string> res;
//     string temp = "";
    
//     findPath(maze , res , temp , 0 , 0);
    
//     return res;
// }