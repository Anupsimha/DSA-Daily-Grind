// Approach 1 

// class compare{
//     public:
//         bool operator()(Node* a , Node* b){
//             return a->data > b->data;
//         }
// };
//
// Node* mergeKLists(vector<Node*> &listArray){
//     priority_queue<Node*  , vector<Node*> , compare> minHeap;
//     for (Node* listHead : listArray) {
//         if (listHead) {
//             minHeap.push(listHead);
//         }
//     }
//     Node* dummy = new Node(-1); // Dummy node to simplify the merging process
//     Node* tail = dummy; // Pointer to construct the merged linked list
//     while (!minHeap.empty()) {
//         Node* temp = minHeap.top();
//         minHeap.pop();
//         tail->next = temp;
//         tail = temp;
//         if (temp->next != NULL) {
//             minHeap.push(temp->next);
//         }
//     }
//     return dummy->next;
// }




//Approach II

// class compare{
//     public:
//         bool operator()(Node* a , Node* b){
//             return a->data > b->data;
//         }
// };

// Node* mergeKLists(vector<Node*> &listArray){
//     priority_queue<Node*  , vector<Node*> , compare> minHeap;

//     for (Node* listHead : listArray) {
//         if (listHead) {
//             minHeap.push(listHead);
//         }
//     }

//     Node* head = NULL;
//     Node* tail = NULL;

//     while(minHeap.size() > 0){
//         Node* top = minHeap.top();
//         minHeap.pop();

//         if(top->next != NULL)
//             minHeap.push(top->next);

//         if(head == NULL){
//             head = top;
//             tail = top;
//         }
//         else{
//             tail->next = top;
//             tail = top;
//         }
//     }    

//     return head;
// }