// void findInorder(TreeNode* root , vector<int> &arr){
//     if(!root)
//         return ;
//
//     findInorder(root->left , arr);
//     arr.push_back(root->val);
//     findInorder(root->right , arr);
// }
//
// int minDiffInBST(TreeNode* root) {
//     int minDiff = INT_MAX;
//
//     vector<int> arr;
//     findInorder(root , arr);
//
//     for(int i = 1 ; i < arr.size() ; i++){
//         minDiff = min(minDiff , arr[i] - arr[i - 1]);
//     }
//
//     return minDiff;
// }


                            // or //

// void solve(TreeNode* root , int& minDiff , TreeNode*& prev){
//     if(!root){
//         return ;
//     }

//     solve(root->left , minDiff , prev);

//     if(prev){
//         minDiff = min(minDiff , root->val - prev->val);
//     }
//     prev = root;

//     solve(root->right , minDiff , prev);
// }

// int minDiffInBST(TreeNode* root) {
//     int minDiff = INT_MAX;
//     TreeNode* prev = NULL;

//     solve(root , minDiff , prev);

//     return minDiff;
// }