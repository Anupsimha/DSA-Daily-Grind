// class StockSpanner {
// private:
//     stack<pair<int , int>> st;

// public:
//     StockSpanner() {
        
//     }
    
//     int next(int price) {
//         int span = 1;

//         while(!st.empty() && st.top().first <= price){
//             span = st.top().second + span;
//             st.pop();
//         }

//         st.push({price , span});
//         return span;
//     }
// };