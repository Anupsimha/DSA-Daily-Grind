// Without Recursion

// Node* reverseList(struct Node* head) {
//     // code here
//     Node* prev = NULL;
//     Node* curr = head;
//     while(curr != NULL){
//         Node* forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
    
//     return prev;
// }



// With Recursion

// Node* reverse(Node*&head,Node*curr,Node*prev){
//     if(curr==NULL)
//     {
//         head=prev;
//         return head;
//     }
//     Node*forward=curr->next;
//     reverse(head,forward,curr);
//     curr->next=prev;
// }

// Node* reverseList(struct Node* head) {
//     // code here
//     Node*curr=head,*prev=NULL;
//     reverse(head,curr,prev);
//     return head;
// }
