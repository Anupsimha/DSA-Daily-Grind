// ListNode* partition(ListNode* head, int x) {
//     ListNode* small = new ListNode(-1);
//     ListNode* large = new ListNode(-1);
//
//     ListNode* smallP = small;
//     ListNode* largeP = large;
//
//     ListNode* temp = head;
//     while(temp){
//         if(temp->val < x){
//             smallP->next = temp;
//             smallP = smallP->next;
//         }else{
//             largeP->next = temp;
//             largeP = largeP->next;
//         }
//
//         temp = temp->next;
//     }
//
//     largeP->next = NULL;
//     smallP->next = large->next;
//     return small->next;
// }