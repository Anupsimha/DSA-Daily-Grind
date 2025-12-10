// Algorithm to find the centroids of a tree using topological sorting (BFS approach).
// The centroids correspond to the minimum height trees' roots.

// vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
//     if(n == 1)
//         return {0};

//     unordered_map<int , vector<int>> adj;
//     vector<int> indegree(n , 0);
//     for(auto &e : edges){
//         int u = e[0];
//         int v = e[1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);

//         indegree[u]++;
//         indegree[v]++;
//     }

//     vector<int> res;
    
//     queue<int> leaves;
//     for(int i = 0 ; i < n ; i++){
//         if(indegree[i] == 1)
//             leaves.push(i);
//     }

//     int remainingNode = n;
//     while(remainingNode > 2){
//         int leavesCount = leaves.size();
//         remainingNode -= leavesCount;

//         for(int i = 0 ; i < leavesCount ; i++){
//             int leaf = leaves.front();
//             leaves.pop();

//             for(int nbr : adj[leaf]){
//                 indegree[nbr]--;
//                 if(indegree[nbr] == 1)
//                     leaves.push(nbr);
//             }
//         }
//     }

//     while(!leaves.empty()){
//         res.push_back(leaves.front());
//         leaves.pop();
//     }

//     return res;
// }