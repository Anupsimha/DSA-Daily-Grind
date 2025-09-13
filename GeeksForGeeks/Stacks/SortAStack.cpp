// void sortPosition(int x , stack<int>& st){
//     if(st.empty() || st.top() <= x){
//         st.push(x);
//         return ;
//     }
    
//     int temp = st.top();
//     st.pop();
//     sortPosition(x , st);
//     st.push(temp);
// }

// void sort(stack<int> &st) {
//     if(st.empty())
//         return ;
        
//     int x = st.top();
//     st.pop();
//     sort(st);
//     sortPosition(x , st);
// }