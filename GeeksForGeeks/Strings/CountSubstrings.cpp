// int countSubstring(string s) {
//     int n = s.size();
    
//     unordered_map<char , int> freq;
//     int count = 0;
//     int i = 0 , j = 0;
//     while(j < n){
//         freq[s[j]]++;
        
//         while(freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0){
//             count += n - j;
//             freq[s[i]]--;
//             i++;
//         }
        
        
//         j++;
//     }
    
//     return count;
// }