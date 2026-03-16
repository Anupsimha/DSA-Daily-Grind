// vector<int> shortestToChar(string s, char c) {
//     int n = s.length();

//     vector<int> leftDist(n , INT_MAX);
//     vector<int> rightDist(n , INT_MAX);

//     int dist = INT_MAX;
//     for(int i = 0 ; i < n ; i++){
//         if(s[i] == c){
//             dist = 0;
//             rightDist[i] = dist;
//         }
//         else{
//             if(dist != INT_MAX){
//                 dist++;
//                 rightDist[i] = dist;
//             }
//         }
//     }

//     dist = INT_MAX;
//     for(int i = n - 1 ; i >= 0 ; i--){
//         if(s[i] == c){
//             dist = 0;
//             leftDist[i] = dist;
//         }
//         else{
//             if(dist != INT_MAX){
//                 dist++;
//                 leftDist[i] = dist;
//             }
//         }
//     }

//     vector<int> res(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         res[i] = min(leftDist[i] , rightDist[i]);
//     }

//     return res;
// }






// Approach : Using Priority queue

// vector<int> shortestToChar(string s, char c) {
//     int n = s.size();

//     priority_queue<int, vector<int>, greater<int>> pq;
//     vector<int> ans;
//     int prev = -1;
    
//     // Store all indices of character c
//     for (int i = 0; i < n; i++) {
//         if (c == s[i])
//             pq.push(i);
//     }

//     // Compute shortest distance for each position
//     for (int i = 0; i < n; i++) {
//         if (i == pq.top()) {
//             prev = pq.top();
//             pq.pop();
//         }

//         if (prev == -1) 
//             ans.push_back(abs(pq.top() - i));
//         else if (pq.empty()) 
//             ans.push_back(abs(prev - i));
//         else 
//             ans.push_back(min(abs(prev - i), abs(pq.top() - i)));
//     }

//     return ans;
// }