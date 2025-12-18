// int findPath(TreeNode* root , int &maxSum){
//     if(!root)   return 0;
//
//     int leftSum = max(0 , findPath(root->left , maxSum));
//     int rightSum = max(0 , findPath(root->right , maxSum));
//
//     maxSum = max(maxSum , root->val + leftSum + rightSum);
//
//     return max(leftSum , rightSum) + root->val;
// }
//
// int maxPathSum(TreeNode* root) {
//     int maxSum = INT_MIN;
//
//     int ans = findPath(root , maxSum);
//
//     return maxSum;
// }