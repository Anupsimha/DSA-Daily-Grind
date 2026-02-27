// TreeNode* solve(vector<int>& nums , int st , int e){
//     if(st > e) return NULL;

//     int mid = st + (e - st)/2;
//     TreeNode* root = new TreeNode(nums[mid]);

//     root->left = solve(nums , st , mid - 1);
//     root->right = solve(nums , mid + 1 , e);

//     return root;
// }

// TreeNode* sortedArrayToBST(vector<int>& nums) {
//     int n = nums.size();

//     return solve(nums , 0 , n - 1);;
// }