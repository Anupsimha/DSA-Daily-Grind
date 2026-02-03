// Approach 1: Reverse the linked list, double each digit, and reverse it back.
//
// ListNode* reverseList(ListNode* head){
//     ListNode* prev = NULL;
//     while(head){
//         ListNode* curr = head->next;
//         head->next = prev;
//         prev = head;
//         head = curr;
//     }
//     return prev;
// }
//
// ListNode* doubleIt(ListNode* head) {    
//     head = reverseList(head);
//
//     ListNode* temp = head;
//     ListNode* dummy = NULL;
//     int carry = 0;
//     while(temp){
//         int sum = temp->val * 2 + carry;
//         carry = sum / 10;
//         temp->val = sum % 10;
//         dummy = temp;
//         temp = temp->next;
//     }
//
//     if(carry){
//         dummy->next = new ListNode(carry);
//     }
//
//     return reverseList(head);
// }




// Approach 2 : Using Recursion
//
// int doubleUtil(ListNode* head){
//     if(!head)
//         return 0;
//
//     int carry = doubleUtil(head->next);
//     int newVal = (head->val * 2) + carry;
//     head->val = newVal % 10;
//
//     return newVal/10;
// }
//
// ListNode* doubleIt(ListNode* head) {
//     int lastCarry = doubleUtil(head);
//
//     if(lastCarry){
//         ListNode* newHead = new ListNode(lastCarry);
//         newHead->next = head;
//         return newHead;
//     }
//
//     return head;
// }




// Approach 3: Using Stack

// ListNode* reverseList(ListNode* head){
//     ListNode* prev = NULL;
//     while(head){
//         ListNode* curr = head->next;
//         head->next = prev;
//         prev = head;
//         head = curr;
//     }
//
//     return prev;
// }
//
// ListNode* doubleIt(ListNode* head) {
//     ListNode* temp = head;
//     stack<int> st;
//
//     while(temp){
//         st.push(temp->val);
//         temp = temp->next;
//     }
//
//     ListNode* dummy = new ListNode(-1);
//     temp = dummy;
//     ListNode* prev = NULL;
//     int carry = 0;
//
//     while(!st.empty() || carry){
//         int val = carry;
//         if (!st.empty()) {
//             val += st.top() * 2;
//             st.pop();
//         }
//         carry = val / 10;
//         temp->next = new ListNode(val % 10);
//         temp = temp->next;
//     }
//
//     return reverseList(dummy->next);
// }




// Approach 4: Using Iteration

// ListNode* doubleIt(ListNode* head) {
//     ListNode* curr = head;
//     int carry = 0;
//
//     if(curr->val >= 5){
//         ListNode* newHead = new ListNode(1);
//         newHead->next = head;
//         head = newHead;
//     }
//
//     while(curr){
//         if(curr->next && curr->next->val >= 5)
//             carry = 1;
//         else
//             carry = 0;
//
//         curr->val = (curr->val * 2) % 10 + carry;
//
//         curr = curr->next;       
//     }
//
//     return head;
// }