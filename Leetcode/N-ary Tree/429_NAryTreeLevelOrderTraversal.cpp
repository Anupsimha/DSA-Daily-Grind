// vector<vector<int>> levelOrder(Node* root) {
//     vector<vector<int>> res;

//     if(!root)   return res;

//     queue<Node*> q;
//     q.push(root);

//     while(!q.empty()){
//         int size = q.size();
//         vector<int> sublevel;

//         for(int i = 0 ; i < size ; i++){
//             Node* curr = q.front();
//             q.pop();

//             sublevel.push_back(curr->val);

//             for(auto child : curr->children){
//                 q.push(child);
//             }
//         }

//         res.push_back(sublevel);
//     }

//     return res;
// }