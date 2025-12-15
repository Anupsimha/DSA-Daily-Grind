// int heightBT(TreeNode* root){
//     if(!root)   return 0;
//
//     int left = heightBT(root->left);
//     if(left == -1)  return -1;
//
//     int right = heightBT(root->right);
//     if(right == -1) return -1;
//
//     if(abs(left - right) > 1)   return -1;
//
//     return max(left , right) + 1;
// }
//
// bool isBalanced(TreeNode* root) {
//     return heightBT(root) != -1;
// }