// void dfs(TreeNode* &root , int& totalSum){
//     if(!root)   return ;
//
//     dfs(root->right , totalSum);
//
//     totalSum += root->val;
//     root->val = totalSum;
//
//     dfs(root->left , totalSum);
// }
//
// TreeNode* convertBST(TreeNode* root) {
//     int totalSum = 0;
//
//     dfs(root , totalSum);
//
//     return root;
// }