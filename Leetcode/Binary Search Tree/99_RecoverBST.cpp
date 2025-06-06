// Approach : Using Brute Force
// Find the inorder Traversal of the given Tree and then sort it out, then it will be the inorder Traversal of the BST.
// and finally traverse the tree again and replace the values with the sorted inorder Traversal values.
// Time Complexity: O(nlogn + 2n) 

// void getInorderTraversal(TreeNode* root , vector<int> &inOrder){
//     if(!root)
//         return ;

//     getInorderTraversal(root->left , inOrder);
//     inOrder.push_back(root->val);
//     getInorderTraversal(root->right , inOrder);
// }

// void checkTraversal(TreeNode* root , vector<int> &inOrder , int &i){
//     if(!root)
//         return ;

//     checkTraversal(root->left , inOrder , i);
//     if(root->val != inOrder[i])
//         root->val = inOrder[i];
//     i++;
//     checkTraversal(root->right , inOrder , i);
// }

// void recoverTree(TreeNode* root) {
//     vector<int> inOrder;
//     getInorderTraversal(root , inOrder);
//     sort(inOrder.begin() , inOrder.end());

//     int i = 0;
//     checkTraversal(root , inOrder , i);
// }




// Appraoch : Using Inorder Traversal but without using extra space and Sorting

// class Solution {
// private:
//     TreeNode* first;
//     TreeNode* prev;
//     TreeNode* middle;
//     TreeNode* last;

// public:
//     void inOrder(TreeNode* root){
//         if(!root)
//             return ;

//         inOrder(root->left);

//         if(prev && root->val < prev->val){
//             if(!first){
//                 first = prev;
//                 middle = root;
//             }
//             else
//                 last = root;
//         }

//         prev = root;
//         inOrder(root->right);
//     }

//     void recoverTree(TreeNode* root) {
//         first = middle = prev = last = NULL;
//         prev = new TreeNode(INT_MIN);

//         inOrder(root);

//         if(first && last)
//             swap(first->val , last->val);
//         else if(first && middle)
//             swap(first->val , middle->val);
//     }
// };
