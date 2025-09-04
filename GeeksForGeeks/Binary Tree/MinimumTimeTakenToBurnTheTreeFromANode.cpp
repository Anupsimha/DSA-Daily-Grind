// unordered_map<Node* , Node*> parent;

// void inorderTraversal(Node* root){
//     if(!root)
//         return ;
        
//     if(root->left)  parent[root->left] = root;
//     inorderTraversal(root->left);
//     if(root->right) parent[root->right] = root;
//     inorderTraversal(root->right);
// }

// Node* findTarget(Node* root , int target){
//     if(!root)
//         return NULL;
        
//     if(root->data == target)
//         return root;
        
//     Node* left = findTarget(root->left , target);
//     Node* right = findTarget(root->right , target);
    
//     if(left)
//         return left;
        
//     return right;
// }

// void BFS(Node* root, int target , int &timer){
//     unordered_set<int> visited;
//     queue<Node*> q;
    
//     Node* start = findTarget(root , target);
    
//     q.push(start);
//     visited.insert(start->data);
    
//     while(!q.empty()){
//         int n = q.size();
        
//         while(n--){
//             Node* curr = q.front();
//             q.pop();
            
//             if(curr->left && !visited.count(curr->left->data)){
//                 q.push(curr->left);
//                 visited.insert(curr->left->data);
//             }
            
//             if(curr->right && !visited.count(curr->right->data)){
//                 q.push(curr->right);
//                 visited.insert(curr->right->data);
//             }
            
//             if(parent.count(curr) && !visited.count(parent[curr]->data)){
//                 q.push(parent[curr]);
//                 visited.insert(parent[curr]->data);
//             }
//         }
        
//         if(!q.empty())  timer++;
//     }
// }

// int minTime(Node* root, int target) {
//     int timer = 0;
    
//     inorderTraversal(root);
    
//     BFS(root , target , timer);
    
//     return timer;
// }