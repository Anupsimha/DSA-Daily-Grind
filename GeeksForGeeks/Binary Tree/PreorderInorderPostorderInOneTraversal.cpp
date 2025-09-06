// vector<vector<int> > treeTraversal(TreeNode* root){
//     vector<vector<int>> ans;

//     vector<int> preorder;
//     vector<int> inorder;
//     vector<int> postorder;

//     stack<pair<TreeNode* , int>> s;
//     s.push({root , 1});

//     while(!s.empty()){
//         pair<TreeNode* , int>& p = s.top();

//         if(p.second == 1){
//             p.second++;
//             preorder.push_back(p.first->data);
//             if(p.first->left){
//                 s.push({p.first->left , 1});
//             }
//         } 
//         else if (p.second == 2){
//             p.second++;
//             inorder.push_back(p.first->data);
//             if(p.first->right){
//                 s.push({p.first->right , 1});
//             }
//         }
//         else{
//             postorder.push_back(p.first->data);
//             s.pop();
//         }
//     }

//     ans.push_back(inorder);
//     ans.push_back(preorder);
//     ans.push_back(postorder);

//     return ans;
// }