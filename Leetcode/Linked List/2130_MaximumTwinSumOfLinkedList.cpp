// Appraoch : Using Reverse Linked List into Two Halves

// ListNode* reverseLL(ListNode* head){
//     ListNode* curr = head;
//     ListNode* prev = NULL;
//     while(curr){
//         ListNode* temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//     }

//     return prev;
// }

// int pairSum(ListNode* head) {
//     ListNode* slow = head;
//     ListNode* fast = head;

//     while(fast && fast->next){
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     ListNode* firstHalf = head;
//     ListNode* secondHalf = reverseLL(slow);

//     int maxTwin = 0;
//     while(secondHalf){
//         maxTwin = max(maxTwin , firstHalf->val + secondHalf->val);
//         firstHalf = firstHalf->next;
//         secondHalf = secondHalf->next;
//     }

//     return maxTwin;
// }






