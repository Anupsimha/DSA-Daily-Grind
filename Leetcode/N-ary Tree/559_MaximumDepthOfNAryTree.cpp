// int maxDepth(Node* root) {
//     if(!root)   return 0;

//     int maxi = 0;
//     for(Node* child : root->children){
//         maxi = max(maxi , maxDepth(child));
//     }

//     return 1 + maxi;
// }