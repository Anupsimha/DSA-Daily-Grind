// int solve(TreeNode* root , string temp){
//     if(!root)   return 0;

//     if(!root->left && !root->right){
//         temp += to_string(root->val);
//         return stoi(temp , 0 , 2);
//     }

//     temp += to_string(root->val);

//     int left = solve(root->left , temp);
//     int right = solve(root->right , temp);

//     return left + right;
// }

// int sumRootToLeaf(TreeNode* root) {
//     string temp = "";
//     return solve(root , temp);
// }





// int sumRootToLeaf(TreeNode* root) {
//     if(root==NULL) return 0;
//     if(root->left==NULL && root->right==NULL) return root->val;
//     if(root->left){
//         root->left->val = root->val*2 + root->left->val;
//     }
//     if(root->right){
//         root->right->val = root->val*2 + root->right->val;
//     }
//     return sumRootToLeaf(root->left) + sumRootToLeaf(root->right);
// }