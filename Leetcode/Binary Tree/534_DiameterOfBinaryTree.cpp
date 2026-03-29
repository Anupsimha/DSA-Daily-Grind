// int maxLen;
// int diameter(TreeNode* root) {
//     if(root == nullptr) return 0;
//     if(root->left == nullptr && root->right == nullptr) return 1;
//     int l = diameter(root->left);
//     int r = diameter(root->right);
//     maxLen = max(maxLen, l + r);
//     return 1 + max(l, r);
// }
//
// int diameterOfBinaryTree(TreeNode* root) {
//     maxLen = 0;
//     diameter(root);
//     return maxLen;
// }