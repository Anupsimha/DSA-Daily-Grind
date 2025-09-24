// string preToInfix(string pre_exp) {
//     stack<string> st;
    
//     reverse(pre_exp.begin() , pre_exp.end());
    
//     for(char &c : pre_exp){
//         if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
//             st.push(string(1, c));
//         else{
//             string right = st.top();
//             st.pop();
//             string left = st.top();
//             st.pop();
            
//             string temp = '(' + left + c + right + ')';
//             st.push(temp);
//         }
//     }
    
//     string ans = st.top();
    
//     reverse(begin(ans) , end(ans));
    
//     for(char &c : ans){
//         if(c == ')')    c = '(';
//         else if(c == '(')   c = ')';
//     }
    
//     return ans;
// }