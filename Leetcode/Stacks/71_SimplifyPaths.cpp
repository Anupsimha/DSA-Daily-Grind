// Approach : Using Stacks
//
// string simplifyPath(string path) {
//     stack<string> st;
//     stringstream ss(path);
//     string token = "";
//
//     while(getline(ss , token , '/')){
//         if(token == "" || token == ".") continue;
//
//         if(token != ".."){
//             st.push(token);
//         }
//         else if(!st.empty()){
//             st.pop();
//         }
//     }
//
//     if(st.empty())
//         return "/";
//
//     string res = "";
//
//     while(!st.empty()){
//         res = "/" + st.top() + res;
//         st.pop();
//     }
//
//     return res;
// }




// Appraoch : Using extra space

// string simplifyPath(string path) {
//     vector<string> st;
//     stringstream ss(path);
//     string token = "";
//
//     while(getline(ss , token , '/')){
//         if(token == "" || token == ".") continue;
//
//         if(token != ".."){
//             st.push_back(token);
//         }
//         else if(!st.empty()){
//             st.pop_back();
//         }
//     }
//
//     if(st.empty())
//         return "/";
//
//     string res = "";
//
//     for(auto& token: st){
//         res += "/" + token;
//     }
//
//
//     return res;
// }