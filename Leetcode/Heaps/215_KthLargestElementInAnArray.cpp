// int findKthLargest(vector<int>& nums, int k) {
//     int n = nums.size();

//     priority_queue<int> pq;

//     for(int i = 0 ; i < n ; i++){
//         pq.push(nums[i]);
//     }

//     int temp = 0;
//     while(k--){
//         temp = pq.top();
//         pq.pop();
//     }

//     return temp;
// }