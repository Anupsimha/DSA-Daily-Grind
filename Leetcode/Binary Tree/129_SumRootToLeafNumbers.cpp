// int solve(TreeNode* root , string num){
//     if(!root)   return 0;
//     if(!root->left && !root->right){
//         num += to_string(root->val);
//         return stoi(num);
//     }

//     num += to_string(root->val);
//     int left = solve(root->left , num);

//     int right = solve(root->right , num);

//     return left + right;
// }

// int sumNumbers(TreeNode* root) {
//     string num = "";

//     return solve(root , num);        
// }