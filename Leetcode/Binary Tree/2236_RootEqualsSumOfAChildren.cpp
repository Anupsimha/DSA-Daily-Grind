// bool checkTree(TreeNode* root) {
//     if(!root || (!root->left && !root->right)) return true;

//     bool isSum = (root->val == (root->left ? root->left->val : 0) + (root->right ? root->right->val : 0));

//     return isSum && checkTree(root->left) && checkTree(root->right);
// }