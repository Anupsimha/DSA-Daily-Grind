// vector<vector<int>> generate(int numRows) {
//     vector<vector<int>> ans;
//     int n = numRows;
//     for(int i = 0 ; i<n ; i++){
//         vector<int> sub_ans(i + 1, 1);  
//         for(int j = 1 ; j < i ; j++){
//             sub_ans[j] = ans[i-1][j-1] + ans[i-1][j];
//         }
//         ans.push_back(sub_ans);
//     }
//     return ans;
// }
//