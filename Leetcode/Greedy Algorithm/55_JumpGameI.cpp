// bool canJump(vector<int>& nums) {
//     int n = nums.size();

//     int maxReach = 0;            // the farthest index we can reach so far
//     for(int i = 0 ; i < n ; i++){
//         if(i > maxReach)    return false;        // If your current position i is beyond the farthest reachable index (maxReach),
//         maxReach = max(maxReach , i + nums[i]);  // you can’t even reach this index → so you’re stuck → return false.         
//     }

//     return true;
// }