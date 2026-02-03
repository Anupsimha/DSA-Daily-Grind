// ListNode* swapPairs(ListNode* head) {
//     if(!head || !head->next)
//         return head;
//
//     ListNode* prev = head;
//     ListNode* curr = head->next;
//
//     curr->next = swapPairs(curr->next);
//
//     prev->next = curr->next;
//     curr->next = prev;
//
//     return curr;
// }