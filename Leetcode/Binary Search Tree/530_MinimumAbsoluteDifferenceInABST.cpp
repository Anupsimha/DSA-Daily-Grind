// void solveDFS(TreeNode* root , TreeNode*& prev , int& ans){
//     if(!root)
//         return;

//     solveDFS(root->left , prev , ans);

//     if(prev)
//         ans = min(ans , root->val - prev->val);
//     prev = root;

//     solveDFS(root->right , prev , ans);
// }

// int getMinimumDifference(TreeNode* root) {
//     TreeNode* prev = NULL;
//     int ans = INT_MAX;

//     solveDFS(root , prev , ans);
    
//     return ans;
// }