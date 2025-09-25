// string preToPost(string pre_exp) {
//     int n = pre_exp.length();
    
//     stack<string> st;
    
//     for(int c = n - 1 ; c >= 0 ; c--){
//         char ch = pre_exp[c];
//         if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//             st.push(string(1 , pre_exp[c]));
//         else{
//             string top1 = st.top();
//             st.pop();
//             string top2 = st.top();
//             st.pop();
            
//             st.push(top1 + top2 + ch);
//         }
//     }
    
//     return st.top();
// }