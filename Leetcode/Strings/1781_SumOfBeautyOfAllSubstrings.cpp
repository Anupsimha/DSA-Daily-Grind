// Using Hashing Approach

// pair<int , int> getMaxAndMin(unordered_map<char , int>& mp){
//     int max = - 1 , min = 100000;
//     for(auto it : mp){
//         if(it.second < min)
//             min = it.second;
//         if(it.second > max)
//             max = it.second;
//     }

//     return {min , max};
// }

// int beautySum(string s) {
//     int n = s.size();

//     if(n < 3)    return 0;

    
//     int maxFreq = INT_MIN , minFreq = INT_MAX;
//     int ans = 0;
//     for(int i = 0 ; i < n ; i++){
//         unordered_map<char , int> mp;
//         for(int j = i ; j < n ; j++){
//             mp[s[j]]++;

//             pair<int , int> p = getMaxAndMin(mp);
//             minFreq = p.first;
//             maxFreq = p.second;

//             if(j - i + 1 >= 3 && minFreq != maxFreq){
//                 ans += maxFreq - minFreq;
//             }
//         }
//     }

//     return ans;
// }