// vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
//     vector<vector<int>> matrix(m , vector<int>(n , -1));

//     int top = 0 , bottom = m - 1;
//     int left = 0 , right = n - 1;
//     while(head){
//         for(int i = left ; i <= right && head ; i++){
//             matrix[top][i] = head->val;
//             head = head->next;
//         }
//         top++;

//         for(int i = top ; i <= bottom && head ; i++){
//             matrix[i][right] = head->val;
//             head = head->next;
//         }
//         right--;

//         for(int i = right  ; i >= left && head ; i--){
//             matrix[bottom][i] = head->val;
//             head = head->next;
//         }
//         bottom--;

//         for(int i = bottom ; i >= top && head ; i--){
//             matrix[i][left] = head->val;
//             head = head->next;
//         }
//         left++;
//     }

//     return matrix;
// }