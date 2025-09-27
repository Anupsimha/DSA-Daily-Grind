// KMP Algorithm

// void computeLPS(string pattern , vector<int>& lps){
//     int m = pattern.length();
//     int len = 0;

//     lps[0] = 0;

//     int i = 1;
//     while(i < m){
//         if(pattern[i] == pattern[len]){
//             len++;
//             lps[i] = len;
//             i++;
//         }
//         else{
//             if(len != 0){
//                 len = lps[len - 1];
//             }
//             else{
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
// }

// string shortestPalindrome(string s) {
//     string rev = s;
//     reverse(begin(rev) , end(rev));

//     string temp = s + "-" + rev;

//     vector<int> LPS(temp.length() , 0);
//     computeLPS(temp , LPS);

//     int longestLPSLength = LPS[temp.length() - 1];  // temp.back();

//     string result = rev.substr(0 , s.length() - longestLPSLength);

//     return result + s;
// }






// Approach : Using Reversing But Optimized

// string shortestPalindrome(string s) {
//     int n = s.length();

//     string rev = s;
//     reverse(begin(rev) , end(rev));

//     for(int i = 0 ; i < n ; i++){
//         if(memcmp(s.c_str() , rev.c_str() + i , s.length() - i) == 0){  
//             return rev.substr(0 , i) + s;
//         }
//     }

//     return rev + s;
// }




// Approach : Using Reversing

// string shortestPalindrome(string s) {
//     int n = s.length();

//     string rev = s;
//     reverse(begin(rev) , end(rev));

//     for(int i = 0 ; i < n ; i++){
//         if(s.substr(0 , n - i) == rev.substr(i)){   // prefix in s == suffix in rev
//             return rev.substr(0 , i) + s;
//         }
//     }

//     return rev + s;
// }