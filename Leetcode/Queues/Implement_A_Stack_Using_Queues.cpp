// class MyStack {
//     public:
//         queue<int> q;
//         MyStack() { 
            
//         }
        
//         void push(int x) {
//             int size = q.size();
//             q.push(x);
//             for(int i = 0 ; i < size ; i++){
//                 q.push(q.front());
//                 q.pop();
//             }
//         }
        
//         int pop() {
//             int n = q.front();
//             q.pop();
//             return n;
//         }
        
//         int top() {
//             return q.front();
//         }
        
//         bool empty() {
//             if(q.size() == 0)
//                 return true;
//             return false;;
//         }
// };