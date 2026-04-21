// char findTheDifference(string s, string t) {
//     int n = s.length();
//     int m = t.length();

//     unordered_map<char , int> mp;
//     for (char c : t) {
//         mp[c]++;
//     }

//     for (char c : s) {
//         mp[c]--;
        
//         if (mp[c] == 0) mp.erase(c);
//     }
    
//     return mp.begin()->first; 
// }