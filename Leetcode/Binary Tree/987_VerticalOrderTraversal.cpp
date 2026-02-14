// vector<vector<int>> verticalTraversal(TreeNode* root) {
//     vector<vector<int>> ans;
//
//     map<int , map<int , vector<int>>> nodes;
//     queue<pair<TreeNode* , pair<int , int>>> q;
//
//     if(!root)   return ans;
//
//     q.push(make_pair(root , make_pair(0 , 0)));
//
//     while(!q.empty()){
//         pair<TreeNode* , pair<int , int>> temp = q.front();
//         q.pop();
//         TreeNode* frontNode = temp.first;
//         int hd = temp.second.first;
//         int lvl = temp.second.second;
// 
//         nodes[hd][lvl].push_back(frontNode->val);
//
//         if(frontNode->left)
//             q.push(make_pair(frontNode->left , make_pair(hd - 1 , lvl + 1)));
//         if(frontNode->right)
//             q.push(make_pair(frontNode->right , make_pair(hd + 1 , lvl + 1)));
//     }
//
//     for (auto& [hd, levelMap] : nodes) {
//         vector<int> col;
//         for (auto& [lvl, values] : levelMap) {
//             sort(values.begin(), values.end());
//             col.insert(col.end(), values.begin(), values.end());
//         }
//         ans.push_back(col);
//     }
//
//     return ans;
// }
//