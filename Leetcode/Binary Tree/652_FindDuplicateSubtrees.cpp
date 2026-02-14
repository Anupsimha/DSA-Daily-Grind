// Time Complexity: O(N)
// Space Complexity: O(N^2) in worst case due to string storage
//
// string solve(TreeNode* root , vector<TreeNode*> &res , unordered_map<string , int> &mp){
//     if(!root){
//         return "N";
//     }
//
//     string s = to_string(root->val) + "," + solve(root->left , res , mp) + "," + solve(root->right , res , mp);
//
//     if(mp[s] == 1)
//         res.push_back(root);
//
//     mp[s]++;
//
//     return s;
// }
//
// vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
//     vector<TreeNode*> res;
//
//     unordered_map<string , int> mp;
//     string str = "";
//
//     solve(root , res , mp);
//
//     return res;
// }
//