// vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//     vector<vector<int>> ans;
//
//     if(!root)   return ans;
//
//     queue<TreeNode*> q;
//     q.push(root);
//     bool ltr = true;
//
//     while(!q.empty()){
//         int size = q.size();
//         vector<int> sub(size);
//
//         for(int i = 0 ; i < size ; i++){
//             TreeNode* temp = q.front();
//             q.pop();
//            
//             int index = ltr ? i : (size - i - 1);
//             sub[index] = temp->val;
//
//             if (temp->left) q.push(temp->left);
//             if (temp->right) q.push(temp->right);
//         }
//         ltr = !ltr;
//         ans.push_back(sub);
//     }
//
//     return ans;
// }
//