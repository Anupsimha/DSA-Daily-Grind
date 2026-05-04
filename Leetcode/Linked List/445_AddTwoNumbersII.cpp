// ListNode* reverse(ListNode* head){
//     if(!head || !head->next) return head;

//     ListNode* prev = NULL;
//     ListNode* curr = head;
//     while(curr){
//         ListNode* temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//     }

//     return prev;
// }

// ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//     l1 = reverse(l1);
//     l2 = reverse(l2);

//     ListNode* dummy = new ListNode(-1);
//     ListNode* temp = dummy;

//     int carry = 0;
//     while(l1 || l2 || carry){
//         int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
//         carry = sum / 10;
        
//         temp->next = new ListNode(sum % 10);
//         temp = temp->next;
//         if(l1)    l1 = l1->next;
//         if(l2)    l2 = l2->next;
//     }

//     return reverse(dummy->next);
// }