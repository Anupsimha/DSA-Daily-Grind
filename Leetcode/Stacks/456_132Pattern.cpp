// Appraoch : Brute Force

// bool find132pattern(vector<int>& nums) {
//     int n = nums.size();

//     for(int i = 0 ; i < n ; i++){
//         for(int j = i + 1 ; j < n ; j++){
//             if(nums[i] < nums[j]){
//                 for(int k = j + 1 ; k < n ; k++){
//                     if(nums[i] < nums[k] && nums[k] < nums[j])
//                         return true;
//                 }
//             }
//         }
//     }

//     return false;
// }



// Appraoch : Better Appraoch

// bool find132pattern(vector<int>& nums) {
//     int n = nums.size();

//     int num_i = nums[0];
//     for(int j = 1 ; j < n - 1 ; j++){
//         num_i = min(num_i , nums[j]);
//         for(int k = j + 1 ; k < n ; k++){
//             if(num_i < nums[k] && nums[k] < nums[j])
//                 return true;
//         }
//     }

//     return false;
// }



