// Approach : BFS

// bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
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

//     int cnt = 0;
//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         cnt++;

//         for(auto nbr : adj[front]){
//             indegree[nbr]--;
//             if(indegree[nbr] == 0)
//                 q.push(nbr);
//         }
//     }

//     return cnt == numCourses;
// }





// Approach : DFS

// bool checkCycle(int node , unordered_map<int , vector<int>>& adj , unordered_map<int , int>& visited , unordered_map<int , int>& dfsVisited){
//     visited[node] = true;
//     dfsVisited[node] = true;

//     for(auto &nbr : adj[node]){
//         if(!visited[nbr]){
//             bool cycle = checkCycle(nbr , adj , visited , dfsVisited);
//             if(cycle)
//                 return true;
//         }
//         else if(dfsVisited[nbr])
//             return true;
//     }

//     dfsVisited[node] = false;
//     return false;
// }

// bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//     unordered_map<int , vector<int>> adj;
//     for(auto &p : prerequisites){
//         int course = p[0];
//         int prereq = p[1];

//         adj[prereq].push_back(course);
//     }

//     unordered_map<int , int> visited;
//     unordered_map<int , int> dfsVisited;

//     for(int i = 0 ; i < numCourses ; i++){
//         if(!visited[i]){
//             bool cycle = checkCycle(i , adj , visited , dfsVisited);
//             if(cycle)
//                 return false;
//         }
//     }

//     return true;
// }