// Approach : Recursion
//
// int n;
//
// void solve(vector<int>& arr , vector<int>& res , vector<int> temp , int idx){
//     if(idx >= n){ 
//         if(temp.size() > res.size())
//             res = temp;
//         return ;
//     }
//    
//     if(temp.size() == 0 || arr[idx] > temp.back()){
//         temp.push_back(arr[idx]);
//         solve(arr , res , temp , idx + 1);
//         temp.pop_back();
//     }
//    
//     solve(arr , res , temp , idx + 1);
// }

// vector<int> getLIS(vector<int>& arr) {
//     n = arr.size();
//    
//     vector<int> res;
//     vector<int> temp;
//    
//     solve(arr , res ,  temp , 0);
//    
//     return res;
// }






// Approach : Memoization
// Time Complexity : O(N^2)
// Space Complexity : O(N^2)

// int n;
// vector<vector<int>> dp;

// int lisLength(vector<int>& arr, int idx, int prevIdx) {
//     if (idx == n)
//         return 0;

//     int &res = dp[idx][prevIdx + 1];
//     if (res != -1)
//         return res;

//     int notTake = lisLength(arr, idx + 1, prevIdx);

//     int take = 0;
//     if (prevIdx == -1 || arr[idx] > arr[prevIdx]) {
//         take = 1 + lisLength(arr, idx + 1, idx);
//     }

//     return res = max(take, notTake);
// }

// vector<int> getLIS(vector<int>& arr) {
//     n = arr.size();
//     dp.assign(n, vector<int>(n + 1, -1));

//     vector<int> lis;
//     int idx = 0, prevIdx = -1;

//     while (idx < n) {
//         int notTake = lisLength(arr, idx + 1, prevIdx);

//         int take = 0;
//         if (prevIdx == -1 || arr[idx] > arr[prevIdx]) {
//             take = 1 + lisLength(arr, idx + 1, idx);
//         }

//         if (take >= notTake && take > 0) {
//             lis.push_back(arr[idx]);
//             prevIdx = idx;
//         }
//         idx++;
//     }

//     return lis;
// }




// Approach : Tabulation
// Time Complexity : O(N^2)
// Space Complexity : O(N)

// vector<int> getLIS(vector<int>& arr) {
//     int n = arr.size();

//     vector<int> dp(n, 1);
//     vector<int> parent(n, -1);

//     int maxLen = 1, lastIndex = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i; j++) {
//             if (arr[j] < arr[i] && dp[j] + 1 > dp[i]) {
//                 dp[i] = dp[j] + 1;
//                 parent[i] = j;
//             }
//         }

//         if (dp[i] > maxLen) {
//             maxLen = dp[i];
//             lastIndex = i;
//         }
//     }

//     vector<int> lis;
//     while (lastIndex != -1) {
//         lis.push_back(arr[lastIndex]);
//         lastIndex = parent[lastIndex];
//     }

//     reverse(lis.begin(), lis.end());
//     return lis;
// }