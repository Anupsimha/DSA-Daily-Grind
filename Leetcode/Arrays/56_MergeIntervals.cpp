// vector<vector<int>> merge(vector<vector<int>>& intervals) {
//     int n = intervals.size();
//     vector<vector<int>> res;
//
//     if(n == 1)
//         return intervals;
//
//     sort(intervals.begin() , intervals.end());
//
//     vector<int> newInterval = intervals[0];
//
//     for(int i = 1; i < n; i++) {
//         if(intervals[i][0] <= newInterval[1]) {
//             newInterval[1] = max(newInterval[1], intervals[i][1]);
//         } else {
//             res.push_back(newInterval);
//             newInterval = intervals[i];
//         }
//     }
//
//     res.push_back(newInterval);
//
//     return res;
// }