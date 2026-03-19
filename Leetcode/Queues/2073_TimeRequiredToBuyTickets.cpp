// int timeRequiredToBuy(vector<int>& tickets, int k) {
//     int n = tickets.size();

//     queue<pair<int , int>> q;
//     for(int i = 0 ; i < n ; i++){
//         q.push({tickets[i] , i});
//     }

//     int time = 0;
//     while(!q.empty()){
//         auto ticket = q.front();
//         q.pop();

//         ticket.first--;
//         time++;

//         if(ticket.first == 0 && ticket.second == k)  return time;
//         if(ticket.first > 0)    q.push(ticket);
//     }

//     return time;
// }