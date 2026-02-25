// Appraoch : Using Recursion

// int n;

// bool solve(string start , string target){
//     if(start == target) return true;

//     bool ans = false;
//     for(int i = 0 ; i < n ; i++){
//         if(start[i] == '_') continue;

//         if(start[i] == 'L' && i > 0 && start[i - 1] == '_'){
//             swap(start[i] , start[i - 1]);
//             ans = ans || solve(start , target);
//         }
//         else if(start[i] == 'R' && i < n - 1 && start[i + 1] == '_'){
//             swap(start[i] , start[i + 1]);
//             ans = ans || solve(start , target);
//         }
//     }

//     return ans;
// }





// Approach : Using Recursion + Memoization

// unordered_set<string> visited;

// bool solve(string start , string target){
//     if(start == target) return true;

//     if(visited.count(start)) return false;
//     visited.insert(start);

//     for(int i = 0 ; i < n ; i++){
//         if(start[i] == '_') continue;

//         if(start[i] == 'L' && i > 0 && start[i - 1] == '_'){
//             swap(start[i] , start[i - 1]);
//             if(solve(start , target)) return true;
//             swap(start[i] , start[i - 1]); // backtrack
//         }
//         else if(start[i] == 'R' && i < n - 1 && start[i + 1] == '_'){
//             swap(start[i] , start[i + 1]);
//             if(solve(start , target)) return true;
//             swap(start[i] , start[i + 1]); // backtrack
//         }
//     }

//     return false;
// }

// bool canChange(string start, string target) {
//     n = start.length();

//     return solve(start , target);
// }





// Approach : Using 2-Pointer's

// bool canChange(string start, string target) {
//     int n = start.length();

//     int i = 0 , j = 0;
//     while(i < n || j < n){

//         while(i < n && start[i] == '_') i++;
//         while(j < n && target[j] == '_') j++;

//         if(i == n || j == n)    return i == n && j == n;

//         if(start[i] != target[j])   return false;

//         if(start[i] == 'L' && i < j)    return false;

//         if(start[i] == 'R' && i > j)    return false;

//         i++;
//         j++;
//     }

//     return true;
// }