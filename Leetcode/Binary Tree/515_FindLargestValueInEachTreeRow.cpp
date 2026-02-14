// Using BFS
// Time Complexity : O(N)
// Space Complexity : O(W) , W = Max Width of the Tree
//
// vector<int> largestValues(TreeNode* root) {
//     if(!root)
//         return {};
//
//     vector<int> res;
//     queue<TreeNode*> q;
//     q.push(root);
//
//     while(!q.empty()){
//         int size = q.size();
//         int num = INT_MIN;
//
//         for(int i = 0 ; i < size ; i++){
//             TreeNode* node = q.front();
//             num = max(num , node->val);
//             q.pop();
//
//             if(node->left)
//                 q.push(node->left);
//
//             if(node->right)
//                 q.push(node->right);
//         }
//         res.push_back(num);
//     }
//    
//     return res;
// }





// Using DFS
// Time Complexity : O(N)
// Space Complexity : O(H) , H = Height of the Tree

// void solveDFS(TreeNode* root , vector<int>& res , int depth){
//     if(!root)
//         return ;

//     if(res.size() == depth)
//         res.push_back(root->val);
//     else
//         res[depth] = max(res[depth] , root->val);

//     // Left call
//     solveDFS(root->left , res , depth + 1);

//     // right call
//     solveDFS(root->right , res , depth + 1);
// }

// vector<int> largestValues(TreeNode* root) {
//     if(!root)
//         return {};

//     vector<int> res;

//     solveDFS(root , res , 0);
    
//     return res;
// }