//Most optimal approach
//
// int maxDepth(TreeNode* root) {
//     if(!root)   return 0;
//
//     int left_depth = maxDepth(root->left);
//     int right_depth = maxDepth(root->right);
//
//     return max(left_depth , right_depth) + 1;
// }



//My Approach 

// int maxDepth(TreeNode* root) {
//     vector<vector<int>> binaryTree;
//
//     if(!root)   return 0;
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
//         binaryTree.push_back(level);
//     }
//
//     return binaryTree.size();
// }