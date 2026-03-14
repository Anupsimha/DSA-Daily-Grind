// string reversePrefix(string word, char ch) {
//     int n = word.length();

//     string res = "";
//     bool found = false;
//     for(char &s : word){
//         res += s;

//         if(s == ch && !found){
//             reverse(begin(res) , end(res));
//             found = true;
//         }
//     }

//     return res;
// }