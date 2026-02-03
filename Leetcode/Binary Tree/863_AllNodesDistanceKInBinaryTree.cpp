// unordered_map<TreeNode* , TreeNode*> parent;
//
// void inOrderTraversal(TreeNode* root){
//     if(!root)
//         return ;
//
//     if(root->left)  parent[root->left] = root;
//     inOrderTraversal(root->left);
//     if(root->right) parent[root->right] = root;
//     inOrderTraversal(root->right);
// }
//
// void BFS(TreeNode* target, int k , vector<int>& res){
//     queue<TreeNode*> que;
//     que.push(target);
//
//     unordered_set<int> visited;
//     visited.insert(target->val);
//
//     while(!que.empty()){
//         int n = que.size();
//
//         if(k == 0)
//             break;
//
//         while(n--){
//             TreeNode* curr = que.front();
//             que.pop();
//
//             //left
//             if(curr->left && !visited.count(curr->left->val)){
//                 que.push(curr->left);
//                 visited.insert(curr->left->val);
//             }
//
//             // Right Child
//             if(curr->right && !visited.count(curr->right->val)){
//                 que.push(curr->right);
//                 visited.insert(curr->right->val);
//             }
//
//             // Parent
//             if(parent.count(curr) && !visited.count(parent[curr]->val)){
//                 que.push(parent[curr]);
//                 visited.insert(parent[curr]->val);
//             }
//         }
//         k--;
//     }
//
//     while(!que.empty()){
//         TreeNode* temp = que.front();
//         que.pop();
//         res.push_back(temp->val);
//     }
// }

// vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
//     vector<int> res;
//
//     inOrderTraversal(root);
//
//     BFS(target , k , res);
//
//     return res;
// }