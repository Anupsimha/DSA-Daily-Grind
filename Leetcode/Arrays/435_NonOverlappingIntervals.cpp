// Approach 1: Using Greedy Algorithm (Sorting by end time)
// Time Complexity: O(N log N) due to sorting
// Space Complexity: O(1)

// int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//     int n = intervals.size();

//     sort(intervals.begin() , intervals.end());

//     int count = 0;
//     int i = 0 , j = 1;

//     while(j < n){
//         vector<int> curr_interval = intervals[i];
//         vector<int> next_interval = intervals[j];

//         int cs = curr_interval[0];
//         int ce = curr_interval[1];

//         int ns = next_interval[0];
//         int ne = next_interval[1];

//         if(ce <= ns){
//             i = j;
//             j++;
//         }
//         else if(ce <= ne){
//             j++;
//             count++;
//         }
//         else if(ce > ne){
//             i = j;
//             j++;
//             count++;
//         }
//     }

//     return count;
// }




// Approach 2 : Using Greedy Algorithm (Sorting by start time)
// Time Complexity: O(N log N) due to sorting
// Space Complexity: O(1)

// int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//     int n = intervals.size();

//     sort(intervals.begin() , intervals.end());

//     int count = 0;
//     vector<int> last_interval = intervals[0];

//     for(int i = 1 ; i < n ; i++){
//         if(last_interval[1] <= intervals[i][0]){
//             last_interval = intervals[i];
//         }
//         else if(last_interval[1] <= intervals[i][1]){
//             count++;
//         }
//         else if(last_interval[1] > intervals[i][1]){
//             last_interval = intervals[i];
//             count++;
//         }
//     }

//     return count;
// }