// TreeNode* curr = new TreeNode(-1);

// void solve(TreeNode* node){
//     if(!node)   return ;

//     solve(node->left);

//     node->left = NULL;
//     curr->right = node;
//     curr = node;

//     solve(node->right);
// }

// TreeNode* increasingBST(TreeNode* root) {
//     TreeNode* dummy = curr;

//     solve(root);

//     return dummy->right;
// }