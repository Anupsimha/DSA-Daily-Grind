// vector<int> rightSideView(TreeNode* root) {
//     vector<int> ans;
//     if(!root)
//         return ans;

//     queue<TreeNode*> q;
//     q.push(root);

//     while(!q.empty()){
//         int size = q.size();

//         for(int i = 0 ; i < size ; i++){
//             TreeNode* curr = q.front();
//             q.pop();

//             if(i == size - 1)
//                 ans.push_back(curr->val);

//             if(curr->left)
//                 q.push(curr->left);
//             if(curr->right)
//                 q.push(curr->right);
//         }
//     }

//     return ans;
// }