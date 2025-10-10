// Approach using O(n) time and O(1) space

// int removeElement(vector<int>& nums, int val) {
//     int n = nums.size();

//     int k = 0;

//     for(int i = 0 ; i < n ; i++){
//         if(nums[i] != val){
//             nums[k] = nums[i];
//             k++;
//         }
//     }

//     return k;
// }




// Approach using O(2n) time and O(n) space

// int removeElement(vector<int>& nums, int val) {
//     int n = nums.size();

//     int cnt = 0;
//     vector<int> temp;
//     for(int i = 0 ; i < n ; i++){
//         if(nums[i] != val){
//             temp.push_back(nums[i]);
//             cnt++;
//         }
//     }

//     for(int i = 0 ; i < n ; i++){
//         if(i < cnt){
//             nums[i] = temp[i];
//         }
//         else{
//             nums[i] = val;
//         }
//     }

//     return cnt;
// }