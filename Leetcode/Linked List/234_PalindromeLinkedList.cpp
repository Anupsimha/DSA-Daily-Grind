//Approach I : Using Reversing the Linked List

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
// bool isPalindrome(ListNode* head) {  
//     ListNode* slow = head;
//     ListNode* fast = head;
//
//     while(fast->next && fast->next->next){
//         slow = slow->next;
//         fast = fast->next->next;
//     }        
//
//     ListNode* secHalf = reverseNode(slow->next);
//
//     ListNode* firstHalf = head;
//     ListNode* secondHalf = secHalf;
//
//     while(secondHalf){
//         if(firstHalf->val != secondHalf->val)   return false;
//         firstHalf = firstHalf->next;
//         secondHalf = secondHalf->next;
//     }
//
//     return true;
// }



//Approach II : Using Stack
// Time Complexity : O(n)
// Space Complexity : O(n)
//
// bool isPalindrome(ListNode* head) {
//     stack<int> st;
//
//     ListNode* temp = head;
//     while(temp){
//         st.push(temp->val);
//         temp = temp->next;
//     }
//
//     temp = head;
//     while(temp){
//         if(st.top() != temp->val)   return false;
//
//         st.pop();
//         temp = temp->next;
//     }
//
//     return true;
// }