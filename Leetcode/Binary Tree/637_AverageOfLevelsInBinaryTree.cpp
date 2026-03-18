// vector<double> averageOfLevels(TreeNode* root) {
//     vector<double> res;

//     queue<TreeNode*> q;
//     q.push(root);
//     while(!q.empty()){
//         double sum = 0;
//         int n = q.size();

//         for(int i = 0 ; i < n ; i++){
//             TreeNode* curr = q.front();
//             q.pop();

//             sum += curr->val;

//             if(curr->left)  q.push(curr->left);
//             if(curr->right) q.push(curr->right);
//         }

//         res.push_back(sum / n);
//     }

//     return res;
// }