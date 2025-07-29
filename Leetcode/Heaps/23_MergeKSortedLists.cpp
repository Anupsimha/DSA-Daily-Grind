// ListNode* mergeKLists(vector<ListNode*>& lists) {
//     int n = lists.size();
    
//     priority_queue<int , vector<int> , greater<int>> pq;

//     for(int i = 0 ; i < n ; i++){
//         ListNode* head = lists[i];
//         ListNode* temp = head;
//         while(temp){
//             pq.push(temp->val);
//             temp = temp->next;
//         }
//     }

//     ListNode* dummy = new ListNode(-1);
//     ListNode* temp = dummy;

//     while(!pq.empty()){
//         temp->next = new ListNode(pq.top());
//         pq.pop();
//         temp = temp->next;
//     }

//     return dummy->next;
// }