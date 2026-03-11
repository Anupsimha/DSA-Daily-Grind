// Approach : Using two pointer

// vector<int> resultsArray(vector<int>& nums, int k) {
//     int n = nums.size();

//     vector<int> res(n - k + 1 , -1);
//     int count = 1;
//     for(int i = 1 ; i < k ; i++){
//         if(nums[i] == nums[i - 1] + 1)
//             count++;
//         else
//             count = 1;
//     }

//     if(count == k)  res[0] = nums[k - 1];

//     int i = 1 , j = k;
//     while(j < n){
//         if(nums[j] == nums[j - 1] + 1)
//             count++;
//         else    
//             count = 1;

//         if(count >= k)
//             res[i] = nums[j];

//         i++;
//         j++;
//     }

//     return res;
// }




// Approach : Using deque

// vector<int> resultsArray(vector<int>& nums, int k) {
//     int n = nums.size();

//     vector<int> res;
//     deque<int> dq;
//     for(int j = 0 ; j < n ; j++){
//         if(dq.size() == k)
//             dq.pop_front();

//         if(!dq.empty() && dq.back() != nums[j] - 1)
//             dq.clear();

//         dq.push_back(nums[j]);

//         if(j >= k - 1){
//             if(dq.size() == k)  res.push_back(dq.back());
//             else    res.push_back(-1);
//         }
//     }

//     return res;
// }