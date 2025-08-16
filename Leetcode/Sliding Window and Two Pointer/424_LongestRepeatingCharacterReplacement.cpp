// int characterReplacement(string s, int k) {
//     int n = s.size();

//     unordered_map<char , int> freq;
//     int i = 0;
//     int maxFreq = 0 , maxWindow = 0;
//     for(int j = 0 ; j < n ; j++){
//         freq[s[j]]++;

//         maxFreq = max(maxFreq , freq[s[j]]);

//         int windowLength = j - i + 1;
//         if(windowLength - maxFreq > k){
//             freq[s[i]]--;
//             i++;
//         }

//         windowLength = j - i + 1;
//         maxWindow = max(maxWindow , windowLength);
//     }

//     return maxWindow;
// }