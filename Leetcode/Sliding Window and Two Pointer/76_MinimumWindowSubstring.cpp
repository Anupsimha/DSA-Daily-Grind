// bool allZero(vector<int>& counter) {
//     for (int count : counter) {
//         if (count > 0) return false;
//     }
//     return true;
// }

// string minWindow(string s, string t) {
//     int m = s.size(), n = t.size();
//     if (m < n) return "";

//     vector<int> counter(128, 0); // Handle all ASCII characters

//     for (char ch : t) {
//         counter[ch]++;
//     }

//     int i = 0, j = 0;
//     int first = 0, last = 0;
//     int min_window = INT_MAX;

//     while (j < m) {
//         counter[s[j]]--;

//         while (allZero(counter)) {
//             if (j - i + 1 < min_window) {
//                 min_window = j - i + 1;
//                 first = i;
//                 last = j;
//             }
//             counter[s[i]]++;
//             i++;
//         }

//         j++;
//     }

//     if (min_window == INT_MAX) return "";
//     return s.substr(first, last - first + 1);
// }