// Approach 1 : Using HashMap

// vector<int> majorityElement(vector<int>& nums) {
//     int n = nums.size();
//
//     vector<int> res;
//     unordered_map<int , int> mp;
//
//     for(int i = 0 ; i < n ; i++){
//         mp[nums[i]]++;
//     }
//
//     for(auto it : mp){
//         if(it.second > n/3){
//             res.push_back(it.first);
//         }
//     }
//    
//     return res;
// }



// Approach 2 : Boyer-Moore Voting Algorithm

// vector<int> majorityElement(vector<int>& nums) {
//     int n = nums.size();
//
//     int maj1 = NULL;
//     int maj2 = NULL;
//     int count1 = 0;
//     int count2 = 0;
//
//     for(int i = 0 ; i < n ; i++){
//         if(nums[i] == maj1){
//             count1++;
//         }
//         else if(nums[i] == maj2){
//             count2++;
//         }
//         else if(count1 == 0){
//             maj1 = nums[i];
//             count1 = 1;
//         }
//         else if(count2 == 0){
//             maj2 = nums[i];
//             count2 = 1;
//         }
//         else{
//             count1--;
//             count2--;
//         }
//     }
//
//     vector<int> res;
//     int freq1 = 0;
//     int freq2 = 0;
//     for(int &num : nums){
//         if(num == maj1)
//             freq1++;
//         if(num == maj2)
//             freq2++;
//     }
//
//     if(freq1 > floor(n/3))
//         res.push_back(maj1);
//     if(maj2 != maj1 && freq2 > floor(n/3))   // Cond. for edge Case like {0 , 0 , 0}
//         res.push_back(maj2);
//
//     return res;
// }