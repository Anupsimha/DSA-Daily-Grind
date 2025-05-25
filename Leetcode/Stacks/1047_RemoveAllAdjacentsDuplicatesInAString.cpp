// Approach : Using String Manipulation

// string removeDuplicates(string s) {
//     string temp = "";
//     int i = 0;
    
//     while (i < s.length()) {
//         if (temp.empty() || s[i] != temp.back()) {
//             temp.push_back(s[i]);
//         } else {
//             temp.pop_back();
//         }
//         i++;
//     }
    
//     return temp;
// }



// Approach : Using Stacks

// string removeDuplicates(string s) {
//     int n = s.size();
    
//     stack<char> st;

//     for(int i = 0 ; i < n ; i++){
//         if(!st.empty() && st.top() == s[i]){
//             st.pop();
//         }
//         else{
//             st.push(s[i]);
//         }
//     }

//     string res = "";
//     while(!st.empty()){
//         res += st.top();
//         st.pop();
//     }

//     reverse(res.begin() , res.end());

//     return res;
// }