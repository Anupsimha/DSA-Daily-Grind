// TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
//     if(!root1 && !root2)
//         return NULL;

//     if(root1 && root2)
//         root1->val = root1->val + root2->val;
//     else if(!root1 && root2)
//         root1 = new TreeNode(root2->val);

//     root1->left = mergeTrees(root1->left , root2 ? root2->left : NULL);    
//     root1->right = mergeTrees(root1->right , root2 ? root2->right : NULL);  

//     return root1;  
// }