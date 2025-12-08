// Approach : BFS

// vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
//     unordered_map<int , vector<int>> adj;
//     vector<int> indegree(numCourses , 0);
//     for(auto &p : prerequisites){
//         int course = p[0];
//         int prereq = p[1];

//         adj[prereq].push_back(course);
//         indegree[course]++;
//     }

//     queue<int> q;
//     for(int i = 0 ; i < numCourses ; i++){
//         if(indegree[i] == 0)
//             q.push(i);
//     }

//     vector<int> res;
//     int cnt = 0;
//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         res.push_back(front);
//         cnt++;
        
//         for(auto nbr : adj[front]){
//             indegree[nbr]--;
//             if(indegree[nbr] == 0)
//                 q.push(nbr);
//         }
//     }

//     if(cnt == numCourses)
//         return res;

//     return {};
// }






// Approach : DFS

// bool checkCycle(int node , unordered_map<int, vector<int>>& adj , vector<int>& visited , vector<int>& dfsVisited , vector<int>& topo) {
//     visited[node] = 1;
//     dfsVisited[node] = 1;

//     for (int nbr : adj[node]) {
//         if (!visited[nbr]) {
//             if (checkCycle(nbr, adj, visited, dfsVisited, topo))
//                 return true; 
//         }
//         else if (dfsVisited[nbr]) {
//             return true; 
//         }
//     }

//     dfsVisited[node] = 0;     
//     topo.push_back(node);      
//     return false;              
// }

// vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
//     unordered_map<int , vector<int>> adj;
//     for(auto &p : prerequisites){
//         int course = p[0];
//         int prereq = p[1];

//         adj[prereq].push_back(course);
//     }

//     vector<int> res;

//     vector<int> visited(numCourses, 0);
//     vector<int> dfsVisited(numCourses, 0);
//     vector<int> topo;

//     for (int i = 0; i < numCourses; i++) {
//         if (!visited[i]) {
//             if (checkCycle(i, adj, visited, dfsVisited, topo)) {
//                 return {}; 
//             }
//         }
//     }

//     reverse(topo.begin(), topo.end());
//     return topo;
// }