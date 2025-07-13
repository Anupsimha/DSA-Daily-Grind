// int count = 0;

// void countPairs(vector<int>& nums , int st , int mid , int e){
//     int right = mid + 1;
//     for(int i = st ; i <= mid ; i++){
//         while(right <= e && (long long)nums[i] > 2LL * nums[right]) {
//             right++;
//         }
//         count += (right - (mid + 1));
//     }
// }

// void merge(vector<int>& nums , int s , int e){
//     int mid = (s + e)/2;
//     vector<int> temp;
//     int left = s;
//     int right = mid + 1;

//     while(left <= mid && right <= e){
//         if(nums[left] <= nums[right]){
//             temp.push_back(nums[left++]);
//         }
//         else{
//             temp.push_back(nums[right++]);
//         }
//     }

//     while(left <= mid) temp.push_back(nums[left++]);
//     while(right <= e) temp.push_back(nums[right++]);

//     for(int i = s; i <= e; i++){
//         nums[i] = temp[i - s];
//     }
// }

// void mergeSort(vector<int>& nums , int st , int e){
//     if(st >= e) return;

//     int mid = (st + e)/2;
//     mergeSort(nums , st , mid);
//     mergeSort(nums , mid + 1 , e);
//     countPairs(nums , st , mid , e);
//     merge(nums , st , e);
// }

// int reversePairs(vector<int>& nums) {
//     int n = nums.size();
//     mergeSort(nums , 0 , n - 1);

//     return count;
// }