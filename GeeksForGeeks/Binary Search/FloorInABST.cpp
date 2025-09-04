// int floor(Node* root, int x) {
//     // Code here
//     Node* curr = root;
//     int res = -1;
    
//     while(curr){
//         if(curr->data < x){
//             res = curr->data;
//             curr = curr->right;
//         }
//         else if(curr->data > x){
//             curr = curr->left;
//         }
//         else{
//             return curr->data;
//         }
//     }
    
//     return res;
// }