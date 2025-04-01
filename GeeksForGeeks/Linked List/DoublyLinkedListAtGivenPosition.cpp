// Node *addNode(Node *head, int pos, int data) {
//     if(pos == 0){
//         Node* newNode = new Node(data);
//         newNode->next = head;
//         if (head != nullptr) {
//             head->prev = newNode;
//         }
//         return newNode;
//     }
//    
//     Node* temp = head;
//     int count = 0;
//    
//     while(count < pos && temp->next != nullptr) {
//         temp = temp->next;
//         count++;
//     }
//    
//     Node* newNode = new Node(data);
//     newNode->next = temp->next;
//     if (temp->next != nullptr) {
//         temp->next->prev = newNode;
//     }
//     temp->next = newNode;
//     newNode->prev = temp;
//    
//     return head;
// }