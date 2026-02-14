// Using BFS
//
// bool isEvenOddTree(TreeNode* root) {
//     if (!root) return false;
//
//     queue<TreeNode*> q;
//     q.push(root);
//
//     bool evenLevel = true;
//
//     while(q.size()){
//         int n = q.size();
//         int prev = evenLevel ? INT_MIN : INT_MAX;
//
//         for (int i = 0; i < n; i++) {
//             TreeNode* node = q.front();
//             q.pop();
//
//             int val = node->val;
//
//             if (evenLevel) {
//                 if (val % 2 == 0 || val <= prev) return false;
//             } else {
//                 if (val % 2 == 1 || val >= prev) return false;
//             }
//             prev = val;
//
//             if (node->left) q.push(node->left);
//             if (node->right) q.push(node->right);
//         }
//
//         evenLevel = !evenLevel;
//     }
//    
//     return true;
// }





// Using DFS

// vector<int> levelPrev;

// bool solve(TreeNode* root , int level){
//     if(!root)
//         return true;

//     if(level % 2 == 0 && root->val % 2 == 0)
//         return false;
//     if(level % 2 != 0 && root->val % 2 != 0)
//         return false;

//     // This can be even written as
//     // if(level % 2 == root->val % 2)
//     //     return false;

//     if(level >= levelPrev.size()){
//         levelPrev.resize(level+1);
//     }

//     if(levelPrev[level] != 0){
//         if((level % 2 == 0 && root->val <= levelPrev[level]) || (level % 2 != 0 && root->val >= levelPrev[level]))
//             return false;

//     }

//     levelPrev[level] = root->val;

//     return solve(root->left , level + 1) && solve(root->right , level + 1);
// }

// bool isEvenOddTree(TreeNode* root) {
//     return solve(root , 0);
// }





// Using Hashmaps + Inorder Traversal

// void solve(TreeNode* root , map<int , vector<int>> &mp , int level){
//     if(!root)
//         return ;

//     mp[level].push_back(root->val);

//     solve(root->left , mp , level + 1);

//     solve(root->right , mp , level + 1);
// }

// bool isEvenOddTree(TreeNode* root) {
//     if(root->val % 2 == 0)
//         return false;

//     map<int , vector<int>> mp;

//     solve(root , mp , 0);

//     for(auto &it : mp){
//         if(it.first % 2 == 0){
//             for(int i = 0 ; i < it.second.size() ; i++){
//                 if(it.second[i] % 2 == 0)   return false;
//                 if(i > 0 && it.second[i] <= it.second[i - 1])    return false;
//             }
//         }
//         else{
//             for(int i = 0 ; i < it.second.size() ; i++){
//                 if(it.second[i] % 2 != 0)   return false;
//                 if(i > 0 && it.second[i] >= it.second[i - 1])    return false;
//             }
//         }
//     }

//     return true;
// }