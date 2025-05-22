// Approach : Using Recursion

// bool hasOne(TreeNode* &root){
//     if(!root)
//         return false;

//     bool leftSub = hasOne(root->left);
//     bool rightSub = hasOne(root->right);

//     if(!leftSub)
//         root->left = NULL;
//     if(!rightSub)
//         root->right = NULL;

//     return leftSub || rightSub || (root->val == 1);
// }

// TreeNode* pruneTree(TreeNode* root) {
//     bool check = hasOne(root);

//     if(root->val == 0 && !root->left && !root->right)
//         return NULL;

//     return root;
// }