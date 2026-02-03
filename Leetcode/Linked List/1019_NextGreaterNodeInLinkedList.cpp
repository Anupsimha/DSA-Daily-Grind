// ListNode* reverseLL(ListNode* head){
//     ListNode* curr = head;
//     ListNode* prev = NULL;
//     while(curr){
//         ListNode* temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//     }
//
//     return prev;
// }
//
// vector<int> nextLargerNodes(ListNode* head) {
//     vector<int> res;
//     stack<int> s;
//
//     ListNode* temp = reverseLL(head);
//
//     while(temp){
//         if(s.empty()){
//             s.push(temp->val);
//             res.push_back(0);
//             temp = temp->next;
//         }
//         else if(s.top() > temp->val){
//             res.push_back(s.top());
//             s.push(temp->val);
//             temp = temp->next;
//         }
//         else{
//             s.pop();
//         }
//     }
//
//     reverse(res.begin() , res.end());
//     return res;
// }