// int minStoneSum(vector<int>& piles, int k) {
//     int n = piles.size();

//     priority_queue<int , vector<int>> pq;

//     for(int i = 0 ; i < n ; i++){
//         pq.push(piles[i]);
//     }

//     while(k--){
//         int num = pq.top();
//         pq.pop();

//         num -= num/2;

//         pq.push(num);
//     }

//     int ans = 0;
//     while(!pq.empty()){
//         ans += pq.top();
//         pq.pop();
//     }

//     return ans;
// }