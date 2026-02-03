// vector<vector<int>> levelOrder(TreeNode* root) {
//     vector<vector<int>> ans;
//
//     if(!root)   return ans;
//
//     queue<TreeNode*> q;
//     q.push(root);
//
//     while(!q.empty()){
//         int size = q.size();
//         vector<int> level;
//
//         for(int i = 0 ; i < size ; i++){
//             TreeNode* temp = q.front();
//             q.pop();
//             level.push_back(temp->val);
//             if(temp->left)  q.push(temp->left);
//             if(temp->right)  q.push(temp->right);
//         }
//
//         ans.push_back(level);
//     }
//
//     return ans;
// }
//



//Approach 2 : More Optimized Approach
//
// vector<vector<int>> levelOrder(TreeNode* root) {
//     vector<vector<int>> ans;
//     vector<int> ins;
//
//     if(!root) return ans;
//
//     queue<pair<int,TreeNode*>> qu;
//     qu.push({1,root});
//     int cur = 1;
//
//     while(!qu.empty()){
//         TreeNode* temp = qu.front().second;
//         int curtemp = qu.front().first;
//
//         qu.pop();
//
//         if(curtemp > cur){
//             cur = curtemp;
//             ans.push_back(ins);
//             ins.clear();
//         }
//
//         ins.push_back(temp->val);
//         if(temp->left) qu.push({curtemp+1,temp->left});
//         if(temp->right) qu.push({curtemp+1,temp->right});
//     }
//     ans.push_back(ins);
//     return ans;
// }