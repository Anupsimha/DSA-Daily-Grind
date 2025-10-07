// Optimal Approach Without Extra Space

// ListNode* deleteDuplicates(ListNode* head) {
//     if(!head || !head->next)
//         return head;

//     ListNode* curr = head;
//     ListNode* prev = NULL;

//     while(curr){
//         if(curr->next && curr->val == curr->next->val){
//             int val = curr->val;

//             while(curr && curr->val == val){
//                 curr = curr->next;
//             }

//             if(prev)
//                 prev->next = curr;
//             else
//                 head = curr;
//         }
//         else{
//             prev = curr;
//             curr = curr->next;
//         }
//     }

//     return head;
// }






// Approach Using Ordered Map

// ListNode* deleteDuplicates(ListNode* head) {
//     if(!head || !head->next)
//         return head;

//     map<int , int> mp;

//     ListNode* temp = head;
//     while(temp){
//         mp[temp->val]++;
//         temp = temp->next;
//     }

//     ListNode* dummy = new ListNode(-1);
//     temp = dummy;

//     for(auto &it : mp){
//         if(it.second == 1){
//             temp->next = new ListNode(it.first);
//             temp = temp->next;
//         }
//     }

//     return dummy->next;
// }