// Approach : Using priority queue

// static bool comparator(pair<int,int> &a, pair<int,int> &b){
//     return a.second < b.second;
// }

// vector<int> maxSubsequence(vector<int>& nums, int k) {
//     int n = nums.size();

//     priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

//     for(int i = 0; i < n; i++){
//         pq.push({nums[i], i});
//         if(pq.size() > k) pq.pop();
//     }

//     vector<pair<int,int>> temp;
//     while(!pq.empty()){
//         temp.push_back(pq.top());
//         pq.pop();
//     }

//     sort(begin(temp) , end(temp) , comparator);

//     vector<int> res;
//     for(auto &p : temp) res.push_back(p.first);

//     return res;
// }




// Approach : Using Sorting

// vector<int> maxSubsequence(vector<int>& nums, int k) {
//     int n = nums.size();

//     vector<pair<int , int>> ll(n);
//     for(int i = 0 ; i < n ; i++){
//         ll[i].first = nums[i];
//         ll[i].second = i;
//     }

//     sort(ll.begin() , ll.end() , greater());
//     sort(ll.begin() , ll.begin()+k , [](auto& a, auto& b){
//         return b.second > a.second;
//     });

//     vector<int> ans(k);
//     for(int i = 0 ; i < k ; i++) 
//         ans[i] = ll[i].first;
        
//     return ans;
// }