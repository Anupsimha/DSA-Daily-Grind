// ListNode* rotateRight(ListNode* head, int k) {
//     if(!head || !head->next)   return head;
//
//     //Count Number of Nodes
//     ListNode* temp = head;
//     int n = 1;
//     while(temp->next){
//         temp = temp->next;
//         n++;
//     }   
//
//     //Making the list Circular
//     temp->next = head;
//    
//     int rotations = k % n;
//     //Find the new head
//     temp = head;    
//     int count = 1;
//     while(count < n - rotations){
//         temp = temp->next;
//         count++;
//     }
//
//     //Break the circle and set the new head
//     ListNode* newHead = temp->next;
//     temp->next = NULL;
//    
//     return newHead;
// }
//