// int countNodes(TreeNode* root) {
//     if(!root)
//         return 0;
//
//     int leftNodes = countNodes(root->left);
//     int rightNodes = countNodes(root->right);
//
//     return 1 + leftNodes + rightNodes;
// }