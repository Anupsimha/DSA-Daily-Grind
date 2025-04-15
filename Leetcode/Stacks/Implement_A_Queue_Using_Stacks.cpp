// class MyQueue {
//     public:
//         stack<int> s;
//         MyQueue() {
            
//         }
        
//         void push(int x) {
//             if(s.empty()){
//                 s.push(x);
//                 return ;
//             }
    
//             int topEle = s.top();
//             s.pop();
//             push(x);
//             s.push(topEle);
//         }
        
//         int pop() {
//             int ans = s.top();
//             s.pop();
//             return ans;
//         }
        
//         int peek() {
//             return s.top();
//         }
        
//         bool empty() {
//             if(s.size() == 0)
//                 return true;
//             return false;
//         }
// };