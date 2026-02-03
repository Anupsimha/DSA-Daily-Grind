//Approach I : Sorting using Bubble Sort, but , ineffcient due to O(n^2) time complexity

// ListNode* sortList(ListNode* head) {
//     for(ListNode* i = head ; i != NULL ; ){
//         for(ListNode* j = i->next ; j != NULL ; ){
//             if(i->val > j->val){
//                 int temp = i->val;
//                 i->val = j->val;
//                 j->val = temp;
//             }
//             j = j->next;
//         }
//         i = i->next;
//     }

//     return head;
// }



//Approach II : Sorting using Merge Sort, O(nlogn) time complexity
//
// ListNode* findMiddle(ListNode* head){
//     ListNode* slow = head;
//     ListNode* fast = head->next;
//
//     while(fast && fast->next){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//
//     return slow;
// }
//
// ListNode* merge(ListNode* left , ListNode* right){
//     ListNode* dummy = new ListNode(-1);
//     ListNode* temp = dummy;
//
//     while(left && right){
//         if(left->val < right->val){
//             temp->next = left;
//             temp = left;
//             left = left->next;
//         }
//         else{
//             temp->next = right;
//             temp = right;
//             right = right->next;
//         }
//     }
//
//     if(left)    temp->next = left;
//     else    temp->next = right;
//
//     return dummy->next;
// }
//
// ListNode* sortList(ListNode* head) {
//     if(!head || !head->next) return head;
//
//     ListNode* middle = findMiddle(head);
//     ListNode* left = head;
//     ListNode* right = middle->next;
//     middle->next = NULL;
//
//     left = sortList(left);
//     right = sortList(right);
//
//     return merge(left , right);
// }


