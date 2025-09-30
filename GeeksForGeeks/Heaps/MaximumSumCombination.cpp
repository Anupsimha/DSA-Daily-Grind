// vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
//     int n = a.size();
    
//     vector<int> res;
    
//     priority_queue<pair<int , pair<int , int>>> pq;
//     set<pair<int , int>> st;
    
//     sort(begin(a) , end(a));
//     sort(begin(b) , end(b));
    
//     pq.push({a[n - 1] + b[n - 1] , {n - 1 , n - 1}});
//     st.insert({n - 1 , n - 1});
    
//     while(k--){
//         int sum = pq.top().first;
//         int i = pq.top().second.first;
//         int j = pq.top().second.second;
        
//         res.push_back(sum);
//         pq.pop();
        
//         if(i - 1 >= 0 && st.find({i - 1 , j}) == st.end()){
//             pq.push({a[i - 1] + b[j] , {i - 1 , j}});
//             st.insert({i - 1 , j});
//         }
//         if(j - 1 >= 0 && st.find({i , j - 1}) == st.end()){
//             pq.push({a[i] + b[j - 1] , {i , j - 1}});
//             st.insert({i , j - 1});
//         }
//     }
    
//     return res;
// }