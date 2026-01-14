// struct Node {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val) : data(val), left(NULL), right(NULL) {}
// };
//
// // Function to print cousins of a given node k
// void printCousins(Node* root, int k) {
//     if (!root || root->data == k) {
//         cout << -1;
//         return;
//     }

//     queue<Node*> q;
//     q.push(root);

//     bool foundParent = false; // marks when we find the parent level

//     while (!q.empty()) {
//         int size = q.size();

//         // Temporary queue for next level
//         vector<Node*> nextLevel;

//         while (size--) {
//             Node* curr = q.front();
//             q.pop();

//             // Check if current node is the parent of k
//             if ((curr->left && curr->left->data == k) ||
//                 (curr->right && curr->right->data == k)) {
//                 foundParent = true;  // next level contains cousins
//             } else {
//                 // Push children normally
//                 if (curr->left) nextLevel.push_back(curr->left);
//                 if (curr->right) nextLevel.push_back(curr->right);
//             }
//         }

//         // If parent found → nextLevel contains cousins
//         if (foundParent) {
//             if (nextLevel.empty()) {
//                 cout << -1;
//             } else {
//                 for (Node* c : nextLevel)
//                     cout << c->data << " ";
//             }
//             return;
//         }

//         // Move nextLevel children into queue
//         for (Node* child : nextLevel) q.push(child);
//     }

//     // If node not found
//     cout << -1;
// }