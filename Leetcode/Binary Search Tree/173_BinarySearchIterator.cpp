// Approach : Using stack

// class BSTIterator {
// private: 
//     stack<TreeNode*> st;

//     void pushNode(TreeNode* root){
//         TreeNode* node = root;
//         while(node){
//             st.push(node);
//             node = node->left;
//         }
//     }

// public:
//     BSTIterator(TreeNode* root) {
//         pushNode(root);
//     }
    
//     int next() {
//         TreeNode* temp = st.top();
//         st.pop();
//         pushNode(temp->right);
//         return temp->val;
//     }
    
//     bool hasNext() {
//         return !st.empty();
//     }
// };




// Appraoch : Using parent pointers and HashMap

// class BSTIterator {
// public: 
//     map<TreeNode*, TreeNode*> parent;  // Store parent pointers
//     TreeNode* curr;    

//     BSTIterator(TreeNode* root) {
//         curr = root;
//         parent[root] = NULL;

//         // Go to the leftmost (smallest) node
//         while (curr->left) {
//             parent[curr->left] = curr;
//             curr = curr->left;
//         }
//     }
    
//     int next() {
//         TreeNode* nextNode = curr;

//         // Case 1: If there's a right subtree, go to its leftmost node
//         if (curr->right) {
//             TreeNode* temp = curr->right;
//             parent[temp] = curr;
//             while (temp->left) {
//                 parent[temp->left] = temp;
//                 temp = temp->left;
//             }
//             curr = temp;
//         }
//         // Case 2: No right child, move up until we come from left
//         else {
//             TreeNode* child = curr;
//             TreeNode* p = parent[child];
//             while (p && p->right == child) {
//                 child = p;
//                 p = parent[p];
//             }
//             curr = p;  // Move to parent or NULL if end
//         }

//         return nextNode->val;    
//     }
    
//     bool hasNext() {
//         return curr != nullptr;
//     }
// };