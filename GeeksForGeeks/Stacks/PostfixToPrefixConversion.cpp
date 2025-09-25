// string postToPre(string post_exp) {
//     stack<string> st;
    
//     for(char &c : post_exp){
//         if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
//             st.push(string(1 , c));
//         else{
//             string top1 = st.top();
//             st.pop();
//             string top2 = st.top();
//             st.pop();
            
//             st.push(c + top2 + top1);
//         }
//     }
    
//     return st.top();
// }