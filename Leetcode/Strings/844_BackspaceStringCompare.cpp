// string solve(string str){
//     stack<int> st;

//     for(char& ch: str){
//         if(ch == '#'){
//             if(st.empty())  continue;
//             else    st.pop();
//         }
//         else
//             st.push(ch);
//     }

//     string ans = "";
//     while(!st.empty()){
//         ans += st.top();
//         st.pop();
//     }

//     return ans;
// }

// bool backspaceCompare(string s, string t) {
//     s = solve(s);
//     t = solve(t);

//     return s == t;
// }