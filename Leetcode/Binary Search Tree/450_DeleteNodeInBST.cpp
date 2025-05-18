// TreeNode* minVal(TreeNode* root){
//     if(!root->left)
//         return root;

//     return minVal(root->left);
// }

// TreeNode* deleteNode(TreeNode* root, int key) {
//     if(!root)
//         return root;

//     if(root->val == key){
//         if(!root->left && !root->right){
//             delete root;
//             return NULL;
//         }
//         if(root->left && !root->right){
//             TreeNode* temp = root->left;
//             delete root;
//             return temp;
//         }
//         if(!root->left && root->right){
//             TreeNode* temp = root->right;
//             delete root;
//             return temp;
//         }
//         if(root->left && root->right){
//             int mini = minVal(root->right)->val;
//             root->val = mini;
//             root->right = deleteNode(root->right , mini);
//             return root;
//         }
//     }
//     else if(root->val > key){
//         root->left = deleteNode(root->left , key);
//         return root;
//     }
//     else{
//         root->right = deleteNode(root->right , key);
//         return root;
//     }

//     return root;
// }