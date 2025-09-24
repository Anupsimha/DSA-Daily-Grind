// string postToInfix(string exp) {
//     stack<string> st;
    
//     for(char &c : exp){
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
    
//     return st.top();
// }