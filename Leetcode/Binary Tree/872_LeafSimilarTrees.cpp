// void storeLeaf(TreeNode* root , string &s){
//     if(!root)   return ;
//
//     storeLeaf(root->left , s);
//     storeLeaf(root->right , s);
//
//     if(!root->left && !root->right)
//         s += root->val + '_';
// }

// bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//     string s1 = "" , s2 = "";
//
//     storeLeaf(root1 , s1);
//     storeLeaf(root2 , s2);
//
//     if(s1 == s2)
//         return true;
//
//     return false;
// }