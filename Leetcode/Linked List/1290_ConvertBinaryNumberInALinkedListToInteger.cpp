// Approach : Using o(n) Time complexity and o(1) Space Complexity -> Bit Manipulation

// int getDecimalValue(ListNode* head) {
//     int num = 0;
//     while(head){
//         num = (num << 1) | head->val;
//         head = head->next;
//     }

//     return num;
// }




// Approach : Using o(2n) Time complexity and o(1) Space Complexity

// int getDecimalValue(ListNode* head) {
//     int count = 0;
//     ListNode* temp = head;
//     while(temp){
//         count++;
//         temp = temp->next;
//     }

//     temp = head;
//     int sum = 0;
//     while(temp){
//         if(temp->val == 1){
//             sum += pow(2 , count - 1);
//         }

//         count--;
//         temp = temp->next;
//     }

//     return sum;
// }