// int minCost(vector<int>& arr) {
//     // code here
//     int n = arr.size();
//     if(n == 1)
//         return 0;
//     priority_queue<int , vector<int> , greater<int>> pq;     // The greater<data_type> comparator is used to convert the  
//     for(int i = 0 ; i < n ; i++){                            // maxHeap(i.e default for priority_queue) to minHeap/
//         pq.push(arr[i]);    
//     }
//     int cost = 0;
//     while(pq.size() > 1){
//         int a = pq.top();
//         pq.pop();
//         int b = pq.top();
//         pq.pop();
//         int sum = a + b;
//         cost += sum;
//         pq.push(sum);
//     }
//     return cost;
// }