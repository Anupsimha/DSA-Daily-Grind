// long long countStudents(vector<int>& nums, int n , int mid){
//     int students = 1;
//     long long sumCount = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(sumCount + nums[i] <= mid){
//             sumCount += nums[i];
//         }
//         else{
//             students++;
//             sumCount = nums[i];
//         }
//     }

//     return students;
// }

// int findLargestSum(vector<int>& nums, int n , int k){
//     if(k > n)   return -1;

//     int s = *max_element(begin(nums) , end(nums));
//     int e = accumulate(begin(nums) , end(nums) , 0);
//     while(s <= e){
//         int mid = (s + e)/2;

//         int students = countStudents(nums , n , mid);
//         if(students > k){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return s;
// }

// int splitArray(vector<int>& nums, int k) {
//     int n = nums.size();

//     return findLargestSum(nums , n , k);
// }