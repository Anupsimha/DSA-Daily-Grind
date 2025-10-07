// ListNode* deleteDuplicates(ListNode* head) {
//     if(!head || !head->next)
//         return head;

//     ListNode* prev = head;
//     ListNode* curr = head->next;

//     while(curr){
//         if(prev->val != curr->val)
//             prev = curr;
//         else
//             prev->next = curr->next;

//         curr = curr->next;
//     }

//     return head;
// }