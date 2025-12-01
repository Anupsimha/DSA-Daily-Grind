// Approach : DFS
// Time Complexity : O(N^3)
// Space Complexity : O(N)

// typedef long long ll;

// void dfs(int node , unordered_set<int>& visited , unordered_map<int , vector<int>>& adj){
//     visited.insert(node);

//     for(int &v : adj[node]){
//         if(visited.find(v) == visited.end())
//             dfs(v , visited , adj);
//     }
// }

// int maximumDetonation(vector<vector<int>>& bombs) {
//     int n = bombs.size();

//     unordered_map<int , vector<int>> adj;

//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(i == j)  continue;

//             ll x1 = bombs[i][0];
//             ll y1 = bombs[i][1];
//             ll r1 = bombs[i][2];

//             ll x2 = bombs[j][0];
//             ll y2 = bombs[j][1];
//             ll r2 = bombs[j][2];

//             ll distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

//             if(ll(r1 * r1) >= distance)
//                 adj[i].push_back(j);
//         }
//     }

//     int result = 0;
//     unordered_set<int> visited;

//     for(int i = 0 ; i < n ; i++){
//         dfs(i , visited , adj);

//         int count = visited.size();

//         result = max(result , count);

//         visited.clear();
//     }

//     return result;
// }





// Approach : BFS
// Time Complexity : O(N^3)
// Space Complexity : O(N)

// typedef long long ll;

// int bfs(int node , unordered_map<int , vector<int>>& adj){
//     unordered_set<int> visited;

//     queue<int> q;
//     q.push(node);
//     visited.insert(node);

//     while(!q.empty()){
//         int temp = q.front();
//         q.pop();

//         for(int &v : adj[temp]){
//             if(visited.find(v) == visited.end()){
//                 visited.insert(v);
//                 q.push(v);
//             }
//         }
//     }

//     return visited.size();
// }

// int maximumDetonation(vector<vector<int>>& bombs) {
//     int n = bombs.size();

//     unordered_map<int , vector<int>> adj;

//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(i == j)  continue;

//             ll x1 = bombs[i][0];
//             ll y1 = bombs[i][1];
//             ll r1 = bombs[i][2];

//             ll x2 = bombs[j][0];
//             ll y2 = bombs[j][1];
//             ll r2 = bombs[j][2];

//             ll distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

//             if(ll(r1 * r1) >= distance)
//                 adj[i].push_back(j);
//         }
//     }

//     int result = 0;
//     unordered_set<int> visited;

//     for(int i = 0 ; i < n ; i++){
//         int count = bfs(i , adj);

//         result = max(result , count);
//     }

//     return result;
// }