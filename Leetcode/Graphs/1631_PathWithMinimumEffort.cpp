// Approach : Using DFS
// Time Complexity : O(4^(m * n))

// int m , n;
// vector<vector<int>> directions = {{1 , 0} , {-1 , 0} , {0 , 1} , {0 , -1}};
// vector<int> diff;

// void solve(vector<vector<int>>& heights , int i , int j , int prevMaxDiff , vector<vector<bool>>& visited){
//     if(i == m - 1 && j == n - 1){
//         diff.push_back(prevMaxDiff);
//         return ;
//     }

//     visited[i][j] = true;

//     for(auto &dir : directions){
//         int _i = i + dir[0];
//         int _j = j + dir[1];

//         if(_i >= 0 && _i < m && _j >= 0 && _j < n && !visited[_i][_j]){
//             int currDiff = abs(heights[_i][_j] - heights[i][j]);
//             solve(heights , _i , _j , max(prevMaxDiff, currDiff) , visited);
//         }
//     }

//     visited[i][j] = false;
// }

// int minimumEffortPath(vector<vector<int>>& heights) {
//     m = heights.size();
//     n = heights[0].size();

//     vector<vector<bool>> visited(n , vector<bool>(n , false));

//     solve(heights , 0 , 0 , 0 , visited);

//     int minDiff = INT_MAX;
//     for(int i = 0 ; i < diff.size() ; i++){
//         minDiff = min(minDiff , diff[i]);
//     }

//     return minDiff;
// }





// Approach : Using Dijkstra's Algorithm

// int m , n;
// vector<vector<int>> directions = {{1 , 0} , {-1 , 0} , {0 , 1} , {0 , -1}};
// typedef pair<int , pair<int , int>> P;

// int minimumEffortPath(vector<vector<int>>& heights) {
//     m = heights.size();
//     n = heights[0].size();

//     vector<vector<int>> res(m , vector<int>(n , INT_MAX));
//     priority_queue<P , vector<P> , greater<P>> pq;

//     res[0][0] = 0;
//     pq.push({0 , {0 , 0}});

//     while(!pq.empty()){
//         int diff = pq.top().first;
//         auto coord = pq.top().second;
//         pq.pop();

//         int i = coord.first;
//         int j = coord.second;

//         for(auto &d : directions){
//             int _i = i + d[0];
//             int _j = j + d[1];
            
//             if(_i >=0 && _i < m && _j >= 0 && _j < n){
//                 int curr_diff = abs(heights[_i][_j] - heights[i][j]);
//                 int maxDiff = max(diff , curr_diff);

//                 if(res[_i][_j] > maxDiff){
//                     res[_i][_j] = maxDiff;
//                     pq.push({maxDiff , {_i , _j}});
//                 }
//             }
//         }
//     }

//     return res[m - 1][n - 1];
// }