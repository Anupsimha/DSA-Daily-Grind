// Approach : Using middle elemeent Calculation

// TreeNode* solve(ListNode* head , int st , int e){
//     if(st > e)  return NULL;

//     TreeNode* root = NULL;
//     ListNode* temp = head;

//     int mid = st + (e - st)/2;
//     int cnt = 0;
//     while(cnt < mid){
//         temp = temp->next;
//         cnt++;
//     }

//     root = new TreeNode(temp->val);

//     root->left = solve(head , st , mid - 1);
//     root->right = solve(head , mid + 1 , e);

//     return root;
// }

// TreeNode* sortedListToBST(ListNode* head) {
//     if(!head)    return NULL;

//     int cnt = 0;
//     ListNode* temp = head;
//     while(temp){
//         cnt++;
//         temp = temp->next;
//     }

//     return solve(head , 0 , cnt - 1);
// }



// Approach : Using hare and tortoise method

// TreeNode* sortedListToBST(ListNode* head) {
//     if(!head)    return NULL;

//     if(!head->next)  return new TreeNode(head->val);

//     ListNode* slow = head;
//     ListNode* fast = head;
//     ListNode* slow_prev = NULL;

//     while(fast && fast->next){
//         slow_prev = slow;
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     TreeNode* root = new TreeNode(slow->val);
//     slow_prev->next = NULL;

//     root->left = sortedListToBST(head);
//     root->right = sortedListToBST(slow->next);

//     return root;
// }




// Approach : Using Inorder traversal and DFS

// void dfs(TreeNode* h, ListNode* &head) {
//     if (!h)
//         return;
//     dfs(h->left, head);
//     h->val = head->val;
//     head = head->next;
//     dfs(h->right, head);
// }

// TreeNode* sortedListToBST(ListNode* head) {
//     if (!head)
//         return NULL;

//     int n = 0;
//     ListNode* temp = head;

//     while (temp != NULL) {
//         temp = temp->next;
//         n++;
//     }

//     TreeNode* root = new TreeNode();
//     queue<TreeNode*> q;
//     q.push(root);
//     n--;

//     while (n > 0) {
//         int s = q.size();
//         for (int i = 0; i < s; i++) {
//             TreeNode* curr = q.front();
//             q.pop();

//             if (n > 0) {
//                 curr->left = new TreeNode();
//                 q.push(curr->left);
//                 n--;
//             }
//             if (n > 0) {
//                 curr->right = new TreeNode();
//                 q.push(curr->right);
//                 n--;
//             }
//         }
//     }

//     dfs(root, head);
//     return root;
// }