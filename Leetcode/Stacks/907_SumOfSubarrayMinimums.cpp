//Appraoch 1 : Brute Force
// Time Complexity : O(n^2)
// Space Complexity : O(1)

// int sumSubarrayMins(vector<int>& arr) {
//     int n = arr.size();

//     long long sum = 0;

//     for(int i = 0 ; i < n ; i++){
//         int min = INT_MAX;
//         for(int j = i ; j < n ; j++){
//             if(arr[j] < min){
//                 min = arr[j];
//             }
//             sum += min;
//         }
//     }

//     return sum;a
// }




// Approach 2 : Using Stack
// Time Complexity : O(n)

// vector<int> getNSL(vector<int>& arr , int n){
//     vector<int> ans(n);
//     stack<int> st;

//     for(int i = 0 ; i < n ; i++){
//         if(!st.size()){
//             ans[i] = -1;
//         }
//         else{
//             while(st.size() && arr[st.top()] >= arr[i])
//                 st.pop();

//             ans[i] = !st.size() ? -1 : st.top();
//         }
//         st.push(i);
//     }

//     return ans;
// }

// vector<int> getNRL(vector<int>& arr , int n){
//     vector<int> ans(n);
//     stack<int> st;

//     for(int i = n - 1 ; i >= 0 ; i--){
//         if(!st.size()){
//             ans[i] = n;
//         }
//         else{
//             while(st.size() && arr[st.top()] > arr[i])
//                 st.pop();

//             ans[i] = !st.size() ? n : st.top();
//         }
//         st.push(i);
//     }

//     return ans;
// }

// int sumSubarrayMins(vector<int>& arr) {
//     int n = arr.size();

//     long long sum = 0;
//     vector<int> NSL = getNSL(arr , n);
//     vector<int> NRL = getNRL(arr , n);

//     long long mod = 1e9 + 7;

//     for(int i = 0 ; i < n ; i++){
//         long long ls = i - NSL[i];
//         long long rs = NRL[i] - i;

//         long long totalWays = ls * rs;

//         long long totalSum = totalWays * arr[i];

//         sum = (sum + totalSum) % mod;
//     }

//     return sum;
// }