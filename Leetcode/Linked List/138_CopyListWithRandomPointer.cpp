//Approach 1 : Using HashMap

// Node* copyRandomList(Node* head) {
//     unordered_map<Node* , Node*> mp;
    
//     Node* temp = head;
//     while(temp){
//         Node* newNode = new Node(temp->val);
//         mp[temp] = newNode;
//         temp = temp->next;
//     }

//     temp = head;
//     while(temp){
//         Node* copyNode = mp[temp];
//         copyNode->next = mp[temp->next];
//         copyNode->random = mp[temp->random];
//         temp = temp->next;
//     }

//     return mp[head];
// }


//Approach 2 : Using O(1) space

// Node* copyRandomList(Node* head) {
//     Node* temp = head;
//     Node* copyNode;
//     while(temp){
//         Node* copyNode = new Node(temp->val);
//         copyNode->next = temp->next;
//         temp->next = copyNode;
//         temp = temp->next->next;
//     }

//     temp = head;
//     while(temp){
//         copyNode = temp->next;
//         if(temp->random)    copyNode->random = temp->random->next;
//         else    copyNode->random = NULL;
//         temp = temp->next->next;
//     }

//     Node* dummyNode = new Node(-1);
//     Node* res = dummyNode;
//     temp = head;
//     while(temp){
//         res->next = temp->next;
//         temp->next = temp->next->next;
//         res = res->next;
//         temp = temp->next;
//     }

//     return dummyNode->next;
// }