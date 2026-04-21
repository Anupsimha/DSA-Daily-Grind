// bool isCousins(TreeNode* root, int x, int y) {
//     queue<TreeNode*> q;
//     q.push(root);
//     bool a = false , b = false;

//     while(!q.empty()){
//         int size = q.size();

//         for(int i = 0 ; i < size ; i++){
//             TreeNode* node = q.front();
//             q.pop();

//             if(node->val == x)  a = true;
//             if(node->val == y)  b = true;

//             if(node->left && node->right){
//                 if((node->left->val == x && node->right->val == y) || (node->left->val == y && node->right->val == x))    return false;
//             }

//             if(node->left)
//                 q.push(node->left);
//             if(node->right)
//                 q.push(node->right);
//         }

//         if(a && b)  return true;
//         if(a || b)  return false;
//     }

//     return false;
// }