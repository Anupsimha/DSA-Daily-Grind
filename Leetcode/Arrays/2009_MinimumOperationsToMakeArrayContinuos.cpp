// Brute Force

// int minOperations(vector<int>& nums) {
//     int n = nums.size();

//     int miniOp = INT_MAX;
//     for(int i = 0 ; i < n ; i++){
//         int minEle = nums[i];
//         int maxEle = minEle + n - 1;
//         int count = 0;
        
//         unordered_set<int> st;

//         for(int j = 0 ; j < n ; j++){
//             if(nums[j] >= minEle && nums[j] <= maxEle && st.find(nums[j]) == st.end()){
//                 st.insert(nums[j]);
//                 continue;
//             }
//             else
//                 count++;
//         }

//         miniOp = min(miniOp , count);
//     }

//     return miniOp;
// }





// Optimized Approach : Sorting

// int minOperations(vector<int>& nums) {
//     int n = nums.size();

//     set<int> st(begin(nums) , end(nums));   // Sort the arrys with removing the duplicates

//     vector<int> temp(begin(st) , end(st));

//     int miniOp = INT_MAX;

//     for(int i = 0 ; i < temp.size() ; i++){
//         int minEle = temp[i];
//         int maxEle = minEle + n - 1;
        
//         int j = upper_bound(begin(temp) , end(temp) , maxEle) - begin(temp);

//         int within_range = j - i;
//         int out_of_range = n - within_range;

//         miniOp = min(miniOp , out_of_range);
//     }

//     return miniOp;
// }

