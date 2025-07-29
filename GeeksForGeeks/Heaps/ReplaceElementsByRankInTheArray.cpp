// Appraoch 1 : Using Priority Queue
// Time Complexity: O(NlogN)
// Space Complexity: O(N)

// vector<int> replaceWithRank(vector<int> &arr, int N) {
//     vector<int> res(N);
    
//     priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
//     for(int i=0;i<N;i++){
//         pq.push({arr[i],i});
//     }
    
//     int rank = 1;
//     int prev = -1;
    
//     while(!pq.empty()){
        
//         auto it = pq.top(); 
//         pq.pop();
        
//         int val = it.first;
//         int idx = it.second;
        
//         if (val != prev) {
//             res[idx] = rank;
//             prev = val;
//         } else {
//             // Same value → same rank
//             res[idx] = rank;
//         }

//         // Only increment rank when next value is different
//         if (pq.empty() || pq.top().first != val) {
//             rank++;
//         }
//     }
//     return res;
// }




// Approach 2 : Using Sorting
// Time Complexity: O(NlogN)
// Space Complexity: O(N)

// vector<int> replaceWithRank(vector<int> &arr, int N) {
//     vector<int> sorted(arr.begin(), arr.end());
//     sort(sorted.begin(), sorted.end());
    
//     unordered_map<int, int> rank;
//     int r = 1;
//     for(int i = 0; i < N; i++) {
//         if(rank.find(sorted[i]) == rank.end()) {
//             rank[sorted[i]] = r++;
//         }
//     }
    
//     vector<int> res(N);
//     for(int i = 0; i < N; i++) {
//         res[i] = rank[arr[i]];
//     }
    
//     return res;
// }
