// class BSTIterator{
//     stack<TreeNode*> st;
//     bool reverse = true;

//     void pushNode(TreeNode* root){
//         while(root){
//             st.push(root);
//             if(reverse) root = root->right;
//             else    root = root->left;
//         }
//     }

// public:
//     BSTIterator(TreeNode* root , bool isReverse){
//         reverse = isReverse;
//         pushNode(root);
//     }

//     bool hasnext(){
//         return !st.empty();
//     }

//     int next(){
//         TreeNode* temp = st.top();
//         st.pop();
//         if(!reverse)    pushNode(temp->right);
//         else    pushNode(temp->left);
//         return temp->val;
//     }
// };

// class Solution {
// public:
//     bool findTarget(TreeNode* root, int k) {
//         if(!root)   return false;
//         BSTIterator l(root , false);
//         BSTIterator r(root , true);

//         int i = l.next();
//         int j = r.next();
//         while(i < j){
//             if(i + j == k)  return true;
//             else if(i + j < k)  i = l.next();
//             else j = r.next();
//         }

//         return false;
//     }
// };