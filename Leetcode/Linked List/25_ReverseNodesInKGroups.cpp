// ListNode* reverseNodes(ListNode* start , ListNode* end){
//     ListNode* curr = start;
//     ListNode* prev = NULL;
//     while(curr != end){
//         ListNode* temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//     } 
//     return prev;
// }
//
// ListNode* reverseKGroup(ListNode* head, int k) {
//     ListNode* temp = head;
//     int count = 0;
//     while(temp && count < k){
//         temp = temp->next;
//         count++;
//     }
//
//     if(count < k)   return head;
//
//     ListNode* newHead = reverseNodes(head , temp);
//
//     head->next = reverseKGroup(temp , k);
//
//     return newHead;
// }