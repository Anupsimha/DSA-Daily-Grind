// Approach : Using DFS

// bool dfs(vector<vector<int>>& graph , vector<int>& color , int node , int currColor){
//     color[node] = currColor;

//     for(auto &nbr : graph[node]){
//         if(color[nbr] == color[node])
//             return false;

//         if(color[nbr] == -1){
//             if(!dfs(graph , color , nbr , 1 - currColor))
//                 return false;
//         }
//     }

//     return true;
// }

// bool isBipartite(vector<vector<int>>& graph) {
//     int n = graph.size();

//     vector<int> color(n , -1);

//     for(int i = 0 ; i < n ; i++){
//         if(color[i] == -1){
//             if(!dfs(graph , color , i , 1))
//                 return false;
//         }
//     }

//     return true;
// }





// Approach : Using BFS

// bool isBipartite(vector<vector<int>>& graph) {
//     int n = graph.size();

//     vector<int> color(n , -1);
//     queue<int> q;


//     for(int i = 0 ; i < n ; i++){
//         if(color[i] == -1){
//             color[i] = 1;
//             q.push(i);

//             while(!q.empty()){
//                 int curr = q.front();
//                 q.pop();

//                 for(auto &nbr : graph[curr]){
//                     if(color[nbr] == color[curr])
//                         return false;

//                     if(color[nbr] == -1){
//                         color[nbr] = 1 - color[curr];
//                         q.push(nbr);
//                     }
//                 }
//             }
//         }
//     }

//     return true;
// }