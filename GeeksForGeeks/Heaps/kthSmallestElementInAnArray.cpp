// Approach : using Min Heap

// int kthSmallest(vector<int> &arr, int k) {
//     int n = arr.size();
    
//     priority_queue<int , vector<int> , greater<int>> pq;
    
//     for(int i = 0 ; i < n ; i++){
//         pq.push(arr[i]);
//     }
    
//     int ans = 0;
//     while(k--){
//         ans = pq.top();
//         pq.pop();
//     }
    
//     return ans;
// }


// Approach : using Quick Select (Partitioning Algorithm)

// int partition_algo(vector<int> &arr, int s , int e){
//     int p = arr[s];
//     int l = s + 1;
//     int r = e;
    
//     while(l <= r){
//         if(arr[l] > p && p > arr[r]){
//             swap(arr[l] , arr[r]);
//             l++;
//             r--;
//         }
//         if(arr[l] <= p)
//             l++;
//         if(arr[r] >= p)
//             r--;
//     }
    
//     swap(arr[r] , arr[s]);
//     return r;
// }

// int kthSmallest(vector<int> &arr, int k) {
//     int n = arr.size();
    
//     int s = 0 , e = n - 1;
    
//     int pivot_idx = 0;
//     while(true){
//         pivot_idx = partition_algo(arr , s , e);
        
//         if(pivot_idx == k - 1)
//             return arr[pivot_idx];
//         else if(pivot_idx > k - 1)
//             e = pivot_idx - 1;
//         else
//             s = pivot_idx + 1;
//     }
    
//     return arr[pivot_idx];
// }