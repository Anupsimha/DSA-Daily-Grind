// Approach : Using DFS
// Time Complexity : O(V + E)
// Space Complexity : O(V)

// int n;

// void dfs(vector<vector<int>> &rooms , int node , vector<bool>& vis){
//     vis[node] = true;

//     for (int nbr : rooms[node]) {
//         if (!vis[nbr]) {
//             dfs(rooms, nbr, vis);  
//         }
//     }
// }

// bool canVisitAllRooms(vector<vector<int>>& rooms) {
//     n = rooms.size();
//     vector<bool> vis(n, false);

//     dfs(rooms, 0, vis);

//     for (bool v : vis) {
//         if (!v) return false;
//     }
//     return true;
// }




// Approach : Using BFS
// Time Complexity : O(V + E)
// Space Complexity : O(V)

// bool canVisitAllRooms(vector<vector<int>>& rooms) {
//     int n = rooms.size();
//     vector<bool> vis(n, false);

//     vis[0] = true;

//     queue<int> q;
//     q.push(0);

//     while(!q.empty()){
//         int node = q.front();
//         q.pop();

//         for(int &nbr : rooms[node]){
//             if(!vis[nbr]){
//                 vis[nbr] = true;
//                 q.push(nbr);
//             }
//         }
//     }

//     for (bool v : vis) {
//         if (!v) return false;
//     }
    
//     return true;
// }