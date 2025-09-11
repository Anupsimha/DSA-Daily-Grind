// Approach : Using Recursion

// void insertSorted(int x , stack<int> &s) {
//     if(s.empty() || s.top() <= x) {
//         s.push(x);
//         return;
//     }

//     // Otherwise pop the top, insert x in correct place, then push top back
//     int temp = s.top();
//     s.pop();
//     insertSorted(x , s);
//     s.push(temp);
// }


// void SortedStack ::sort() {
//     if(s.empty()) return;

//     // Pop top element
//     int x = s.top();
//     s.pop();

//     // Sort remaining stack
//     sort();

//     // Insert popped element at correct position
//     insertSorted(x , s);
// }





// Approach : Using Extra Space
// Time Complexity : O(N log N)

// void SortedStack ::sort() {
//     vector<int> sorted;
    
//     while(!s.empty()){
//         sorted.push_back(s.top());
//         s.pop();
//     }
    
//     std::sort(sorted.begin() , sorted.end());
    
//     for(int i = 0 ; i < sorted.size() ; i++){
//         s.push(sorted[i]);
//     }
// }


