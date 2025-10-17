// TreeNode* addOneRow(TreeNode* root, int val, int depth) {
//     if(depth == 1){
//         TreeNode* curr = new TreeNode(val);
//         curr->left = root;
//         return curr;
//     }

//     queue<TreeNode*> q;
//     q.push(root);
//     for(int d = 2 ; d < depth ; d++){
//         for(int i = q.size() ; i > 0 ; i--){    // The value of i in the for loop does not change automatically when the queue size changes.
//             TreeNode* node = q.front();         // the expression q.size() is evaluated only once at the start of the loop. That value
//             q.pop();                            // is stored in i, and then the loop runs exactly that many times, regardless of how
//             if(node->left)                      // many new elements get added to the queue during the loop.
//                 q.push(node->left);
//             if(node->right)
//                 q.push(node->right);
//         }
//     }

//     while(!q.empty()){
//         TreeNode* node = q.front();
//         q.pop();
//         TreeNode* l = new TreeNode(val);
//         TreeNode* r = new TreeNode(val);
//         l->left = node->left;
//         r->right = node->right;
//         node->left = l;
//         node->right = r;
//     }

//     return root;
// }