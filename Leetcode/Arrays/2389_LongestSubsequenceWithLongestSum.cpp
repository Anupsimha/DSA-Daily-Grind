// My Approach - Brute Force

// vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//     int n = nums.size();
//     int m = queries.size();
//     vector<int> ans(m);
//     sort(nums.begin() , nums.end());     // Sorting is done because we need to remove the largest element first so that we can get maximum subsequence
//     int total_sum = 0;
//     for(int i = 0 ; i < n ; i++){
//         total_sum += nums[i];
//     }
//     for(int i  = 0 ; i < m ; i++){
//         int temp_sum = total_sum;
//         int count = n;
//         int j = n - 1;
//         while(temp_sum > queries[i] && j >= 0){
//             temp_sum -= nums[j];
//             count--;
//             j--;
//         }
//         ans[i] = count;
//     }
//     return ans;
// }
// Time complexity - O(n(m + logn)) --> O(m * n) (Effective Time complexity as m*n > n*logn)




// Approach II - Most Optimal Appraoch Using Prefix sum and binary sum approach

// int BinarySearch(vector<int>& nums , int n , int target){
//     int l = 0 , r = n - 1;
//
//     int res = -1;
//     while(l <= r){
//         int mid = l + (r - l)/2;
//
//         if(nums[mid] <= target){
//             res = mid;
//             l = mid + 1;
//         }
//         else{
//             r = mid - 1;
//         }
//     }
//
//     return (res == -1) ? 0 : res + 1;
// }
//
// vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//     int n = nums.size();
//     int m = queries.size();
//
//     vector<int> ans;
//
//     sort(nums.begin() , nums.end());
//
//     for(int i = 1 ; i < n ; i++){
//         nums[i] += nums[i - 1];              //Cummulative sum of the array
//     }
//
//     for(int &query : queries){
//         int count = BinarySearch(nums , n , query);
//
//         ans.push_back(count);
//     }
//
//     return ans;
// }



// Same approach using upper_bound() STL ,

// vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//     int n = nums.size();
//     int m = queries.size();
//
//     vector<int> ans;
//
//     sort(nums.begin() , nums.end());
//
//     for(int i = 1 ; i < n ; i++){
//         nums[i] += nums[i - 1];
//     }
//
//     for(int &query : queries){
//         int count = upper_bound(nums.begin() , nums.end() , query) - nums.begin();
//
//         ans.push_back(count);
//     }
//
//     return ans;
// }

