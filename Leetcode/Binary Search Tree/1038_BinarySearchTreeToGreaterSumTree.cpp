// Approach : Using Right Node Left Traversal

// class Solution {
// public:
//     vector<int> inorder;
//     void getInorder(TreeNode* root){
//         if(!root)   return ;
//
//         getInorder(root->left);
//         inorder.push_back(root->val);
//         getInorder(root->right);
//     }
//
//     TreeNode* solve(int s , int e){
//         if(s > e)  return NULL;
//
//         int mid = s + (e - s)/2;
//         TreeNode* node = new TreeNode(inorder[mid]);
//
//         node->left = solve(s , mid - 1);
//         node->right = solve( mid + 1 , e);
//
//         return node;
//     }
//
//     TreeNode* balanceBST(TreeNode* root) {        
//         getInorder(root);
//
//         return solve(0 , inorder.size() - 1);;
//     }
// };
// auto init = []() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     return 'c';
// }();