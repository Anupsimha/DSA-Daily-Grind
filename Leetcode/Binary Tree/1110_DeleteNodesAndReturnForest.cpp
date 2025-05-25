// TreeNode* deleteNode(TreeNode* &root , unordered_set<int> &st , vector<TreeNode*> &ans){
//     if(!root)
//         return NULL;

//     root->left = deleteNode(root->left , st , ans);
//     root->right = deleteNode(root->right , st , ans);

//     if(st.find(root->val) != st.end()){
//         if(root->left)
//             ans.push_back(root->left);
//         if(root->right)
//             ans.push_back(root->right);

//         return NULL;
//     }
//     else
//         return root;

// }

// vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
//     vector<TreeNode*> ans;
//     unordered_set<int> st;

//     for(int i = 0 ; i < to_delete.size() ; i++){
//         st.insert(to_delete[i]);
//     }

//     TreeNode* temp = deleteNode(root , st , ans);

//     if(st.find(root->val) == st.end())
//         ans.push_back(root);

//     return ans;
// }