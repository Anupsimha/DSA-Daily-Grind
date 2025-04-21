//Approach 1: Using reversing the linked list

// ListNode* reverseNode(ListNode* head){
//     ListNode* curr = head;
//     ListNode* temp = NULL;
//
//     while(curr){
//         ListNode* c = curr->next;
//         curr->next = temp;
//         temp = curr;
//         curr = c;
//     }
//
//     return temp;
// }
//
// ListNode* removeNthFromEnd(ListNode* head, int n) {
//     ListNode* rev = reverseNode(head);
//
//     if(n == 1){
//         ListNode* toDelete = rev;
//         rev = rev->next;
//         delete toDelete;
//         return reverseNode(rev);
//     }
//
//     ListNode* curr = rev;
//     ListNode* prev = NULL;
//     int cnt = 1;
//
//     while(cnt < n){
//         prev = curr;
//         curr = curr->next;
//         cnt++;
//     }
//
//     prev->next = curr->next;
//     delete curr;
//
//     return reverseNode(rev);
//    
// }   




//Approach 2: Using two pointers
// Time Complexity: O(L) where L is the length of the linked list
// Space Complexity: O(1)


// ListNode* removeNthFromEnd(ListNode* head, int n) {
//     ListNode* fast = head;
//     ListNode* slow = head;
//
//     for(int i = 0 ; i < n ; i++){
//         fast = fast->next;
//     }
//
//     if(!fast) return head->next;
//
//     while(fast->next){
//         fast = fast->next;
//         slow = slow->next;
//     }
//
//     ListNode* toDelete = slow->next;
//     slow->next = slow->next->next;
//     delete toDelete;
//
//     return head;
// } 