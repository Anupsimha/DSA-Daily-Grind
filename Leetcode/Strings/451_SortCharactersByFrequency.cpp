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

//     sort(begin(vec) , end(vec) , lambda);    // lambda to sort by frequency -> comparator

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