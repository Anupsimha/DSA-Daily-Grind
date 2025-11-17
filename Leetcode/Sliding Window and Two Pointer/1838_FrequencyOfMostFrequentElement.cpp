// Approach : Sorting + Binary Search + Prefix Sum
// Time Complexity : O(N log N)
// Space Complexity : O(1)

// int binarySearch(int target_idx , vector<int>& nums , int k , vector<long>& prefixSum){
//     int target = nums[target_idx];

//     int l = 0 , r = target_idx;

//     int best_idx = target_idx;

//     while(l <= r){
//         int mid = l + (r - l)/2;

//         long count = (target_idx - mid + 1);
//         long windowSum = count * target;

//         long currSum = prefixSum[target_idx] - prefixSum[mid] + nums[mid];

//         int operations = windowSum - currSum;

//         if(operations > k){
//             l = mid + 1;
//         }
//         else{
//             best_idx = mid;
//             r = mid - 1;
//         }
//     }

//     return target_idx - best_idx + 1;
// }

// int maxFrequency(vector<int>& nums, int k) {
//     int n = nums.size();

//     sort(begin(nums) , end(nums));

//     int result = 0;

//     vector<long> prefixSum(n);
//     prefixSum[0] = nums[0];
//     for(int i = 1 ; i < n ; i++){
//         prefixSum[i] = prefixSum [i - 1] + nums[i];
//     } 

//     for(int target_idx = 0 ; target_idx < n ; target_idx++){
//         result = max(result , binarySearch(target_idx , nums , k , prefixSum));
//     }

//     return result;
// }





// Approach : Sliding Window + Prefix Sum

// int maxFrequency(vector<int>& nums, int k) {
//     int n = nums.size();

//     sort(begin(nums) , end(nums));
//     int result = 0;

//     int i = 0 , j = 0;
//     long currSum = 0;
//     while(j < n){
//         long target = nums[j];

//         currSum += nums[j];
//         long windowSum = (j - i + 1) * target;
//         long originalSum = currSum;
//         long operations = windowSum - currSum;

//         if(operations > k){
//             currSum -= nums[i];
//             i++;
//             operations = ((j - i + 1) * target) - currSum;
//         }

//         result = max(result , j - i + 1);
//         j++;
//     }

//     return result;
// }