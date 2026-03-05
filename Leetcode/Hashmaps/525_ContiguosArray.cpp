// Approach : Brute Force

// int findMaxLength(vector<int>& nums) {
//     int n = nums.size();

//     int max = 0;
//     for(int i = 0 ; i < n ; i++){
//         int zeros = 0 , ones = 0;
//         for(int j = i ; j < n ; j++){
//             if(nums[j] == 1)    ones++;
//             else    zeros++;

//             if(ones == zeros && j - i + 1 > max){
//                 max = j - i + 1;
//             }
//         }
//     }

//     return max;
// }



// Approach : Using Prefix Sum + Hashmaps

// int findMaxLength(vector<int>& nums) {
//     int n = nums.size();

//     int res = 0;
    
//     unordered_map<int , int> mp;
//     mp[0] = -1;
//     int currSum = 0;

//     for(int i = 0 ; i < n ; i++){
//         currSum += (nums[i] == 0 ? -1 : nums[i]);

//         if(mp.find(currSum) != mp.end())
//             res = max(res , i - mp[currSum]);
//         else
//             mp[currSum] = i;
//     }
    
//     return res;
// }