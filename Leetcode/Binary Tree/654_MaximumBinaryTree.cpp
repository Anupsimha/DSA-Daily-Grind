// int n;
//
// TreeNode* solve(vector<int>& nums , int st , int e){
//     if(st > e)  return NULL;
//
//     int rootNum = INT_MIN;
//     int idx = -1;
//     for(int i = st ; i <= e ; i++){
//         if(rootNum < nums[i]){
//             rootNum = nums[i];
//             idx = i;
//         }
//     }
//
//     TreeNode* root = new TreeNode(rootNum);
//
//     root->left = solve(nums , st , idx - 1);
//     root->right = solve(nums , idx + 1 , e);
//
//     return root;
// }
//
// TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
//     n = nums.size();
//
//     return solve(nums , 0 , n - 1);
// }