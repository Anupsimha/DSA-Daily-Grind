// int priority(char op) {
//     if(op == '^')
//         return 3;   // highest precedence
//     if(op == '*' || op == '/')
//         return 2;
//     if(op == '+' || op == '-')
//         return 1;
//     return -1; // non-operator
// }

// bool isLeftAssociative(char op) {
//     return (op != '^'); // ^ is right associative
// }

// string infixToPostfix(string& s) {
//     stack<char> st;
//     string ans = "";
    
//     for(char &c : s){
//         if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
//             ans += c;
//         else if(c == '(')
//             st.push(c);
//         else if(c == ')'){
//             while(!st.empty() && st.top() != '('){
//                 ans += st.top();
//                 st.pop();
//             }
//             st.pop();
//         }
//         else{
//             while(!st.empty() && priority(st.top()) >= 0 &&
//                     (priority(st.top()) > priority(c) ||
//                     (priority(st.top()) == priority(c) && isLeftAssociative(c)))) {
//                 ans += st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//     }
    
//     while(!st.empty()){
//         ans += st.top();
//         st.pop();
//     }
    
//     return ans;
// }