// class Solution {
// public:
//     typedef pair<int , int> P;

//     struct Compare{
//         public :
//            bool operator()(const P &a, const P &b) {
//             int da = a.first * a.first + a.second * a.second;
//             int db = b.first * b.first + b.second * b.second;
//             return da > db;
//         }
//     };

//     vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
//         priority_queue<P , vector<P> , Compare> pq;
//         for(auto &point : points){
//             pq.push({point[0], point[1]});
//         }

//         vector<vector<int>> res;
//         while(k--){
//             auto [x, y] = pq.top();
//             pq.pop();
//             res.push_back({x, y});
//         }

//         return res;
//     }
// };