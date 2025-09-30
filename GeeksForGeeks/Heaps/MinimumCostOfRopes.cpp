// int minCost(vector<int>& arr) {
//     int n = arr.size();
    
//     int total_cost = 0;
    
//     priority_queue<int , vector<int> , greater<int>> pq;
    
//     for(int &num : arr){
//         pq.push(num);
//     }
    
//     while(pq.size() > 1){
//         int num1 = pq.top();
//         pq.pop();
//         int num2 = pq.top();
//         pq.pop();
        
//         total_cost += num1 + num2;
        
//         pq.push(num1 + num2);
//     }
    
//     return total_cost;
// }