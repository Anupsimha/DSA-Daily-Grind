// Approach : Using recursion

// void solve(Node* root , vector<int>& res){
//     if(!root)    return ;

//     res.push_back(root->val);

//     for(Node* children : root->children){
//         solve(children , res);
//     }
// }

// vector<int> preorder(Node* root) {
//     vector<int> res;

//     solve(root , res);

//     return res;
// }





// Approach : Using stack

// vector<int> preorder(Node* root) {
//     vector<int> res;

//     if(!root)   return res;

//     stack<Node*> st;
//     st.push(root);   
//     while(!st.empty()){
//         Node* curr = st.top();
//         st.pop();

//         res.push_back(curr->val);

//         for(int i = curr->children.size() - 1 ; i >= 0 ; i--){
//             st.push(curr->children[i]);
//         }
//     }     

//     return res;
// }