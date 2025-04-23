// bool isValid(string s) {
//     stack<char> ch;
//     unordered_map<char , char> mapp = {{')' , '('} , {']' , '['} , {'}' , '{'}};
//
//     for(int i = 0 ; i < s.size() ; i++){
//         if(mapp.find(s[i]) == mapp.end()){
//             ch.push(s[i]);
//         }
//         else if(!ch.empty() && mapp[s[i]] == ch.top()){
//             ch.pop();
//         }
//         else{
//             return false;
//         }
//     }
//
//     return ch.empty();
// }