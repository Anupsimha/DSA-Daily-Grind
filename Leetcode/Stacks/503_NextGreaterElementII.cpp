//Appraoch 3 : Optimized approach using stack
//Time Complexity : O(4n)

// vector<int> nextGreaterElements(vector<int>& nums) {
//     int n = nums.size();

//     vector<int> ans(n , -1);
//     stack<int> st;

//     for(int i = 2*n - 1 ; i >= 0 ; i--){
//         while(st.size() && st.top() <= nums[i % n]){
//             st.pop();
//         }
//         if(i < n){
//             ans[i] = st.empty() ? -1 : st.top();
//         }

//         st.push(nums[i % n]);
//     }

//     return ans;
// }




//Appraoch 2 : Better approach

// vector<int> nextGreaterElements(vector<int>& nums) {
//     int n = nums.size();

//     vector<int> ans(n , -1);

//     for(int i = 0 ; i < n ; i++){
//         for(int j = i + 1 ; j <= i + n - 1 ; j++){
//             if(nums[j % n] > nums[i]){
//                 ans[i] = nums[j % n];
//                 break;
//             }
//         }
//     }

//     return ans;
// }




//My Approach

// vector<int> nextGreaterElements(vector<int>& nums) {
//     int n = nums.size();

//     if(n == 1)  return {-1};

//     vector<int> ans(n , 0);

//     for(int i = 0 ; i < n - 1 ; i++){
//         int num = nums[i];
//         int nextGreater = -1;
//         bool found = false;
//         for(int j = i + 1 ; j < n ; j++){
//             if(nums[j] > num){
//                 nextGreater = nums[j];
//                 found = true;
//                 break;
//             }
//         }
//         if(!found){
//             for(int j = 0 ; j < i ; j++){
//                 if(nums[j] > num){
//                     nextGreater = nums[j];
//                     break;
//                 }
//             }
//         }
//         ans[i] = nextGreater;
//     }

//     for(int i = 0 ; i < n - 1 ; i++){
//         if(nums[i] > nums[n - 1]){
//             ans[n - 1] = nums[i];
//             break;
//         }
//         else    ans[n - 1] = -1;
//     }

//     return ans;
// }