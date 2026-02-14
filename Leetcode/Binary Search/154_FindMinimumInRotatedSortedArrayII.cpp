// Time Complexity : O(log n) in average case, O(n) in worst case
// Space Complexity : O(1)

// int findMin(vector<int>& nums) {
//     int n = nums.size();
//     int s = 0 , e = n - 1;
//     while(s < e){
//         int mid = s + (e - s)/2;
//
//         if(nums[mid] > nums[e]) 
//             s = mid + 1;
//         else if(nums[mid] < nums[e])
//             e = mid;
//         else 
//             e--;
//     }
//
//     return nums[s];
// }


 
// Time Complexity: O(log n) in average case, O(n) in worst case
// Space Complexity: O(n) due to the use of an auxiliary array

// int findMin(vector<int>& nums) {
//     int n = nums.size();

//     vector<int> st;
//     for(int i = 0 ; i < n ; i++){
//         if(i > 0 && nums[i] == nums[i - 1])
//             continue;

//         st.push_back(nums[i]);
//     }

//     int s = 0 , e = st.size() - 1;
//     while(s < e){
//         int mid = s + (e - s)/2;

//         if(st[mid] > st[e])
//             s = mid + 1;
//         else
//             e = mid;
//     }

//     return st[s];
// }