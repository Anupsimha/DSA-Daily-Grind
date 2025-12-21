// int ans = -1;
//
// void dfs(int node, vector<int>& edges , vector<int>& vis , vector<int>& dfsVis, vector<int>& dist , int depth) {
//     vis[node] = 1;
//     dfsVis[node] = 1;
//     dist[node] = depth;
//
//     int nbr = edges[node];
//     if (nbr != -1) {
//         if (!vis[nbr]) {
//             dfs(nbr, edges, vis, dfsVis, dist, depth + 1);
//         }
//         else if (dfsVis[nbr]) {
//             ans = max(ans, depth - dist[nbr] + 1);   // we are removing the dist[nbr], because we need to get the starting point 
//         }                                            // of the cycle and +1 to include that node in the cycle length
//     }
//
//     dfsVis[node] = 0; 
// }
//
// int longestCycle(vector<int>& edges) {
//     int n = edges.size();
//     vector<int> vis(n, 0), dfsVis(n, 0), dist(n, 0);
//
//     for (int i = 0; i < n; i++) {
//         if (!vis[i]) {
//             dfs(i, edges, vis, dfsVis, dist, 0);
//         }
//     }
//     return ans;
// }