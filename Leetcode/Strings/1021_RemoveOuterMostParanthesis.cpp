//Approach I - using stacks

// string removeOuterParentheses(string s) {
//     int n = s.length();
//
//     string ans = "";
//
//     stack<char> valid;
//
//     for(int i = 0 ; i < n ; i++){
//         char curr = s[i];
//         if(curr == '('){
//             if(valid.empty())
//                 valid.push(curr);
//             else{
//                 valid.push(curr);
//                 ans += curr;
//             }
//         }
//         else{
//             valid.pop();
//             if(!valid.empty()){
//                 ans += curr;
//             }
//         }
//     }
//
//     return ans;
// }




//Approach II - using counter -> Most Optimal approach

// string removeOuterParentheses(string s) {
//     int n = s.length();
//
//     string ans = "";
//     int counter = 0;
//
//     for(int i = 0 ; i < n ; i++){
//         if(s[i] == ')') counter--;
//         if(counter != 0) ans += s[i];
//         if(s[i] == '(') counter++;
//     }
//
//     return ans;
// }

// string removeOuterParentheses(string s) {
//     int n = s.length();
//
//     string ans = "";
//     int counter = 0;
//
//     for(int i = 0 ; i < n ; i++){
//         if(s[i] == '('){
//             if(counter == 0)    counter++;
//             else{
//                 counter++;
//                 ans += '(';
//             }
//         }
//         else{
//             counter--;
//             if(counter != 0)
//                 ans += ')';
//         }
//     }
//
//     return ans;
// }