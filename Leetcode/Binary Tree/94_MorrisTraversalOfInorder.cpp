// vector<int> inorderTraversal(TreeNode* root) {
//     vector<int> inorder;
//     TreeNode* curr = root;
//
//     while (curr != NULL) {
//         if (curr->left == NULL) {
//             // If no left child, visit this node
//             inorder.push_back(curr->val);
//             curr = curr->right;
//         } else {
//             // Find inorder predecessor
//             TreeNode* predecessor = curr->left;
//             while (predecessor->right != NULL && predecessor->right != curr) {
//                 predecessor = predecessor->right;
//             }
//
//             // If right link of predecessor is NULL, make it point to curr
//             if (predecessor->right == NULL) {
//                 predecessor->right = curr;
//                 curr = curr->left;
//             } 
//             // If right link already points to curr, revert the change
//             else {
//                 predecessor->right = NULL;
//                 inorder.push_back(curr->val);
//                 curr = curr->right;
//             }
//         }
//     }
//     return inorder;
// }
