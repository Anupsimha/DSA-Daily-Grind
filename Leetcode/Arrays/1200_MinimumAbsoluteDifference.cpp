// vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
//     int n = arr.size();

//     sort(begin(arr) , end(arr));

//     int minDiff = arr[n - 1] - arr[0];
//     for(int i = 1 ; i < n ; i++){
//         minDiff = min(minDiff , arr[i] - arr[i - 1]);
//     }

//     vector<vector<int>> res;
//     for(int i = 1 ; i < n ; i++){
//         if(arr[i] - arr[i - 1] == minDiff){
//             res.push_back({arr[i - 1] , arr[i]});
//         }
//     }

//     return res;
// }