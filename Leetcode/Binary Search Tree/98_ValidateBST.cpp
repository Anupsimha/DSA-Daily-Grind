// bool isValid(TreeNode* root , long min , long max){
//     if(!root)   return true;
//
//     if (root->val >= max || root->val <= min) return false;
//
//     return isValid(root->left , min , root->val) && isValid(root->right , root->val , max);
// }
//
// bool isValidBST(TreeNode* root) {
//     long min = LONG_MIN , max = LONG_MAX;
//     return isValid(root , min , max);
// }