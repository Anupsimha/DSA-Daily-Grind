// Approach : Using Inorder Traversal(But without using map)

// void inorder(TreeNode* root, int &cnt , int k , int &kSmallest){
//     if(!root || cnt >= k)   return ;
//
//     inorder(root->left , cnt , k , kSmallest);
//
//     cnt++;
//
//     if(cnt == k){
//         kSmallest = root->val;
//         return ;
//     }
//
//     inorder(root->right , cnt , k , kSmallest);
// }
//
// int kthSmallest(TreeNode* root, int k) {
//     int cnt = 0;
//     int kSmallest = INT_MAX;
//
//     inorder(root , cnt , k , kSmallest);
//
//     return kSmallest;
// }
//



// Approach : Using Inorder Traversal
// Time Complexity : O(N)

// void findKth(TreeNode* root, int k , map<int , TreeNode*> &m , int &small){
//     if(!root)   return ;
//    
//     if(!root->left){
//         m[++small] = root;
//     }
//
//     findKth(root->left , k , m , small);
//
//     bool isPresent = false;
//     for (const auto& pair : m) {
//         if (pair.second == root) {
//             isPresent = true;
//             break;
//         }
//     }
//
//     if(!isPresent)
//         m[++small] = root;
//
//     findKth(root->right , k , m , small);
// }
//
// int kthSmallest(TreeNode* root, int k) {
//     map<int , TreeNode*> m;
//
//     int smallest = 0;
//     findKth(root , k , m , smallest);
//
//     return m[k]->val;
// }