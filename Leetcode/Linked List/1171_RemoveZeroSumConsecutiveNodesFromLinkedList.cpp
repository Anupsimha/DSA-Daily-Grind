// ListNode* removeZeroSumSublists(ListNode* head) {
//     ListNode* dummy = new ListNode(-1);
//     dummy->next = head;

//     unordered_map<int , ListNode*> mp;
//     mp[0] = dummy;

//     int prefixSum = 0;
//     while(head){
//         prefixSum += head->val;

//         if(mp.find(prefixSum) != mp.end()){
//             ListNode* start = mp[prefixSum];
//             ListNode* temp = start;
//             int pSum = prefixSum;

//             while(temp != head){
//                 temp = temp->next;
//                 pSum += temp->val;

//                 if(temp != head)
//                     mp.erase(pSum);
//             }

//             start->next = head->next;
//         }
//         else
//             mp[prefixSum] = head;

//         head = head->next;
//     }

//     return dummy->next;
// }