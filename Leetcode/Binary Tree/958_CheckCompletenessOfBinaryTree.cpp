// Approach : Using BFS

// bool isCompleteTree(TreeNode* root) {
//     queue<TreeNode*> q;
//     q.push(root);
//     bool pastFoundNull = false;

//     while(!q.empty()){
//         int n = q.size();

//         for(int i = 0 ; i < n ; i++){
//             TreeNode* curr = q.front();
//             q.pop();

//             if(pastFoundNull && curr)   return false;

//             if(curr == NULL)    
//                 pastFoundNull = true;

//             if(curr)    q.push(curr->left);
//             if(curr)    q.push(curr->right);
//         }
//     }

//     return true;
// }




// Appraoch : Using DFS

// int countNodes(TreeNode* root){
//     if(!root)   return 0;

//     return 1 + countNodes(root->left) + countNodes(root->right); 
// }

// bool dfs(TreeNode* root , int totalNodes , int i){
//     if(!root)   return true;

//     if(i > totalNodes)  return false;

//     return dfs(root->left , totalNodes , 2 * i) && dfs(root->right , totalNodes , 2 * i + 1);
// }

// bool isCompleteTree(TreeNode* root) {
//     int totalNodes = countNodes(root);

//     return dfs(root , totalNodes , 1);
// }