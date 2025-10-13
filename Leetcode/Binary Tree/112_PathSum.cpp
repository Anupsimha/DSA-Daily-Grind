// bool pathSum(TreeNode* root, int targetSum , int sum){
//     if (!root) return false; 

//     if(!root->left && !root->right)
//         return sum + root->val == targetSum;

//     bool left = false;
//     bool right = false;

//     if(root->left)
//         left = pathSum(root->left , targetSum , sum + root->val);
//     if(root->right)
//         right = pathSum(root->right , targetSum , sum + root->val);

//     if(left || right)
//         return true;

//     return false;
// }

// bool hasPathSum(TreeNode* root, int targetSum) {
//     return pathSum(root , targetSum , 0);
// }