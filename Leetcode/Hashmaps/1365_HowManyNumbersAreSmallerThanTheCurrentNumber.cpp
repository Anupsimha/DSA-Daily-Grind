// vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//     int n = nums.size();

//     vector<int> res(n , 0);
//     vector<int> hash(101  , 0);

//     for(int i = 0 ; i < n ; i++){
//         hash[nums[i]]++;
//     }

//     for(int i = 1 ; i <= 100 ; i++){
//         hash[i] += hash[i - 1];
//     }

//     for(int i = 0 ; i < n ; i++){
//         if(nums[i]) 
//             res[i] = hash[nums[i] - 1];
//     }

//     return res;
// }