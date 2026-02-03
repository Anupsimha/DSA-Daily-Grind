//My approach : Using stack
// Time Complexity : O(n)

// vector<int> leaders(vector<int>& arr) {
//     int n = arr.size();
//    
//     vector<int> ans;
//     stack<int> s;
//     for(int i = n - 1 ; i >= 0 ; i--){
//         if(!s.size()){
//             s.push(arr[i]);
//             ans.push_back(s.top());
//         }
//        
//         else if(s.size() && arr[i] >= s.top()){
//             s.pop();
//             s.push(arr[i]);
//             ans.push_back(s.top());
//         }
//     }
//    
//     reverse(ans.begin() , ans.end());
//    
//     return ans;
// }



// Approach 2 : Using O(1) space
//
// vector<int> leaders(vector<int>& arr) {
//     int n = arr.size();
//    
//     vector<int> ans;
//     int max = arr[n - 1];
//     ans.push_back(max);
//    
//     for(int i = n - 2 ; i >= 0 ; i--){
//         if(arr[i] >= max){
//             max = arr[i];
//             ans.push_back(max);
//         }
//     }
//    
//     reverse(ans.begin() , ans.end());
//    
//     return ans;
// }