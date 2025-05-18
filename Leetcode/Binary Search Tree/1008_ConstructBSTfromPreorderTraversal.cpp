// TreeNode* build(vector<int>& preorder , int& i , int upper){
//     if(i == preorder.size() || preorder[i] > upper) return NULL;

//     TreeNode* root = new TreeNode(preorder[i++]);
//     root->left = build(preorder , i , root->val);
//     root->right = build(preorder , i , upper);

//     return root;
// }

// TreeNode* bstFromPreorder(vector<int>& preorder) {
//     int i = 0;
//     return build(preorder , i , INT_MAX);
// }