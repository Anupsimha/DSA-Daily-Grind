// typedef pair<int , pair<int , int>> P;

// vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
//     int m = nums1.size();
//     int n = nums2.size();

//     vector<vector<int>> res;

//     priority_queue<P , vector<P> , greater<P>> pq;
//     set<pair<int , int>> st;
//     pq.push({nums1[0] + nums2[0] , {0 , 0}});
//     while(k-- && !pq.empty()){
//         auto curr = pq.top();
//         pq.pop();
//         int sum = curr.first;
//         int idx1 = curr.second.first;
//         int idx2 = curr.second.second;

//         res.push_back({nums1[idx1] , nums2[idx2]});

//         if(idx1 + 1 < m && st.find({idx1 + 1 , idx2}) == st.end()){  
//             pq.push({nums1[idx1 + 1] + nums2[idx2] , {idx1 + 1 , idx2}});  
//             st.insert({idx1 + 1 , idx2});   
//         }   

//         if(idx2 + 1 < n && st.find({idx1 , idx2 + 1}) == st.end()){
//             pq.push({nums1[idx1] + nums2[idx2 + 1] , {idx1 , idx2 + 1}});
//             st.insert({idx1 , idx2 + 1});   
//         }    
//     }

//     return res;
// }