// bool isCycleBFS(int src , unordered_map<int, bool>& visited , unordered_map<int, list<int>>& adj) {
//     unordered_map<int, int> parent;

//     queue<int> q;
//     q.push(src);
//     visited[src] = true;
//     parent[src] = -1;

//     while (!q.empty()) {
//         int front = q.front();
//         q.pop();

//         for (auto neighbour : adj[front]) {
//             if (visited[neighbour] && neighbour != parent[front])
//                 return true;

//             if (!visited[neighbour]) {
//                 visited[neighbour] = true;
//                 parent[neighbour] = front;
//                 q.push(neighbour);
//             }
//         }
//     }
//     return false;
// }

// vector<int> findRedundantConnection(vector<vector<int>>& edges) {
//     int n = edges.size();
//     unordered_map<int, list<int>> adj;

//     for (auto &e : edges) {
//         int u = e[0];
//         int v = e[1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);

//         unordered_map<int, bool> visited;
//         if (isCycleBFS(u, visited, adj)) {
//             return e;   
//         }
//     }

//     return {};
// }