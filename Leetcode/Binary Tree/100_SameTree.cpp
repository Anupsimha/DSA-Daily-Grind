// bool isSameTree(TreeNode* p, TreeNode* q) {
//     if(!p && !q)    return true;
//
//     if((!p && q) || (p && !q))  return false;
//
//     bool leftSub = isSameTree(p->left , q->left);
//     bool rightSub = isSameTree(p->right , q->right);
//
//     return p->val == q->val && leftSub && rightSub;
// }