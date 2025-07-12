// int majorityElement(vector<int>& nums) {
//     int n = nums.size();
//
//     sort(nums.begin() , nums.end());
//                                          // The majority element is the middle element in the sorted array
//     return nums[n / 2];
// }




// Approach II : boyer-Moore Voting Algorithm

// int majorityElement(vector<int>& nums) {
//     int n = nums.size();

//     int majority = nums[0];
//     int count = 1;

//     for(int i = 1 ; i < n ; i ++){
//         if(nums[i] == majority){
//             count++;
//         }
//         else if(count == 0){
//             majority = nums[i];
//         }
//         else{
//             count--;
//         }
//     }

//     return majority;
// }

