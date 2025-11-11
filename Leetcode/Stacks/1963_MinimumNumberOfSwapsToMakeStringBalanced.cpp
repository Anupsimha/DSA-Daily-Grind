// Approach : Using Stack

// int minSwaps(string s) {
//     stack<char> st;

//     for(char &ch : s){
//         if(ch == '[')   
//             st.push(ch);
//         else if(!st.empty())
//             st.pop();
//     }

//     return (st.size() + 1)/2;
// }





// Optimized Approach : Without Using Stack

// int minSwaps(string s) {
//     int balance=0;
//     int swaps=0;

//     for(auto c: s){
//         if(c=='['){
//             balance++;
//         }else{ //c==']'
//             balance--;
//         }

//         if(balance==-1){
//             swaps++;
//             balance=1;
//         }
//     }

//     return swaps;
// }