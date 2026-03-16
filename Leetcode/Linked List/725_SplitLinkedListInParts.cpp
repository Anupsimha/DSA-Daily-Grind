// vector<ListNode*> splitListToParts(ListNode* head, int k) {
//     vector<ListNode*> res(k , NULL);

//     if(!head)   return res;

//     ListNode* curr = head;
//     int L = 0;
//     while(curr){
//         L++;
//         curr = curr->next;
//     }

//     int eachBucketNodes = L / k;
//     int extraNodes = L % k;
    
//     curr = head;
//     ListNode* prev = NULL;
//     for(int i = 0 ; i < k ; i++){
//         res[i] = curr;

//         for(int count = 1 ; count <= eachBucketNodes + (extraNodes > 0 ? 1 : 0) ; count++){
//             prev = curr;
//             curr = curr->next;
//         }

//         prev->next = NULL;
//         extraNodes--;
//     }

//     return res;
// }