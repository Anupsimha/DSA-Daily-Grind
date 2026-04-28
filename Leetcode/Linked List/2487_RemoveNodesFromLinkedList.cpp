// ListNode* removeNodes(ListNode* head) {
//     stack<ListNode*> st;
//     ListNode* temp = head;

//     while(temp){
//         while(!st.empty() && st.top()->val < temp->val){
//             st.pop();
//         }

//         st.push(temp);
//         temp = temp->next;
//     }

//     ListNode* next = NULL;
//     while(!st.empty()){
//         temp = st.top();
//         st.pop();
//         temp->next = next;
//         next = temp;
//     }
    
//     return temp;
// }