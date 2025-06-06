// Approach : Sliding Window with HashMap

// int lengthOfLongestSubstring(string s) {
//     int n = s.length();

//     int i = 0 , j = 0;
//     unordered_map<char , int> store;
//     int maxLen = 0;

//     for(int j = 0; j < n; ++j){
//         if(store.find(s[j]) != store.end()){
//             i = max(i, store[s[j]] + 1);
//         }
//         store[s[j]] = j;
//         maxLen = max(maxLen, j - i + 1);
//     }

//     return maxLen;
// }



