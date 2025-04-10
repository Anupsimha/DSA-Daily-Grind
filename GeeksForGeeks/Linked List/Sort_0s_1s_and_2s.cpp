//Approach 1 : brute force
//Time Complexity : O(2n)
//Space Complexity : O(1)

// Node* segregate(Node* head) {
//     if(!head || !head->next)    return head;
    
//     int cnt = 0 , cnt1 = 0 , cnt2 = 0;
//     Node* temp = head;
//     while(temp){
//         if(temp->data == 0) cnt++;
//         else if(temp->data == 1)    cnt1++;
//         else    cnt2++;
        
//         temp = temp->next;
//     }
    
//     temp = head;
//     while(temp){
//         while(cnt--){
//             temp->data = 0;
//             temp = temp->next;
//         }
//         while(cnt1--){
//             temp->data = 1;
//             temp = temp->next;
//         }
//         while(cnt2--){
//             temp->data = 2;
//             temp = temp->next;
//         }
//     }
    
//     return head;
// }




//Appraoch 2 : using 3 pointers
//Time Complexity : O(n)
//Space Complexity : O(1)

// Node* segregate(Node* head) {
//     if(!head || !head->next)    return head;
    
//     Node* zero = new Node(-1);
//     Node* zeroHead = zero;
//     Node* one = new Node(-1);
//     Node* oneHead = one;
//     Node* two = new Node(-1);
//     Node* twoHead = two;
    
//     Node* temp = head;
//     while(temp){
//         if(temp->data == 0){
//             zero->next = temp;
//             zero = zero->next;
//         }     
//         else if(temp->data == 1){
//             one->next = temp;
//             one = one->next;
//         }    
//         else{
//             two->next = temp;
//             two = two->next;
//         }    
        
//         temp = temp->next;
//     }
    
//     zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
//     one->next = twoHead->next;
//     two->next = NULL;
    
//     head = zeroHead->next;
    
//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;
    
//     return head;
// }