// class Info{
//     public : 
//         int size;
//         int minVal;
//         int maxVal;
//         bool isBST;
// };

// Info solve(Node* root , int& maxSize){
//     if(!root)
//         return {0 , INT_MAX , INT_MIN , true};
        
//     if(!root->left && !root->right){
//         maxSize = max(maxSize , 1);
//         return {1 , root->data , root->data , true};
//     }
    
//     Info left = solve(root->left , maxSize);
//     Info right = solve(root->right , maxSize);
    
//     Info curr;
//     curr.size = left.size + right.size + 1;
//     curr.minVal = min(root->data , left.minVal);
//     curr.maxVal = max(root->data , right.maxVal);
    
//     if(left.isBST && right.isBST && left.maxVal < root->data && root->data < right.minVal){
//         curr.isBST = true;
//         maxSize = max(maxSize , curr.size);
//     }
//     else{
//         curr.isBST = false;
//     }
    
//     return curr;
// }

// int largestBst(Node *root) {
//     int maxSize = 0;
    
//     solve(root , maxSize);
    
//     return maxSize;
// }