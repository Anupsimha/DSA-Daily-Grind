// ListNode* removeElements(ListNode* head, int val) {
//     if(!head)   return head;
//    
//     ListNode* dummy = new ListNode(-1);
//     dummy->next = head;
//
//     ListNode* prev = dummy;
//     while(prev->next){
//         if(prev->next->val == val){
//             ListNode* nodeToDelete = prev->next;
//             prev->next = nodeToDelete->next;
//             delete nodeToDelete;
//         }
//         else{
//             prev = prev->next;
//         }
//     }
//
//     return dummy->next;
// }