// vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
// {
//     vector<pair<int , int>> ans;
    
//     Node* left = head;
//     Node* right = head;
//     while(right->next){
//         right = right->next;
//     }
    
    
//     while(left != right && left->prev != right){
//         if(left->data + right->data == target){
//             ans.push_back({left->data , right->data});
//             left = left->next;
//             right = right->prev;
//         }
//         else if(left->data + right->data > target){
//             right = right->prev;
//         }
//         else{
//             left = left->next;
//         }
//     }
    
//     return ans;
// }