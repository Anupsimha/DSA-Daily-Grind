// Approach : Using Set

// string minRemoveToMakeValid(string s) {
//     int n = s.length();

//     unordered_set<int> charIgnored;
//     stack<int> st;

//     for(int i = 0 ; i < n ; i++){
//         if(s[i] == '(')
//             st.push(i);
//         else if(s[i] == ')'){
//             if(st.empty())  charIgnored.insert(i);
//             else    st.pop();
//         }
//     }

//     while(!st.empty()){
//         charIgnored.insert(st.top());
//         st.pop();
//     }

//     string ans = "";
//     for(int i = 0 ; i < n ; i++){
//         if(!charIgnored.count(i))   ans += s[i];
//     }
    
//     return ans;
// }



// Approach : Using left-right and right-left traversals with two variables

// string minRemoveToMakeValid(string s) {
//     int open = 0;
//     for(int i = 0; i < s.length(); i++){
//         if(s[i] == '(') open++;
//         else if(s[i] == ')'){
//             if(open == 0){
//                 s.erase(i, 1);
//                 i--; 
//             }
//             else    open--;
//         }
//     }

//     int closed = 0;
//     for(int i = s.length() - 1; i >= 0; i--){
//         if(s[i] == ')') closed++;
//         else if(s[i] == '('){
//             if(closed == 0) s.erase(i, 1);
//             else    closed--;
//         }
//     }

//     return s;
// }

                    // or //

// string minRemoveToMakeValid(string s) {
//     string res = "";

//     int open = 0;
//     for(int i = 0; i < s.length(); i++){
//         if(s[i] == '('){
//             open++;
//             res += s[i];
//         }
//         else if(s[i] == ')'){
//             if(open > 0){
//                 open--;
//                 res += s[i];
//             }
//         }
//         else{
//             res += s[i];   
//         }
//     }

//     string final_res = "";
//     int closed = 0;

//     for(int i = res.length() - 1; i >= 0; i--){
//         if(res[i] == ')'){
//             closed++;
//             final_res += res[i];
//         }
//         else if(res[i] == '('){
//             if(closed > 0){
//                 closed--;
//                 final_res += res[i];
//             }
//         }
//         else{
//             final_res += res[i];
//         }
//     }

//     reverse(final_res.begin(), final_res.end());

//     return final_res;
// }





// Approach : Using left-right and right-left traversals with one variables

// string minRemoveToMakeValid(string s) {
//     int n = s.length();

//     string res = "";
//     int open = 0;
//     for(int i = 0; i < n ; i++){
//         if(s[i] == '('){
//             open++;
//             res += s[i];
//         }
//         else if(s[i] == ')'){
//             if(open > 0){
//                 open--;
//                 res += s[i];
//             }
//         }
//         else    res += s[i];   
//     }

//     string final_res = "";
//     for(int i = res.length() - 1 ; i >= 0 ; i--){
//         if(res[i] == '(' && open > 0)
//             open--;
//         else
//             final_res += res[i];
//     }

//     reverse(begin(final_res) , end(final_res));

//     return final_res;
// }