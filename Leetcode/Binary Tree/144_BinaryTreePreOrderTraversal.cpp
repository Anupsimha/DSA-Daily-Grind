// void PreOrder(TreeNode* root , vector<int> &ans){
//     if(root == NULL){
//         return ;
//     }
//
//     ans.push_back(root->val);
//     PreOrder(root->left , ans);
//     PreOrder(root->right , ans);
// }
//
// vector<int> preorderTraversal(TreeNode* root) {
//     vector<int> ans;
//     PreOrder(root , ans);
//     return ans;  
// }




// Appraoch 2 : Iterative 

// vector<int> preorderTraversal(TreeNode* root) {
//     vector<int> preorder;
//     if (!root) return preorder;

//     stack<TreeNode*> st;
//     st.push(root);

//     while(!st.empty()){
//         TreeNode* temp = st.top();
//         st.pop();

//         preorder.push_back(temp->val);

//         if(temp->right) st.push(temp->right);
//         if(temp->left)  st.push(temp->left);
//     }

//     return preorder;
// }