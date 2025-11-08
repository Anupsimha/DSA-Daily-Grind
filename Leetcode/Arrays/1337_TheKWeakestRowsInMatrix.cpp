// Approach : Using 2D Vector to store count of soldiers and row index, then sorting it.

// vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
//     int m = mat.size();
//     int n = mat[0].size();

//     vector<int> res(k , 0);

//     vector<vector<int>> count;
//     for(int i = 0 ; i < m ; i++){
//         int soldiers = 0;
//         for(int j = 0 ; j < n ; j++){
//             if(mat[i][j] == 1)
//                 soldiers++;
//         }
//         count.push_back({soldiers , i});
//     }

//     sort(begin(count) , end(count));

//     for(int i = 0 ; i < k ; i++){
//         res[i] = count[i][1];
//     }

//     return res;
// }





// Optimized Approach : Using Binary Search to count soldiers in each row.

// int binarySearch(vector<int> &nums , int s , int e){
//     int ans = -1;

//     while(s <= e){
//         int mid = s + (e - s)/2;

//         if(nums[mid] == 1){
//             ans = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }

//     return ans;
// }

// vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
//     int m = mat.size();
//     int n = mat[0].size();

//     vector<int> res(k , 0);

//     vector<vector<int>> count;
//     for(int i = 0 ; i < m ; i++){
//         int soldiers = binarySearch(mat[i] , 0 , n - 1);
//         count.push_back({soldiers + 1 , i});
//     }

//     sort(begin(count) , end(count));

//     for(int i = 0 ; i < k ; i++){
//         res[i] = count[i][1];
//     }

//     return res;
// }






// Most Optimized Approach : Using Priority Queue to keep track of k weakest rows.

// int binarySearch(vector<int> &nums , int s , int e){
//     int ans = -1;

//     while(s <= e){
//         int mid = s + (e - s)/2;

//         if(nums[mid] == 1){
//             ans = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }

//     return ans;
// }

// vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
//     int m = mat.size();
//     int n = mat[0].size();

//     vector<int> res;

//     priority_queue<pair<int , int>> pq;
//     for(int i = 0 ; i < m ; i++){
//         int soldiers = binarySearch(mat[i] , 0 , n - 1);

//         pq.push({soldiers , i});
//         if(pq.size() > k)
//             pq.pop();
//     }

//     while(pq.size()){
//         res.push_back(pq.top().second);

//         pq.pop();
//     }

//     reverse(begin(res) , end(res));

//     return res;
// }
