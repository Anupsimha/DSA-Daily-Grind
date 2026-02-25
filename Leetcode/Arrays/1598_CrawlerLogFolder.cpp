// Appraoch : Using stacks

// int minOperations(vector<string>& logs) {
//     int n = logs.size();

//     stack<string> st;

//     for(int i = 0 ; i < n ; i++){
//         if(logs[i] == "./") continue;

//         if(logs[i] == "../"){
//             if(st.empty())  continue;
//             else    st.pop();
//         } 
//         else st.push(logs[i]);
//     }

//     int cnt = 0;
//     while(!st.empty()){
//         cnt++;
//         st.pop();
//     }

//     return cnt;
// }





// Approach : Using variable

// int minOperations(vector<string>& logs) {
//     int count = 0;
//     for(string &s : logs)
//     {
//         if(s == "../") 
//         {
//             if(count != 0)
//                 count -= 1;
//         }
//         else if (s == "./")
//             count += 0;
//         else
//             count ++;
//     }

//     return count;
// }