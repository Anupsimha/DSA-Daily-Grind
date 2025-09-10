// int binarySearch(vector<int> nums , int s , int e){
//     int ans = -1;
    
//     while(s <= e){
//         int mid = s + (e - s)/2;
        
//         if(nums[mid] == 1){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//     }
    
//     return ans;
// }

// int rowWithMax1s(vector<vector<int>> &arr) {
//     int n = arr.size();
//     if(n == 0) return -1;
    
//     int maxLen = 0 , row = -1;
    
//     for(int i = 0 ; i < n ; i++){
//         int startIdx = binarySearch(arr[i] , 0 , arr[i].size() - 1);
//         if(startIdx == -1)
//             continue;
            
//         int len = arr[i].size() - startIdx;
//         if(len > maxLen){
//             row = i;
//             maxLen = len;
//         }
//     }
    
//     return row;
// }