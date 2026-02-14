// Approach : Using Stacks
//
// vector<string> binaryTreePaths(TreeNode* root) {
//     vector<string> res;
//
//     stack<pair<TreeNode* , string>> st;
//     st.push({root , to_string(root->val)});
//
//     while(!st.empty()){
//         auto [node, path] = st.top();
//         st.pop();
//
//         if (!node->left && !node->right) {
//             res.push_back(path);
//         }
//
//         if (node->right) {
//             st.push({node->right, path + "->" + to_string(node->right->val)});
//         }
//
//         if (node->left) {
//             st.push({node->left, path + "->" + to_string(node->left->val)});
//         }
//     }
//
//     return res;
// }



// Approach : Using Strings

// void solve(TreeNode* root , vector<string>& res , string &output){
//     if (!root)
//         return ;
//
//     int len = output.size();
//
//     output += to_string(root->val);
//
//     if (!root->left && !root->right) {
//         res.push_back(output);
//     } else {
//         output += "->";
//         solve(root->left, res, output);
//         solve(root->right, res, output);
//     }
//
//     output.erase(len);
// }

// vector<string> binaryTreePaths(TreeNode* root) {
//     vector<string> res;
//
//     string output = "";
//     solve(root , res , output);
//
//     return res;
// }