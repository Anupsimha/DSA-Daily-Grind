// Approach : Using Hash Map

// typedef pair<char , int> P;

// string frequencySort(string s) {
//     int n = s.size();

//     vector<P> vec(123);

//     for(char &ch : s){
//         int freq = vec[ch].second;
//         vec[ch] = {ch , freq + 1};
//     }

//     auto lambda = [&](P &p1 , P &p2){
//         return p1.second > p2.second;
//     };

//     sort(begin(vec) , end(vec) , lambda);

//     string res = "";
//     for(int i = 0 ; i < 123 ; i++){
//         if(vec[i].second > 0){
//             int ch = vec[i].first;
//             int freq = vec[i].second;
//             string temp = string(freq , ch);
//             res += temp;
//         }
//     }

//     return res;
// }




// Approach : Using Max Heap

// typedef pair<char , int> P;

// string frequencySort(string s) {
//     int n = s.size();

//     auto cmp = [](P &p1 , P &p2){
//         return p1.second < p2.second;
//     };

//     priority_queue<P , vector<P> , decltype(cmp)> pq(cmp);
//     unordered_map<char , int> mp;

//     for(char &ch : s){
//         mp[ch]++;
//     }

//     for(auto &it : mp){
//         pq.push({it.first , it.second});
//     }

//     string res = "";
//     while(!pq.empty()){
//         P p = pq.top();
//         pq.pop();
//         res.append(p.second , p.first);
//     }

//     return res;
// }