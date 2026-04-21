// TreeNode* prev = NULL;

// bool isUnivalTree(TreeNode* root) {
//     if(!root)   return true;

//     if(prev && root->val != prev->val)  return false;

//     prev = root;
//     return isUnivalTree(root->left) && isUnivalTree(root->right);
// }