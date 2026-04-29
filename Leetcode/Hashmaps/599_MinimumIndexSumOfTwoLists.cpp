// vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
//     int m = list1.size();
//     int n = list2.size();

//     unordered_map<string , int> mp;
//     for(int i = 0 ; i < m ; i++){
//         mp[list1[i]] = i;
//     }

//     vector<string> res;
//     int minIndex = INT_MAX;
//     for(int i = 0 ; i < n ; i++){
//         if(mp.find(list2[i]) != mp.end()){
//             if(mp[list2[i]] + i < minIndex){
//                 minIndex = mp[list2[i]] + i;
//                 res.clear();
//                 res.push_back(list2[i]);
//             }
//             else if(mp[list2[i]] + i == minIndex){
//                 res.push_back(list2[i]);
//             }
//         }
//     }

//     return res;
// }