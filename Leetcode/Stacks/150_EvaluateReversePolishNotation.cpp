// Approach : Using Stacks

// int Operator(int a, int b, string op) {
//     if (op == "+") return a + b;
//     if (op == "-") return a - b;
//     if (op == "*") return a * b;
//     if (op == "/") return a / b;
//     if (op == "%") return a % b;
//     return 0;
// }
//
// int evalRPN(vector<string>& tokens) {
//     stack<int> st;
//    
//     for(string &token : tokens){
//         if(token == "+" || token == "-" || token == "*" || token == "/"){
//             int b = st.top();
//             st.pop();
//
//             int a = st.top();
//             st.pop();
//
//             int result = Operator(a , b , token);
//             st.push(result);
//         }
//         else{
//             st.push(stoi(token));
//         }
//     }
//
//     return st.top();
// }





// Approach 2 : Using Lambda Function

// int evalRPN(vector<string>& tokens) {
//     stack<int> st;

//     unordered_map<string , function<int(int , int)>> mp =   // lambda function of writing the function -> function<return_type(dataType of para1 , dataType of para 2)>
//     { 
//     {"+" , [](int a , int b){ return a + b; }},
//     {"-" , [](int a , int b){ return a - b; }},
//     {"/" , [](int a , int b){ return a / b; }},
//     {"*" , [](int a , int b){ return a * b; }}
//     }
//     ;
    
//     for(string &token : tokens){
//         if(token == "+" || token == "-" || token == "*" || token == "/"){
//             int b = st.top();
//             st.pop();

//             int a = st.top();
//             st.pop();

//             int result = mp[token](a , b);
//             st.push(result);
//         }
//         else{
//             st.push(stoi(token));
//         }
//     }

//     return st.top();
// }