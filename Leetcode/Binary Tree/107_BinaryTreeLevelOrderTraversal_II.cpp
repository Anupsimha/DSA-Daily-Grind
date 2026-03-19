// Approach : Using BFS + reverse

// vector<vector<int>> levelOrderBottom(TreeNode* root) {
//     if(!root)   return {};

//     vector<vector<int>> res;
//     queue<TreeNode*> q;
//     q.push(root);

//     while(!q.empty()){
//         int n = q.size();
//         vector<int> subLevel;

//         for(int i = 0 ; i < n ; i++){
//             TreeNode* curr = q.front();
//             q.pop();

//             subLevel.push_back(curr->val);

//             if(curr->left)  q.push(curr->left);
//             if(curr->right) q.push(curr->right);
//         }

//         res.push_back(subLevel);
//     }

//     reverse(begin(res) , end(res));
//     return res;
// }






// Approach : Using Queue's and Stack's

// void StoreFromStack(stack<TreeNode*>& s , vector<int>& v , vector<vector<int>>& mtx){
//     while(!s.empty()){
//         TreeNode* temp = s.top();
//         s.pop();

//         if(temp == NULL){
//             if(!v.empty()){
//                 mtx.push_back(v);
//                 v.clear();
//             }
//             continue;
//         }
//         v.push_back(temp->val);
//     }

//     if(!v.empty())
//         mtx.push_back(v);
// }

// void LevelOrderHelp(stack<TreeNode*>& s , queue<TreeNode*>& q)
// {
//     if(q.empty())   return;

//     TreeNode* temp = q.front();
//     q.pop();
//     s.push(temp);

//     if(temp == NULL){
//         if(!q.empty())  q.push(nullptr);
        
//         LevelOrderHelp(s,q);
//         return;
//     }

//     if(temp->right!=nullptr)
//         q.push(temp->right);
//     if(temp->left!=nullptr)
//         q.push(temp->left);

//     LevelOrderHelp(s,q);
// }

// vector<vector<int>> levelOrderBottom(TreeNode* root) {
//     if(root == NULL)
//         return {};

//     stack<TreeNode*> s;
//     queue<TreeNode*> q;
//     q.push(root);
//     q.push(NULL);

//     LevelOrderHelp(s,q);
//     vector<int>v;
    
//     vector<vector<int>>mtx;
//     StoreFromStack(s,v,mtx);

//     return mtx;
// }