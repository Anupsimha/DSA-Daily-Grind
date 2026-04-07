// Approach : Using hashmap + Sliding window

// bool check(unordered_map<char , int> mp){
//     for(auto it : mp){
//         if(it.second >= 2)  return false;
//     }

//     return true;
// }

// int countGoodSubstrings(string s) {
//     int n = s.length();

//     unordered_map<char , int> mp;
//     int count = 0;
//     int i = 0 , j = 0;
//     while(j < n){
//         mp[s[j]]++;

//         if(j - i + 1 == 3){
//             if(check(mp))   count++;

//             mp[s[i]]--;
//             if(mp[s[i]] == 0)   mp.erase(s[i]);

//             i++;
//         }

//         j++;
//     }

//     return count;
// }






// Approach : Optimal approach (Greedy Algo)

// int countGoodSubstrings(string s) {
//     int n = s.length();

//     int count = 0;
//     for(int i = 0 ; i + 2 < n ; i++){
//         char a = s[i];
//         char b = s[i + 1];
//         char c = s[i + 2];

//         if(a == b || a == c || b == c)
//             continue;

//         count++;
//     }

//     return count;
// }