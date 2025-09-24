// bool isSafe(int col , int node , vector<int>& color , vector<vector<int>>& adj){
//     for(auto it : adj[node]){
//         if(color[it] == col)
//             return false;
//     }
    
//     return true;
// }

// bool solve(vector<vector<int>>& adj , vector<int>& color , int m , int v , int node){
//     if(v == node)
//         return true;
        
//     for(int i = 1 ; i <= m ; i++){
//         if(isSafe(i , node , color , adj)){
//             color[node] = i;
//             if(solve(adj , color , m , v , node + 1))
//                 return true;
//             color[node] = 0;
//         }
//     }
    
//     return false;
// }

// bool graphColoring(int v, vector<vector<int>> &edges, int m) {
//     vector<vector<int>> adj(v);
//     for(auto it : edges){
//         adj[it[0]].push_back(it[1]);
//         adj[it[1]].push_back(it[0]);
//     }
    
//     vector<int> color(v , -1);
    
//     return solve(adj , color , m , v , 0);
// }