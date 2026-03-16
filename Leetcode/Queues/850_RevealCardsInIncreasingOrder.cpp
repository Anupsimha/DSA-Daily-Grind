// vector<int> deckRevealedIncreasing(vector<int>& deck) {
//     int n = deck.size();
//     vector<int> res(n , 0);

//     sort(begin(deck) , end(deck));

//     bool skip = false;
//     int i = 0 , j = 0;
//     while(i < n){
//         if(res[j] == 0){
//             if(skip == false){
//                 res[j] = deck[i];
//                 i++;
//             }

//             skip = !skip;
//         }

//         j = (j + 1) % n;
//     }

//     return res;
// }





// Approach : Using Deque

// vector<int> deckRevealedIncreasing(vector<int>& deck) {
//     int n = deck.size();
//     vector<int> res(n , 0);

//     queue<int> q;
//     for(int i = 0 ; i < n ; i++){
//         q.push(i);
//     }

//     sort(begin(deck) , end(deck));

//     for(int i = 0 ; i < n ; i++){
//         int idx = q.front();
//         q.pop();

//         res[idx] = deck[i];

//         if(!q.empty()){
//             q.push(q.front());
//             q.pop();
//         }
//     }

//     return res;
// }