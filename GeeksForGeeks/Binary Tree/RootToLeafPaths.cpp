// void findRootNodePath(Node* root , vector<vector<int>> &ans , vector<int> &temp){
//     if(!root) return;

//     temp.push_back(root->data);

//     // Leaf node case
//     if(!root->left && !root->right) {
//         ans.push_back(temp);
//     } else {
//         findRootNodePath(root->left , ans , temp);
//         findRootNodePath(root->right , ans , temp);
//     }

//     // backtrack
//     temp.pop_back();
// }

// vector<vector<int>> Paths(Node* root) {
//     vector<vector<int>> ans;
//     if(!root)
//         return ans;
        
//     vector<int> temp;
//     findRootNodePath(root , ans , temp);
    
//     return ans;
// }