// pair<int , bool> checkSum(Node* root){
//     if(!root)
//         return {0 , true};
        
//     if(!root->left && !root->right)
//         return {root->data , true};
        
//     pair<int , bool> left = checkSum(root->left);
//     pair<int , bool> right = checkSum(root->right);
    
//     if(left.first + right.first == root->data && left.second && right.second)
//         return {root->data , true};
        
//     return {root->data , false};
// }

// int isSumProperty(Node *root) {
//     pair<int , bool> ans = checkSum(root);
    
//     return ans.second;
// }



// Approach 2 : Most optimal

// int isSumProperty(Node *root) {
//     if (root == NULL || (root->left == NULL && root->right == NULL)) {
//         return true;
//     }

//     int leftVal = (root->left ? root->left->data : 0);
//     int rightVal = (root->right ? root->right->data : 0);

//     if (root->data == leftVal + rightVal && isSumProperty(root->left) && isSumProperty(root->right)) {
//         return true;
//     }
//     return false;
// }