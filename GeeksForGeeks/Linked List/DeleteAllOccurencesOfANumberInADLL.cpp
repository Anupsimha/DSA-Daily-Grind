// void deleteAllOccurOfX(struct Node** head_ref, int x) {
        
//     Node* curr = *head_ref;
    
//     while(curr){
//         if(curr->data == x){
//             Node* toDelete = curr;
            
//             if(curr->prev) curr->prev->next = curr->next;
//             else    *head_ref = curr->next;
            
//             if(curr->next) curr->next->prev = curr->prev;
            
            
//             curr = curr->next;
            
//             delete toDelete;
//         }
//         else{
//             curr = curr->next;
//         }
//     }
    
// }