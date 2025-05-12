//Approach : Reservoir Sampling

// ListNode* Head;

// Solution(ListNode* head) {
//     Head = head;
// }

// int getRandom() {
//     ListNode* temp = Head;
    
//     int count = 1;
//     int result = 0;

//     while(temp){
//         if(rand() % count < 1.0 / count){
//             result = temp->val;
//         }

//         count++;
//         temp = temp->next;
//     }

//     return result;
// }



//Approach : Using An additional Array

// vector<int> arr;

// Solution(ListNode* head) {
//     ListNode* temp = head;

//     while(temp){
//         arr.push_back(temp->val);
//         temp = temp->next;
//     }
// }

// int getRandom() {
//     int n = arr.size();

//     int random_index = rand() % n;

//     return arr[random_index];
// }