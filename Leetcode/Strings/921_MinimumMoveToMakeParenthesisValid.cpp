// Approach 1

// int minAddToMakeValid(string s) {
//     stack<char> st;
//     int cnt = 0;

//     for(char i : s){
//         if(i == '(')
//             st.push(i);
//         else {
//             if(st.empty())
//                 cnt++;
//             else
//                 st.pop();
//         }
//     }

//     return cnt + st.size();
// }





// Approach 2

// int minAddToMakeValid(string s) {
//     string st;

//     for(auto c : s){
//         if(st.empty())
//             st.push_back(c);
//         else if(st.back() == '(' && c == ')')
//             st.pop_back();
//         else
//             st.push_back(c);
//     }

//     return st.size();
// }




// Approach 3

// int minAddToMakeValid(string s) {
//     int open = 0 , close = 0;

//     for(char i : s){
//         if(i == '(')
//             open++;
//         else{
//             if(open > 0)
//                 open--;
//             else
//                 close++;
//         }
//     }

//     return open + close;
// }