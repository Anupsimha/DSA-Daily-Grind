// int calPoints(vector<string>& operations) {
//     int n = operations.size();

//     int score = 0;
//     stack<int> st;
//     for(int i = 0 ; i < n ; i++){
//         if(operations[i] == "C")
//             st.pop();
//         else if(operations[i] == "D")
//             st.push(2 * st.top());
//         else if(operations[i] == "+"){
//             int num1 = st.top();
//             st.pop();
//             int num2 = st.top();
//             st.pop();

//             st.push(num2);
//             st.push(num1);
//             st.push(num1 + num2);
//         }
//         else{
//             st.push(stoi(operations[i]));
//         }
//     }

//     while(!st.empty()){
//         score += st.top();
//         st.pop();
//     }

//     return score;
// }