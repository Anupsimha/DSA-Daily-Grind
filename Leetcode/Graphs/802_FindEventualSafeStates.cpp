// Approach : BFS

// vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
//     int n = graph.size();

//     vector<int> res;
    
//     vector<vector<int>> adj(n);
//     vector<int> outdegree(n);
//     queue<int> q;

//     for(int u = 0; u < n; u++){
//         for(int v : graph[u]){ 
//             adj[v].push_back(u);     // reverse Adjacency matrix
//             outdegree[u]++;          
//         }
//     }

//     for(int i = 0 ; i < n ; i++){
//         if(outdegree[i] == 0)
//             q.push(i);
//     }

//     while(!q.empty()){
//         int node = q.front();
//         q.pop();

//         res.push_back(node);

//         for(int &it : adj[node]){
//             outdegree[it]--;
//             if(outdegree[it] == 0)
//                 q.push(it);
//         }
//     }

//     sort(begin(res) , end(res));
//     return res;
// }






// Approach : DFS

