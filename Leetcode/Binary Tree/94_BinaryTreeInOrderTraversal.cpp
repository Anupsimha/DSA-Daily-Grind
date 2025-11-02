// void InOrder(TreeNode* root , vector<int>& ans){
//     if(root == NULL)
//         return ;
//
//     InOrder(root->left , ans);
//     ans.push_back(root->val);
//     InOrder(root->right , ans);
// }
//
// vector<int> inorderTraversal(TreeNode* root) {
//     vector<int> ans;
//     InOrder(root , ans);
//     return ans;
// }





// Approach 2 : Iterative Approach

// vector<int> inorderTraversal(TreeNode* root) {
//     vector<int> inorder;
//     stack<TreeNode*> st;
//     TreeNode* curr = root;
//
//     while(curr || !st.empty()){
//         while(curr){
//             st.push(curr);
//             curr = curr->left;
//         }
//
//         curr = st.top();
//         st.pop();
//         inorder.push_back(curr->val);
//        
//         curr = curr->right;
//     }   
//
//     return inorder;
// }