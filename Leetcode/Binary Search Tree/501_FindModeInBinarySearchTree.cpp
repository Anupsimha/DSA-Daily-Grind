// Approach : Using Hashmaps

// vector<int> findMode(TreeNode* root) {
//     vector<int> res;

//     if(!root)   return res;

//     unordered_map<int , int> mp;
//     queue<TreeNode*> q;
//     q.push(root);
//     int maximumNode = INT_MIN;
    
//     while(!q.empty()){
//         int n = q.size();

//         for(int i = 0 ; i < n ; i++){
//             TreeNode* curr = q.front();
//             q.pop();

//             mp[curr->val]++;
//             maximumNode = max(maximumNode , mp[curr->val]);

//             if(curr->left)  q.push(curr->left);
//             if(curr->right) q.push(curr->right);
//         }
//     }

//     for(auto it : mp){
//         if(it.second == maximumNode)    res.push_back(it.first);
//     }        

//     return res;
// }





// Approach 2 : Using Inorder Traversal

// int currNum = 0 , currFreq = 0 , maxFreq = 0;
// vector<int> result;

// void dfs(TreeNode* root){
//     if(!root)   return ;

//     dfs(root->left);

//     if(root->val == currNum){
//         currFreq++;
//     }
//     else{
//         currNum = root->val;
//         currFreq = 1;
//     }

//     if(currFreq > maxFreq){
//         result = {};
//         maxFreq = currFreq;
//     }

//     if(currFreq == maxFreq){
//         result.push_back(root->val);
//     }

//     dfs(root->right);
// }

// vector<int> findMode(TreeNode* root) {
//     dfs(root);
    
//     return result;
// }