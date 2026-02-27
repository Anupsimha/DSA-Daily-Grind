// Approach : Using Stack

// int minAddToMakeValid(string s) {
//     if(s == "") return 0;

//     int res = 0;

//     stack<int> st;
//     for(char &ch : s){
//         if(ch == ')'){
//             if(!st.empty() && st.top() == '(') st.pop();
//             else    st.push(ch);
//         }    
//         else    st.push(ch);
//     }

//     while(!st.empty()){
//         res++;
//         st.pop();
//     }

//     return res;
// }




// Appraoch : Using stack and count variable

// int minAddToMakeValid(string s) {
//     stack<char> st;
//     int cnt = 0;

//     for(char &ch : s){
//         if(ch == '('){
//             st.push(ch);
//         }
//         else{
//             if(st.empty())  cnt++;
//             else    st.pop();
//         }
//     }

//     return cnt + st.size();
// }