// Approach : Using Recursion

// void solve(Node* root , vector<int>& res){
//     if(!root)   return ;

//     for(Node* node : root->children){
//         solve(node , res);
//     }

//     res.push_back(root->val);
// }

// vector<int> postorder(Node* root) {
//     vector<int> res;

//     solve(root , res);

//     return res;
// }






// Approach : Using Stack

// vector<int> postorder(Node* root) {
//     vector<int> res;

//     if(!root)   return res;

//     stack<Node*> st;
//     st.push(root);
//     while(!st.empty()){
//         Node* curr = st.top();
//         st.pop();

//         res.push_back(curr->val);

//         for(Node* child : curr->children){
//             st.push(child);
//         }
//     }

//     reverse(begin(res) , end(res));

//     return res;
// }