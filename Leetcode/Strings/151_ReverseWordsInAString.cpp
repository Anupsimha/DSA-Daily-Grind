// void revPalindrome(string &str){
//     int s = 0 , e = str.length() - 1;
//     while(s <= e){
//         swap(str[s] , str[e]);
//         s++;
//         e--;
//     }
// }

// string reverseWords(string s) {
//     int n = s.length();
//
//     string ans = "";
//
//     for(int i = n - 1 ; i >= 0 ; i--){
//         string temp = "";
//         while(i>= 0 && s[i] == ' ')   i--;
//
//         if(i < 0)   break;
//
//         while(i >= 0 && s[i] != ' '){
//             temp += s[i];
//             i--;
//         }
//
//         revPalindrome(temp);
//
//         if (!ans.empty()) ans += " ";
//  
//         ans += temp;
//     }
//
//     return ans;
// }