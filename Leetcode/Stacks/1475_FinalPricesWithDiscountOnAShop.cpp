// vector<int> finalPrices(vector<int>& prices) {
//     int n = prices.size();

//     vector<int> res(n , 0);
//     stack<int> st;
//     for(int i = n - 1 ; i >= 0 ; i--){
//         while(!st.empty() && prices[i] < st.top()){
//             st.pop();
//         }

//         int discount = st.empty() ? 0 : st.top();
//         res[i] = prices[i] - discount;

//         st.push(prices[i]);
//     }

//     return res;
// }