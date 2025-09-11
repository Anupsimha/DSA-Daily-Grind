// int upperBound(vector<int> &nums , int target){
//     int s = 0 , e = nums.size();
//     while(s < e){
//         int mid = s + (e - s)/2;
//         if(nums[mid] <= target)
//             s = mid + 1;
//         else
//             e = mid;
//     }
//     return s;
// }

// int median(vector<vector<int>> &mat) {
//     int n = mat.size();
//     int m  = mat[0].size();
    
//     int s = INT_MAX , e = INT_MIN;
    
//     for(int i = 0 ; i < n ; i++){
//         s = min(s , mat[i][0]);
//         e = max(e , mat[i][m - 1]);
//     }
    
//     int desired = (n * m + 1)/2;
    
//     while(s < e){
//         int mid = s + (e - s)/2;
//         int count = 0;
        
//         for(int i = 0 ; i < n ; i++){
//             count += upperBound(mat[i] , mid);
//         }
        
//         if(count < desired)
//             s = mid + 1;
//         else
//             e = mid;
//     }
    
//     return s;
// }