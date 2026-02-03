// vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     int n = nums.size();
//
//     vector<vector<int>> res;
//
//     sort(nums.begin() , nums.end());
//
//     for(int i = 0 ; i < n ; i++){
//         if(i > 0 && nums[i] == nums[i - 1])
//             continue;
//
//         int numa = nums[i];
//         for(int j = i + 1 ; j < n ; ){
//             int numb = nums[j];
//             int c = j + 1 , d = n - 1;
//             while(c < d){
//                 long long sum = (long long)numa + (long long)numb + (long long)nums[c] + (long long)nums[d];
//
//                 if(sum == target){
//                     res.push_back({numa , numb , nums[c] , nums[d]});
//                     c++;
//                     d--;
//
//                     while(c < d && nums[c] == nums[c - 1])  c++;
//                 }
//                 else if(sum > target){
//                     d--;
//                 }
//                 else{
//                     c++;
//                 }
//             }
//
//             j++;
//             while(j < n && nums[j] == nums[j - 1])  j++;
//         }
//     }

//     return res;
// }