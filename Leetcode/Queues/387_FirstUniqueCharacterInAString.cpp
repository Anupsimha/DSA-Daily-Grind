// Approach : Using HashMap
// Time Complexity : O(N)
// Space Complexity : O(1) - Since the character set is limited to lowercase English letters

// int firstUniqChar(string s) {
//     unordered_map<char, int> freq;

//     for (char c : s) {
//         freq[c]++;
//     }

//     for (int i = 0; i < s.size(); i++) {
//         if (freq[s[i]] == 1) {
//             return i;
//         }
//     }

//     return -1;
// }