// int findLucky(vector<int>& arr) {
//     unordered_map<int , int> mp;
//     for(int num : arr){
//         mp[num]++;
//     }

//     int luckyNum = INT_MIN;
//     for(auto it : mp){
//         if(it.first == it.second)   luckyNum = max(luckyNum , it.first);
//     }

//     return luckyNum == INT_MIN ? -1 : luckyNum;
// }