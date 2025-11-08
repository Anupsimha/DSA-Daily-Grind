// Approach : Using Floyd's Tortoise and Hare (Cycle Detection) Algorithm

// int findDuplicate(vector<int>& nums) {
//     int n = nums.size();

//     int slow = nums[0];
//     int fast = nums[0];

//     slow = nums[slow];  // move 1 step
//     fast = nums[nums[fast]];    // move 2 steps

//     // Detect Cycle
//     while(slow != fast){
//         slow = nums[slow];
//         fast = nums[nums[fast]];
//     }

//     // or can be written as
//     // do{
//     //     slow = nums[slow];
//     //     fast = nums[nums[fast]];
//     // }while(slow != fast);


//     slow = nums[0];

//     while(slow != fast){
//         slow = nums[slow];
//         fast = nums[fast];
//     }

//     return fast;
// }