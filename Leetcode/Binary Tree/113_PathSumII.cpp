// vector<vector<int>> res;
//
// void  pathSumRecur(TreeNode* root, int targetSum , vector<int> &output , int sum){
//     if(!root)
//         return ;
//
//     output.push_back(root->val); 
//     sum += root->val;
//
//     if (!root->left && !root->right) {
//         if (sum == targetSum)
//             res.push_back(output);
//     } else {
//         pathSumRecur(root->left, targetSum, output, sum);
//         pathSumRecur(root->right, targetSum, output, sum);
//     }
//
//     output.pop_back();
// }
///
// vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//     vector<int> output;
//
//     pathSumRecur(root , targetSum , output , 0);
//
//     return res;
// }
//