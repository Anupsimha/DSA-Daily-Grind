// int solve(TreeNode* root , int& totalTilt){
//     if(!root)   return 0;

//     if(!root->left && !root->right){
//         return root->val;
//     }

//     int left = solve(root->left , totalTilt);
//     int right = solve(root->right , totalTilt);

//     totalTilt += abs(left - right);

//     return left + right + root->val;
// }

// int findTilt(TreeNode* root) {
//     if(!root)   return 0;

//     int totalTilt = 0;
//     solve(root , totalTilt);

//     return totalTilt;
// }