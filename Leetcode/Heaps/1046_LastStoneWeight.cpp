// int lastStoneWeight(vector<int>& stones) {
//     int n = stones.size();

//     priority_queue<int , vector<int>> pq;
//     for(int& num : stones){
//         pq.push(num);
//     }

//     while(pq.size() > 1){
//         int a = pq.top();
//         pq.pop();
//         int b = pq.top();
//         pq.pop();

//         if(a != b){
//             a -= b;
//             pq.push(a);
//         }
//     }

//     return pq.size() == 1 ? pq.top() : 0;
// }