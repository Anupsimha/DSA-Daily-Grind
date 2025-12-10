// struct Compare {
//     bool operator()(const pair<int,int>& a, const pair<int,int>& b) {
//         return a.second < b.second;
//     }
// };

// vector<string> findRelativeRanks(vector<int>& score) {
//     int n = score.size();

//     priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;
//     for(int i = 0 ; i < n ; i++){
//         pq.push({i , score[i]});
//     }

//     vector<string> ans(n);
//     int place = 1;

//     while(!pq.empty()){
//         auto top = pq.top();
//         pq.pop();

//         int idx = top.first;

//         if(place == 1)
//             ans[idx] = "Gold Medal";
//         else if(place == 2)
//             ans[idx] = "Silver Medal";
//         else if(place == 3)
//             ans[idx] = "Bronze Medal";
//         else
//             ans[idx] = to_string(place);

//         place++;
//     }

//     return ans;
// }