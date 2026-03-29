// int solve(TreeNode* root , bool isLeft){
//     if(!root)   return 0;
//
//     if(!root->left && !root->right && isLeft) return root->val;
//
//     int left = solve(root->left , true);
//     int right = solve(root->right , false);
//
//     return left + right;
// }
//
// int sumOfLeftLeaves(TreeNode* root) {
//     return solve(root , false);
// }