// TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
//     if(!original)   return NULL;

//     if(original == target)
//         return cloned;

//     TreeNode* left = getTargetCopy(original->left , cloned->left , target);
//     TreeNode* right = getTargetCopy(original->right , cloned->right , target);

//     return left == NULL ? right : left;
// }