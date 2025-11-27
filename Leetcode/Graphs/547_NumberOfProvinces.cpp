// Approach : Using DFS

// int n;

// void dfs(unordered_map<int , vector<int>>& adj , int node , vector<bool>& visited){
//     visited[node] = true;

//     for(int &v : adj[node]){
//         if(!visited[v]){
//             dfs(adj , v , visited);
//         }
//     }
// }

// int findCircleNum(vector<vector<int>>& isConnected) {
//     n = isConnected.size();

//     int count = 0;
//     vector<bool> visited(n , false);

//     unordered_map<int , vector<int>> adj;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(isConnected[i][j] == 1){
//                 adj[i].push_back(j);
//                 adj[j].push_back(i);
//             }
//         }
//     }

//     for(int i = 0 ; i < n ; i++){
//         if(!visited[i]){
//             dfs(adj , i , visited);
//             count++;
//         }
//     }

//     return count;
// }



         // or //


         
// int n;

// void dfs(vector<vector<int>>& isConnected , int node , vector<bool>& visited){
//     visited[node] = true;

//     for(int v = 0 ; v < n ; v++){
//         if(!visited[v] && isConnected[node][v] == 1){
//             dfs(isConnected , v , visited);
//         }
//     }
// }

// int findCircleNum(vector<vector<int>>& isConnected) {
//     n = isConnected.size();

//     int count = 0;
//     vector<bool> visited(n , false);

//     for(int i = 0 ; i < n ; i++){
//         if(!visited[i]){
//             dfs(isConnected , i , visited);
//             count++;
//         }
//     }

//     return count;
// }