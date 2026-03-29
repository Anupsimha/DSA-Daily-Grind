// vector<int> preorderTraversal(TreeNode* root) {
//     vector<int> preorder;
//     TreeNode* curr = root;
//
//     while(curr){
//         if(!curr->left){
//             preorder.push_back(curr->val);
//             curr = curr->right;
//         }
//         else{
//             TreeNode* predecessor = curr->left;
//             while(predecessor->right && predecessor->right != curr){
//                 predecessor = predecessor->right;
//             }
//
//             if(!predecessor->right){
//                 preorder.push_back(curr->val);
//                 predecessor->right = curr;
//                 curr = curr->left;
//             }
//             else{
//                 predecessor->right = NULL;
//                 curr = curr->right;
//             }
//         }
//     }
//
//     return preorder;
// }