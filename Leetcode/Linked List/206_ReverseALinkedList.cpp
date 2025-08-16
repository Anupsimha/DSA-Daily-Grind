// ListNode* reverseList(ListNode* head) {
//        
//     ListNode* curr = head;
//     ListNode* temp = NULL;
//
//     while(curr != NULL){
//         ListNode* c = curr->next;
//         curr->next = temp;
//         temp = curr;
//         curr = c;
//     }
//
//     return temp;
// }


//Using Recursion

// ListNode* reverseList(ListNode* head) {
//        
//     if(head == NULL || head->next == NULL)
//         return head;
//    
//     ListNode* reversedList = reverseList(head->next);
//
//     head->next->next = head;
//     head->next = NULL;
//
//     return reversedList;
// }