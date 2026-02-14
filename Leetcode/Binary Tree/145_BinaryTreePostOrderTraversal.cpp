// void PostOrder(TreeNode* root , vector<int>& ans){
//     if(root == NULL)
//         return ;
//
//     PostOrder(root->left , ans);
//     PostOrder(root->right , ans);
//     ans.push_back(root->val);
// }

// vector<int> postorderTraversal(TreeNode* root) {
//     vector<int> ans;
//     PostOrder(root , ans);
//     return ans;
// }



// Approach : Using 1 stack

// vector<int> postorderTraversal(TreeNode* root) {
//     vector<int> postorder;
//     stack<TreeNode*> st;
//     TreeNode* curr = root;   
//     TreeNode* lastVisited = NULL;   

//     while(curr || !st.empty()){
//         if(curr){
//             st.push(curr);
//             curr = curr->left;
//         }
//         else{
//             TreeNode* node = st.top();
//             if(node->right && node->right != lastVisited){
//                 curr = node->right;
//             }
//             else{
//                 postorder.push_back(node->val);
//                 st.pop();
//                 lastVisited = node;
//             }
//         }
//     }

//     return postorder;
// }





// Approach : Using 2 stack's

// vector<int> postorderTraversal(TreeNode* root) {
//     vector<int> postorder;
//     if(!root)   return postorder;

//     stack<TreeNode*> st1 , st2;

//     st1.push(root);

//     while(!st1.empty()){
//         TreeNode* node = st1.top();
//         st1.pop();

//         st2.push(node);

//         if(node->left)  st1.push(node->left);
//         if(node->right) st1.push(node->right);
//     }

//     while(!st2.empty()){
//         TreeNode* node = st2.top();
//         st2.pop();
//         postorder.push_back(node->val);
//     }

//     return postorder;
// }