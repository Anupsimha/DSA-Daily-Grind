//Approach : Using Next Smaller Element and Previous Smaller Element

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

// int largestRectangleArea(vector<int>& heights) {
//     int n = heights.size();

//     int maxArea = INT_MIN;

//     vector<int> NSL = getNSL(heights , n);
//     vector<int> NSR = getNSR(heights , n);

//     for(int i = 0 ; i < n ;  i++){
//         int width = NSR[i] - NSL[i] - 1;

//         maxArea = max(maxArea , (width * heights[i]));
//     }

//     return maxArea;
// }