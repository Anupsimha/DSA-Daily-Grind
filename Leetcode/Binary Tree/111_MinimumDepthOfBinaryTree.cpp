// int minDepth(TreeNode* root) {
//     if(!root)
//         return 0;
//
//     if(!root->left && !root->right)
//         return 1;
//
//     if(!root->left)
//         return 1 + minDepth(root->right);
//
//     if(!root->right)
//         return 1 + minDepth(root->left);
//
//     int leftDep = minDepth(root->left);
//     int rightDep = minDepth(root->right);
//
//     return 1 + min(leftDep , rightDep);
// }