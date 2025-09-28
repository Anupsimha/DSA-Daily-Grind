// class Comparator{
//     public : 
//         bool operator()(pair<int,int>& a, pair<int,int>& b) {
//             return a.second < b.second; 
//         }
// };

// class Solution {
// public:
//     bool comparator(pair<int,int>& a, pair<int,int>& b){
//         return a.second < b.second;
//     }

//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         int n = nums.size();

//         vector<int> ans;

//         priority_queue<pair<int,int>, vector<pair<int,int>> , Comparator> pq;
//         unordered_map<int , int> mp;

//         for(int &num : nums){
//             mp[num]++;
//         }

//         for(auto &it : mp){
//             pq.push({it.first , it.second});
//         }

//         while(k-- && !pq.empty()){
//             ans.push_back(pq.top().first);
//             pq.pop();
//         }

//         return ans;
//     }
// };