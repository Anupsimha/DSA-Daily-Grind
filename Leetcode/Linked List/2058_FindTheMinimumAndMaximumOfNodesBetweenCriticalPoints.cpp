// vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//     ListNode* temp = head;

//     vector<int> st;
//     int cnt = 1;
//     temp = head;
//     ListNode* prev = NULL;
//     while(temp){
//         if(prev && temp->next && ((temp->next->val > temp->val && prev->val > temp->val) || (temp->next->val < temp->val && prev->val < temp->val)))
//             st.push_back(cnt);

//         cnt++;
//         prev = temp;
//         temp = temp->next;
//     }

//     if(st.size() < 2)  return {-1 , -1};

//     int minDist = INT_MAX;
//     int maxDist = st[st.size() - 1] - st[0];
//     for(int i = 1 ; i < st.size() ; i++){
//         minDist = min(minDist , st[i] - st[i - 1]);
//     }

//     return {minDist , maxDist};
// }





// vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//     ListNode* prev = head;
//     ListNode* curr = head->next;
//     int currPos = 1;
//     int prevCriticalPos = 0;
//     int firstCriticalPos = 0;

//     int minDist = INT_MAX;

//     while(curr->next){
//         if((curr->val < prev->val && curr->val < curr->next->val) || (curr->val > prev->val && curr->val > curr->next->val)){
//             if(prevCriticalPos == 0){
//                 prevCriticalPos = currPos;
//                 firstCriticalPos = currPos;
//             }
//             else{
//                 minDist = min(minDist , currPos - prevCriticalPos);
//                 prevCriticalPos = currPos;
//             }
//         }

//         currPos++;
//         prev = curr;
//         curr = curr->next;
//     }

//     if(minDist == INT_MAX)
//         return {-1 , -1};


//     return {minDist , prevCriticalPos - firstCriticalPos};
// }







// vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//     int prevVal = 0;
//     int currVal = 0;
//     int nextVal = 0;

//     int minDist = INT_MAX;
//     int firstCriticalPos = 0;
//     int prevCriticalPos = 0;

//     int i = 0;
//     vector<int> result = {-1 , -1};

//     while(head){
//         prevVal = currVal;
//         currVal = nextVal;
//         nextVal = head->val;

//         if(prevVal && currVal && nextVal && ((prevVal > currVal && currVal < nextVal) || (prevVal < currVal && currVal > nextVal))){
//             if(!firstCriticalPos)
//                 firstCriticalPos = i;
//             else{
//                 minDist = min(minDist , i - prevCriticalPos);
//                 result = {minDist , i - firstCriticalPos};    
//             }

//             prevCriticalPos = i;
//         }

//         i++;
//         head = head->next;
//     }

//     return result;
// }