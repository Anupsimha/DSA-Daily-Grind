// vector<vector<int>> threeSum(vector<int>& nums) {
//     vector<vector<int>> final_ans;
//     sort(nums.begin() , nums.end());
//
//     for(int i = 0 ; i < nums.size() ; i++){
//         if(i > 0 && nums[i] == nums[i-1])   continue;
//         int num = nums[i];
//         int left = i + 1;
//         int right = nums.size()-1;
//         while(left < right){
//            
//             int sum = num + nums[left] + nums[right];
//
//             if(sum == 0){
//                 final_ans.push_back({num , nums[left] , nums[right]});
//
//                 while(left < right && nums[left] == nums[left + 1]) left++;
//
//                 while(left < right && nums[right] == nums[right - 1])   right--;
//                 left++;
//                 right--;
//             }
//             else if(sum > 0){
//                 right--;
//             }
//             else{
//                 left++;
//             }
//         }
//     }
    
//     return final_ans;
// }