//appraoch : Sum of Maximum - Sum of Minimum

// vector<int> getNSL(vector<int>& nums , int n){
//     vector<int> ans(n);
//     stack<int> st;

//     for(int i = 0 ; i < n ; i++){
//         if(!st.size()){
//             ans[i] = -1;
//         }
//         else{
//             while(st.size() && nums[st.top()] >= nums[i]){
//                 st.pop();
//             }

//             ans[i] = !st.size() ? -1 : st.top();
//         }
//         st.push(i);
//     }

//     return ans;
// }

// vector<int> getNSR(vector<int>& nums , int n){
//     vector<int> ans(n);
//     stack<int> st;

//     for(int i = n - 1 ; i >= 0 ; i--){
//         if(!st.size()){
//             ans[i] = n;
//         }
//         else{
//             while(st.size() && nums[st.top()] > nums[i]){
//                 st.pop();
//             }

//             ans[i] = !st.size() ? n : st.top();
//         }
//         st.push(i);
//     }

//     return ans;
// }

// vector<int> getNGL(vector<int>& nums , int n){
//     vector<int> ans(n);
//     stack<int> st;

//     for(int i = 0 ; i < n ; i++){
//         if(!st.size()){
//             ans[i] = -1;
//         }
//         else{
//             while(st.size() && nums[st.top()] <= nums[i]){
//                 st.pop();
//             }

//             ans[i] = !st.size() ? -1 : st.top();
//         }
//         st.push(i);
//     }

//     return ans;
// }

// vector<int> getNGR(vector<int>& nums , int n){
//     vector<int> ans(n);
//     stack<int> st;

//     for(int i = n - 1 ; i >= 0 ; i--){
//         if(!st.size()){
//             ans[i] = n;
//         }
//         else{
//             while(st.size() && nums[st.top()] < nums[i]){
//                 st.pop();
//             }

//             ans[i] = !st.size() ? n : st.top();
//         }
//         st.push(i);
//     }

//     return ans;
// }

// long long subArrayRanges(vector<int>& nums) {
//     int n = nums.size();

//     if(n == 1)  return 0;

//     vector<int> NSL = getNSL(nums , n);
//     vector<int> NSR = getNSR(nums , n);
//     vector<int> NGL = getNGL(nums , n);
//     vector<int> NGR = getNGR(nums , n);

//     long long minSum = 0;
//     long long maxSum = 0;

//     for(int i = 0 ; i < n ; i++){
//         long long ls = i - NSL[i];
//         long long rs = NSR[i] - i;

//         long long totalWays = ls * rs;

//         long long totalSum = totalWays * nums[i];

//         minSum = (minSum + totalSum);
//     }

//     for(int i = 0 ; i < n ; i++){
//         long long ls = i - NGL[i];
//         long long rs = NGR[i] - i;

//         long long totalWays = ls * rs;

//         long long totalSum = totalWays * nums[i];

//         maxSum = (maxSum + totalSum);
//     }

//     return maxSum - minSum;
// }






// long long subArrayRanges(vector<int>& nums) {
//     int n = nums.size();

//     if(n == 1)  return 0;

//     long long sum = 0;

//     for(int j = 0 ; j < n ; j++){
//         stack<int> min;
//         stack<int> max; 
//         for(int i = j ; i < n ; i++){
//             if(!min.size() && !max.size()){
//                 min.push(nums[i]);
//                 max.push(nums[i]);
//             }
//             else{
//                 if(nums[i] > max.top()){
//                     max.pop();
//                     max.push(nums[i]);
//                 }
//                 if(nums[i] < min.top()){
//                     min.pop();
//                     min.push(nums[i]);
//                 }
//             }

//             sum += (max.top() - min.top());
//         }
//     }

//     return sum;
// }