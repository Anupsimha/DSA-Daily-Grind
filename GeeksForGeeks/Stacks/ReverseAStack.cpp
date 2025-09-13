// void insertAtBottom(int x , stack<int>& st){
//     if(st.empty()){
//         st.push(x);
//         return ;
//     }
    
//     int temp = st.top();
//     st.pop();
//     insertAtBottom(x , st);
//     st.push(temp);
// }

// void reverse(stack<int> &st) {
//     if(st.empty())
//         return ;
        
//     int x = st.top();
//     st.pop();
//     reverse(st);
//     insertAtBottom(x , st);
// }