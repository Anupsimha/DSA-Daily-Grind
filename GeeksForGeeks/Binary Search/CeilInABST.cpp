// int findCeil(Node* root, int x) {
//     // code here
//     Node* curr = root;
//     int res = -1;
    
//     while(curr){
//         if(curr->data > x){
//             res = curr->data;
//             curr = curr->left;
//         }
//         else if(curr->data < x){
//             curr = curr->right;
//         }
//         else{
//             return curr->data;
//         }
//     }
    
//     return res;
// }