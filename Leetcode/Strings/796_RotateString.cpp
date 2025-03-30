//Approach 1 - Brute Force

// bool rotateString(string s, string goal) {
//     int n = s.length();
//
//     if(s == goal)   return true;
//
//     int count = 1;
//  
//     while(count < n){
//         string temp = s;
//
//         for(int i = 0 ; i < n ; i++){
//             temp[(i + count) % n] = s[i];
//         }
//
//         if(temp == goal)    return true;
//
//         count++;
//     }
//
//     return false;
// }



//Aproach 2 - Optimal Solution

// bool rotateString(string s, string goal) {
//      
//     return (s.length() == goal.length()) && ((s + s).find(goal) != string::npos);
//
// }