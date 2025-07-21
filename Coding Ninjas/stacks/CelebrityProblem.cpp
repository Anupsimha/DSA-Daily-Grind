// int findCelebrity(int n) {
// // Write your code here.
    
// stack<int> st;
// // step1 : push all elements in stack
// for(int i = 0 ; i < n ; i++){
//     st.push(i);
// }

// while(st.size() > 1){
//     int a = st.top();
//     st.pop();
    
//     int b = st.top();
//     st.pop();
    
//     if(knows(a , b)){
//         st.push(b);
//     }
//     else{
//         st.push(a);
//     }
// }
//     //potential candiadate for a celebrity
//     int ans = st.top();

// //celebrity should not know anybody
//     for(int i=0; i<n; i++){
//         if(knows(ans, i)) return -1;
//     }

// //everyone should know celebrity
//     for(int i=0; i<n; i++){
//         if(!knows(i, ans) && i!=ans) return -1;
//     }

//     return ans;
// }