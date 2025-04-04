// Node* deleteNode(Node* head, int pos) {
//     if(head == NULL)    return NULL;
//    
//     if(pos == 1){
//         Node* temp = head;
//         head = head->next;
//         head->prev->next = NULL;
//         if(head)    head->prev = NULL;
//         delete temp;
//         return head;
//     }
//    
//     int cnt = 1;
//     Node* curr = head;
//    
//     while(cnt < pos){
//         curr = curr->next;
//         cnt++;
//     }
//    
//     if(!curr)   return head;
//    
//     curr->prev->next = curr->next;
//     if(curr->next)  curr->next->prev = curr->prev;
//    
//     delete curr;
//    
//     return head;
//    
// }