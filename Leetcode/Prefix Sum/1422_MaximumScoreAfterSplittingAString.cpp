// int maxScore(string s) {
//     int n = s.length();

//     int totalOne = 0;
//     for(char &c : s){
//         if(c - '0' == 1)    totalOne++; 
//     }

//     int maxSplit = INT_MIN;
//     int left = 0;
//     for(int i = 0 ; i < n - 1 ; i++){
//         if(s[i] == '0') left++;
//         else    totalOne--;

//         maxSplit = max(maxSplit , left + totalOne);
//     }

//     return maxSplit;
// }