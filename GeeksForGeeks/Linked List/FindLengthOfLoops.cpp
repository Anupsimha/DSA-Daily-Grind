//Approach I : Using Hashing
// Time Complexity : O(n)
// Space Complexity : O(n)

// int countNodesinLoop(Node *head) {
//        
//     unordered_map<Node* , int> mp;
//    
//     Node* temp = head;
//     int count = 1;
//     while(temp){
//         if(mp.find(temp) != mp.end()){
//             return count - mp[temp];
//         }
//        
//         mp[temp] = count;
//         temp = temp->next;
//         count++;
//     }
//    
//     return 0;
// }



//Approach II : Using Floyd's Cycle Detection Algorithm
// Time Complexity : O(n)
// Space Complexity : O(1)
//
// int findLength(Node* slow , Node* fast){
//   int count = 1;
//    
//     fast = fast->next;
//  
//     while(slow != fast){
//         count++;
//         fast = fast->next;
//     }
//    
//     return count;
// }
//
//
// int countNodesinLoop(Node *head) {
//    
//     Node* slow = head;
//     Node* fast = head;
//    
//     while(fast && fast->next){
//         slow = slow->next;
//         fast = fast->next->next;
//        
//         if(slow == fast)
//             return findLength(slow , fast);
//     }
//    
//     return 0;
// }

