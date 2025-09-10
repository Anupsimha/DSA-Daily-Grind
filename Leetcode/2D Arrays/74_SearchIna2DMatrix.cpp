// Aprroach : Binary Search with more optimal

// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int m = matrix.size();
//     int n = matrix[0].size();

//     int i = 0 , j = n - 1;
//     while(i < m && j >= 0){
//         if(matrix[i][j] > target)
//             j--;
//         else if(matrix[i][j] < target)
//             i++;
//         else 
//             return true;
//     }
//     return false;
// }




// Approach : Binary Search

// bool binarySearch(vector<int> nums , int s , int e , int target){
//     while(s <= e){
//         int mid = s + (e - s)/2;

//         if(nums[mid] == target)
//             return true;
//         else if(nums[mid] > target)
//             e = mid - 1;
//         else
//             s = mid + 1;
//     }

//     return false;
// }

// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int m = matrix.size();
    
//     bool check = false;
//     for(int i = 0 ; i < m ; i++){
//         int n = matrix[i].size();

//         if(target >= matrix[i][0] && target <= matrix[i][n - 1]){
//             check = binarySearch(matrix[i] , 0 , n - 1 , target);
//             break;
//         }
//     }

//     return check;
// }