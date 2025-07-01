//Appraoch : Best Approach
// Time Complexity: O(m + n)

// int countNegatives(vector<vector<int>>& grid) {
//     int m = grid.size();
//     int n = grid[0].size();

//     int total_neg = 0;

//     int row = m - 1 , col = 0;

//     while(row >= 0 && col < n){
//         if(grid[row][col] >= 0){
//             col++;
//         }
//         else{
//             total_neg += n - col;
//             row--;
//         }
//     }

//     return total_neg;
// }





//Appraoch : Brute Force
// Time Complexity: O(m * n)

// int countNegatives(vector<vector<int>>& grid) {
//     int m = grid.size();
//     int n = grid[0].size();

//     int total_neg = 0;

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(grid[i][j] < 0)
//                 total_neg++;
//         }
//     }

//     return total_neg;
// }




// Appraoch : Optimized Brute Force
// Time Complexity: O(m * n)

// int countNegatives(vector<vector<int>>& grid) {
//     int m = grid.size();
//     int n = grid[0].size();

//     int total_neg = 0;

//     for(int i = 0 ; i < m ; i++){
//         for(int j = n - 1 ; j >= 0 ; j--){
//             if(grid[i][j] < 0)
//                 total_neg++;
//             else
//                 break;
//         }
//     }

//     return total_neg;
// }





//Appraoch : Binary Search
// Time Complexity: O(m * log(n))

// int binarySearch(vector<int> arr , int n){
//     int st = 0 , e = n - 1;
//     int target = -1;

//     while(st <= e){
//         int mid = st + (e - st)/2;

//         if(arr[mid] < 0){
//             target = mid;
//             e = mid - 1;
//         }
//         else{
//             st = mid + 1;
//         }
//     }

//     return target;
// }

// int countNegatives(vector<vector<int>>& grid) {
//     int m = grid.size();
//     int n = grid[0].size();

//     int total_neg = 0;

//     for(int i = 0 ; i < m ; i++){
//         int negPos = binarySearch(grid[i] , n);

//         total_neg += (negPos == -1) ? 0 : n - negPos;
//     }

//     return total_neg;
// }




//Appraoch : Binary Search using STL
// Time Complexity: O(m * log(n))

// int countNegatives(vector<vector<int>>& grid) {
//     int m = grid.size();
//     int n = grid[0].size();

//     int total_neg = 0;

//     for(int i = 0 ; i < m ; i++){
//         int negPos = upper_bound(begin(grid[i]) , end(grid[i]) , 0 , greater<int>()) - begin(grid[i]);

//         total_neg += (negPos == -1) ? 0 : n - negPos;
//     }

//     return total_neg;
// }