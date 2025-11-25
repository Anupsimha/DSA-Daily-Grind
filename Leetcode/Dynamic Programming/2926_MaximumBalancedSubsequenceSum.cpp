// Longest Increasing Subsequence (LIS) Variation


// Approach : Recursion 

// long long solve(int prev , int i , vector<int>& nums){
//     if(i >= nums.size())    return 0;

//     long long taken = INT_MIN;
//     long long notTaken = INT_MIN;

//     if(prev == -1 || nums[i] - i >= nums[prev] - prev)
//         taken = nums[i] + solve(i , i + 1 , nums);

//     notTaken = solve(prev , i + 1 , nums);

//     return max<long long>(taken , notTaken);
// }

// long long maxBalancedSubsequenceSum(vector<int>& nums) {
//     int maxEle = *max_element(begin(nums) , end(nums));
//     if(maxEle <= 0){
//         return maxEle;
//     }

//     return solve(-1 , 0 , nums);
// }




// Approach : Recusion + Memoization

// unordered_map<string , long long> mp;

// long long solve(int prev , int i , vector<int>& nums){
//     if(i >= nums.size())    return 0;

//     string key = to_string(prev) + "_" + to_string(i);
//     if(mp.find(key) != mp.end())
//         return mp[key];

//     long long taken = INT_MIN;
//     long long notTaken = INT_MIN;

//     if(prev == -1 || nums[i] - i >= nums[prev] - prev)
//         taken = nums[i] + solve(i , i + 1 , nums);

//     notTaken = solve(prev , i + 1 , nums);

//     return mp[key] = max<long long>(taken , notTaken);
// }

// long long maxBalancedSubsequenceSum(vector<int>& nums) {
    // int maxEle = *max_element(begin(nums) , end(nums));
    // if(maxEle <= 0){
    //     return maxEle;
    // }

//     return solve(-1 , 0 , nums);
// }





// Approach : Bottom-Up 

// long long maxBalancedSubsequenceSum(vector<int>& nums) {
//     int n = nums.size();

//     int maxEle = *max_element(begin(nums) , end(nums));
//     if(maxEle <= 0)
//         return maxEle;

//     vector<long long> t(n);
//     for(int i = 0 ; i < n ; i++){
//         t[i] = nums[i];
//     }

//     long long maxSum = INT_MIN;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < i ; j++){
//             if(nums[i] - i >= nums[j] - j){
//                 t[i] = max<long long>(t[i] , t[j] + nums[i]);
//                 maxSum = max(maxSum , t[i]);
//             }
//         }
//     }

//     return maxSum > maxEle ? maxSum : maxEle;
// }







// Approach : Most optimal - Using Ordered Map
// Time Complexity : O(n log n)
// Space Complexity : O(n)

// long long maxBalancedSubsequenceSum(vector<int>& nums) {
//     int n = nums.size();

//     map<int , long long> mp;

//     long long res = INT_MIN;

//     for(int i = 0 ; i < n ; i++){
//         auto it = mp.upper_bound(nums[i] - i);

//         long long sum = nums[i];

//         if(it != mp.begin()){
//             it--;
//             sum += (*it).second;
//         }

//         mp[nums[i] - i] = max(mp[nums[i] - i] , sum);

//         it = mp.upper_bound(nums[i] - i);

//         while(it != mp.end() && it->second <= sum){
//             mp.erase(it++);
//         }

//         res = max(res , sum);
//     }

//     return res;
// }