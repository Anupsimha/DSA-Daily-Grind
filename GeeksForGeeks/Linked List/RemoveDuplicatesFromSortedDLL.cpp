//Appraoch 1

// Node * removeDuplicates(struct Node *head)
// {
    
//     Node* curr = head;
    
//     while(curr && curr->next){
//         int val = curr->data;
//         curr = curr->next;
//         while(curr && curr->data == val){
//             Node* toDelete = curr;
//             curr->prev->next = curr->next;
//             if(curr->next)  curr->next->prev = curr->prev;
//             curr = curr->next;
            
//             delete toDelete;
//         }
//     }
    
//     return head;
    
// }




//Approach 2

// Node* removeDuplicates(Node* head) {
//     if (!head) return NULL;

//     Node* curr = head;

//     while (curr && curr->next) {
//         if (curr->data == curr->next->data) {
//             Node* toDelete = curr->next;

//             curr->next = toDelete->next;
//             if (toDelete->next) {
//                 toDelete->next->prev = curr;
//             }

//             delete toDelete;
//         } else {
//             curr = curr->next;
//         }
//     }

//     return head;
// }
