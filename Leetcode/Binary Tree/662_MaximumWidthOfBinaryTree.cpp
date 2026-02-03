// typedef unsigned long long ll;
//
// int widthOfBinaryTree(TreeNode* root) {
//     ll maxWidth = 0;
//
//     queue<pair<TreeNode* , ll>> q;
//     q.push({root , 0});
//
//     while(!q.empty()){
//         ll left = q.front().second;
//         ll right = q.back().second;
//         maxWidth = max(maxWidth , right - left + 1);
//
//         int size = q.size();
//         while(size--){
//             TreeNode* curr = q.front().first;
//             ll idx = q.front().second;
//             q.pop();
//             if(curr->left)
//                 q.push({curr->left , 2 * idx + 1});
//             if(curr->right)
//                 q.push({curr->right , 2 * idx + 2});
//         }
//     }
//
//     return (int)maxWidth;
// }