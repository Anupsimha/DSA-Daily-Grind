// Node* findLast(Node* head){
//     while(head->next){
//         head = head->next;
//     }

//     return head;
// }

// Node* flatten(Node* head) {
//     if(!head)   return NULL;

//     Node* temp = head;
//     while(temp){
//         if(temp->child){
//             Node* toBeNext = flatten(temp->child);
//             Node* subLevelLast = findLast(temp->child);
//             Node* subLevelNext = temp->next;

//             temp->next = temp->child;
//             temp->child->prev = temp;
//             subLevelLast->next = subLevelNext;
//             if(subLevelNext) subLevelNext->prev = subLevelLast;
//             temp->child = NULL;

//             temp = subLevelNext;
//         }
//         else
//             temp = temp->next;
//     }

//     return head;
// }