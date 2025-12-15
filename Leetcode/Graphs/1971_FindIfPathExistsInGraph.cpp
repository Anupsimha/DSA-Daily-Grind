// Approach : Using DFS

// void solve(unordered_map<int , vector<int>>& adj , vector<bool> &visited , int node){
//     visited[node] = true;

//     for(auto &nbr : adj[node]){
//         if(!visited[nbr])
//             solve(adj , visited , nbr);
//     }
// }

// bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
//     unordered_map<int , vector<int>> adj;
//     for(auto &p : edges){
//         int u = p[0];
//         int v = p[1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     vector<bool> visited(n , false);
//     solve(adj , visited , source);

//     return visited[destination];
// }






// Approach : Using BFS

// bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
//     unordered_map<int , vector<int>> adj;
//     for(auto &p : edges){
//         int u = p[0];
//         int v = p[1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     vector<bool> visited(n , false);

//     queue<int> q;
//     q.push(source);
//     visited[source] = true;

//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();

//         if (node == destination)
//             return true;

//         for (auto &nbr : adj[node]) {
//             if (!visited[nbr]) {
//                 visited[nbr] = true;
//                 q.push(nbr);
//             }
//         }
//     }

//     return false;
// }
