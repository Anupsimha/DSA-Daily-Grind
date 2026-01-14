// vector<int> bottomView(Node *root) {
//     vector<int> ans;
//     if(!root)
//         return ans;
//        
//     map<int , int> TreeNode;
//     queue<pair<Node* , int>> q;
//     q.push(make_pair(root , 0));
//    
//     while(!q.empty()){
//         pair<Node* , int> temp = q.front();
//         q.pop();
//         int node = temp.first->data;
//         int hd = temp.second;
//        
//         TreeNode[hd] = node;
//        
//         if(temp.first->left)
//             q.push(make_pair(temp.first->left , hd - 1));
//         if(temp.first->right)
//             q.push(make_pair(temp.first->right , hd + 1));
//     }
//    
//     for(auto &it : TreeNode){
//         ans.push_back(it.second);
//     }
//    
//     return ans;
// }