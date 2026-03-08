// Approach : Brute Force

// int maxWidthRamp(vector<int>& nums) {
//     int n = nums.size();

//     int maxRamp = 0;

//     for(int i = 0 ; i < n ; i++){
//         for(int j = n - 1 ; j > i ; j--){
//             if(nums[j] >= nums[i]){
//                 maxRamp = max(maxRamp , j - i);
//                 break;
//             }
//         }
//     }

//     return maxRamp;
// }




// Approach : Optimal Approach

// int maxWidthRamp(vector<int>& nums) {
//     int n = nums.size();

//     int maxRamp = 0;

//     vector<int> maxToRight(n);
//     maxToRight[n - 1] = nums[n - 1];
//     for(int i = n - 2 ; i >= 0 ; i--){
//         maxToRight[i] = max(maxToRight[i + 1] , nums[i]);
//     }
    
//     int i = 0 , j = 0;
//     while(j < n){
//         while(nums[i] > maxToRight[j])  i++;

//         maxRamp = max(maxRamp , j - i);
//         j++;
//     }

//     return maxRamp;
// }





// Approach : Using Monotonic Stack

// Time complexity : O(n)
// Space complexity : O(n)
// int maxWidthRamp(vector<int>& nums) {
//     int n = nums.size();

//     int maxRamp = 0;
//     stack<int> st;
//     for(int i = 0 ; i < n ; i++){
//         if(st.empty() || nums[i] <= nums[st.top()]){
//             st.push(i);
//         }
//     }

//     for(int j = n - 1 ; j >= 0 ; j--){
//         while(!st.empty() && nums[j] >= nums[st.top()]){
//             maxRamp = max(maxRamp , j - st.top());
//             st.pop();
//         }
//     }
    
//     return maxRamp;
// }