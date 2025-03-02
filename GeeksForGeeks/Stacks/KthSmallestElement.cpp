// int kthSmallest(vector<int> &arr, int k) {
//     // code here
//     int r = arr.size();
//     priority_queue<int> pq;
//     for(int i = 0 ; i < k ; i++){
//         pq.push(arr[i]);
//     }
//     for(int i = k ; i < r ; i++){
//         if(arr[i] < pq.top()){
//             pq.pop();
//             pq.push(arr[i]);
//         }
//     }
//     int ans = pq.top();
//     return ans;
// }