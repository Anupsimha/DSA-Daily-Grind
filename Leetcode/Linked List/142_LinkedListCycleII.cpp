//Approach I
//
// ListNode *detectCycle(ListNode *head) {
//        
//     ListNode* slow = head;
//     ListNode* fast = head;
//
//     while(fast && fast->next){
//         slow = slow->next;
//         fast = fast->next->next;
//
//         if(slow == fast)    break;
//     }
//
//     if(!fast || !fast->next)    return NULL;
//
//     fast = head;
//     while(slow != fast){
//         slow = slow->next;
//         fast = fast->next;
//     }
//
//     return slow;
// }



//Approach II

// ListNode *detectCycle(ListNode *head) { 
//     unordered_set<ListNode*> mp;
//
//     while(head){
//         if(mp.find(head) != mp.end()){
//             return head;
//         }
//
//         mp.insert(head);
//         head = head->next;
//     }
//
//     return NULL;
// }