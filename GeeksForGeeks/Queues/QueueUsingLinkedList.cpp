// class Node {
//   public:
//     int data;
//     Node* next;

//     Node(int new_data) {
//         data = new_data;
//         next = nullptr;
//     }
// };

// class myQueue {

//   private:
//     Node* dummy;
//     Node* front;
//     Node* temp;

//   public:
  
//     myQueue() {
//         // Initialize your data members
//         dummy = new Node(-1);
//         temp = NULL;
//         front = NULL;
//     }

//     bool isEmpty() {
//         // check if the queue is empty
//         return dummy->next == nullptr;
//     }

//     void enqueue(int x) {
//         // Adds an element x at the rear of the queue
//         if(isEmpty()){
//             dummy->next = new Node(x);
//             front = dummy->next;
//             temp = dummy->next;
//         }
//         else{
//             temp->next = new Node(x);
//             temp = temp->next;
//         }
//     }

//     void dequeue() {
//         // Removes the front element of the queue
//         if (isEmpty()) return; // nothing to remove
    
//         Node* oldFront = front;
//         front = front->next;
//         dummy->next = front;
    
//         if (front == nullptr) { // queue became empty
//             temp = nullptr;
//         }
    
//         delete oldFront;
//     }

//     int getFront() {
//         // Returns the front element of the queue
//         // If queue is empty, return -1
//         if(isEmpty())
//             return -1;
            
//         return front->data;
//     }

//     int size() {
//         // Returns the current size of the queue.
//         int cnt = 0;
//         Node* sizeNode = front;
    
//         while (sizeNode != nullptr) {
//             cnt++;
//             sizeNode = sizeNode->next;
//         }
//         return cnt;
//     }
// };