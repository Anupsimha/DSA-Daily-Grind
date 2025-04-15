// class MyStack {
//     private:
//       StackNode *top;
//     public:
//       void push(int x) {
//           StackNode* newNode = new StackNode(x);
//           newNode->next = top;
//           top = newNode;
//       }
  
//       int pop() {
//           if(!top)    return -1;
          
//           int ans = top->data;
//           StackNode* nodeToDel = top;
//           top = top->next;
//           nodeToDel->next = NULL;
//           delete nodeToDel;
          
//           return ans;
//       }
  
//       MyStack() { top = NULL; }
// };