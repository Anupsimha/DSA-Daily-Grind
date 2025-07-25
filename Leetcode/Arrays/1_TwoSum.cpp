// vector<int> twoSum(vector<int>& nums, int target) {
//     int n = nums.size();
//    
//     unordered_map<int , int> mp;
//     for(int i = 0 ; i < n ; i++){
//         int rem = target - nums[i];
//
//         if(mp.find(rem) != mp.end()){
//             return {mp[rem] , i};
//         }
//
//         mp[nums[i]] = i;
//     }
//
//     return {-1 , -1};
// }





// Java Implementation

// public int[] twoSum(int[] nums, int target) {
//     int n = nums.length;

//     Map<Integer , Integer> mp = new HashMap<>();

//     for(int i = 0 ; i < n ; i++){
//         int rem = target - nums[i];

//         if(mp.containsKey(rem)){
//             return new int[] {mp.get(rem) , i};
//         }

//         mp.put(nums[i] , i);
//     }   

//     return new int[] {-1 , -1};
// }