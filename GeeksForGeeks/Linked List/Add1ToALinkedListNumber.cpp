// Node* reverse(Node* head){
//     Node* curr = head;
//     Node* prev = NULL;
    
//     while(curr){
//         Node* temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//     }
    
//     return prev;
// }

// Node* addOne(Node* head) {
//     Node* rev = reverse(head);
    
//     Node* temp = rev;
//     int carry = 1;
    
//     while(carry && temp){
//         temp->data += carry;
//         carry = temp->data / 10;
//         temp->data %= 10;
        
//         if(!temp->next && carry){
//             temp->next = new Node(0);   
//         }
        
//         temp = temp->next;
//     }
    
//     return reverse(rev);
// }