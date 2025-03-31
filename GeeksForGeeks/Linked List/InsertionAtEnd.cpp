// Node *insertAtEnd(Node *head, int x) {
//     Node* nodeToInsert = new Node(x);
//    
//     if(head == NULL)    return nodeToInsert;
//    
//     Node* tail = head;
//     while(tail->next != NULL){
//         tail = tail->next;
//     }
//    
//     tail->next = nodeToInsert;
//    
//     return head;
// }