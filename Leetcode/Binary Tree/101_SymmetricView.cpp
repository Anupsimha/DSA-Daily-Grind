// bool checkSymmetric(TreeNode* leftHead , TreeNode* rightHead){
//     if(!leftHead && !rightHead)
//         return true;
//
//     if((!leftHead && rightHead) || (leftHead && !rightHead))
//         return false;
//
//     return (leftHead->val == rightHead->val) && checkSymmetric(leftHead->left , rightHead->right) && checkSymmetric(leftHead->right , rightHead->left);
// }
//
// bool isSymmetric(TreeNode* root) {
//     if(!root || (!root->right && !root->left))
//         return true;
//    
//     TreeNode* leftHead = root->left;
//     TreeNode* rightHead = root->right;
//
//     return checkSymmetric(leftHead , rightHead);
// }