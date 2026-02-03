// ListNode* deleteMiddle(ListNode* head) {
//     if (head == NULL || head->next == NULL) {
//         return NULL;
//     }
//
//     ListNode* prev = NULL;
//     ListNode* slow = head;
//     ListNode* fast = head;
//
//     while(fast && fast->next){
//         prev = slow;
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//
//     if(prev) prev->next = slow->next;
//     delete slow;
//
//     return head;
// }
//