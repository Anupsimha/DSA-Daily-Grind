// ListNode* insertionSortList(ListNode* head) {
//     ListNode* dummy = new ListNode(-1 , head);
//     ListNode* prev = head;
//     ListNode* curr = head;

//     head = head->next;

//     while(curr){
//         if(curr->val >= prev->val){
//             prev = curr;
//             curr = curr->next;
//             continue;
//         }

//         ListNode* temp = dummy;
//         while(curr->val > temp->next->val){
//             temp = temp->next;
//         }

//         prev->next = curr->next;
//         curr->next = temp->next;
//         temp->next = curr;
//         curr = prev->next;
//     }

//     return dummy->next;
// }