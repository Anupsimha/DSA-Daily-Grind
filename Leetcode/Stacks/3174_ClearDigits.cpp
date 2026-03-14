// string clearDigits(string s) {
//     string res = "";

//     stack<char> st;
//     for(char &ch : s){
//         if(ch >= 'a' && ch <= 'z')
//             st.push(ch);
//         else
//             st.pop();
//     }

//     while(!st.empty()){
//         res += st.top();
//         st.pop();
//     }

//     reverse(begin(res) , end(res));

//     return res;
// }