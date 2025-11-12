// vector<vector<int>> res;

// void solve(int n , int k , vector<int> output , int num){
//     if(output.size() == k){
//         res.push_back(output);
//         return;
//     }

//     for(int i = num ; i <= n ; i++){
//         output.push_back(i);
//         solve(n , k , output , i + 1);
//         output.pop_back();
//     }
// }

// vector<vector<int>> combine(int n, int k) {
//     vector<int> output;

//     solve(n , k , output , 1);

//     return res;
// }