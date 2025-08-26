//Approach 1: Brute Force
// Time Complexity : O(n^2)

// bool linearSearch(vector<int>&a, int num) {
//     int n = a.size(); //size of array
//     for (int i = 0; i < n; i++) {
//         if (a[i] == num)
//             return true;
//     }
//     return false;
// }
//
// int longestConsecutive(vector<int>& nums) {
//     int n = nums.size();
//
//     if(n == 0)  return 0;
//
//     int longest = INT_MIN;
//     for(int i = 0 ; i < n ; i++){
//         int x = nums[i];
//         int count = 1;
//         while(linearSearch(nums , x + 1)){
//             x++;
//             count++;
//         }
//         longest = max(count , longest);
//     }
//
//     return longest;
// }



//Approach 2: Better Approach

// int longestConsecutive(vector<int>& nums) {
//     int n = nums.size();
//
//     if(n == 0)  return 0;
//
//     sort(nums.begin() , nums.end());
//
//     int longest = 1;
//     int lastSmaller = INT_MIN;
//     int count = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(nums[i] - 1 == lastSmaller){
//             count++;
//             lastSmaller = nums[i];
//         }
//         else if(nums[i] != lastSmaller){
//             count = 1;
//             lastSmaller = nums[i];
//         }
//
//         longest = max(longest , count);
//     }
//
//     return longest;
// }



//Approach 3 : Using set

// int longestConsecutive(vector<int>& nums) {
//     int n = nums.size();
//
//     if(n == 0)  return 0;
//
//     int longest = 1;
//     unordered_set<int> st;
//     for(int i = 0 ; i < n ; i++){
//         st.insert(nums[i]);
//     }
//
//     for(auto it : st){
//         if(st.find(it - 1) == st.end()){
//             int count = 1;
//             int x = it;
//             while(st.find(x + 1) != st.end()){
//                 x++;
//                 count++;
//             }
//             longest = max(longest , count);
//         }
//     }
//
//     return longest;
// }