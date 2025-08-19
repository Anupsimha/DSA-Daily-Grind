// int numberOfSubstrings(string s) {
//     int n = s.length();

//     vector<int> freq(3);
//     int i = 0 , j = 0;
//     int result = 0;
//     while(i < n && j < n){
//         freq[s[j] - 'a']++;

//         while(freq[0]>0 && freq[1]>0 && freq[2]>0){
//             result += (n - j);
//             freq[s[i] - 'a']--;
//             i++;
//         }

//         j++;
//     }

//     return result;
// }