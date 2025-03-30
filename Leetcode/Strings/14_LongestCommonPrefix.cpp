//Approach I - Brute Force
// Time Complexity - O(n*m) where n is the number of strings and m is the length of the shortest string
// Space Complexity - O(1) as we are using only constant space for the answer

// string longestCommonPrefix(vector<string>& strs) {
//     int n = strs.size();
//    
//     string ans = "";
//
//     for(int i = 0 ; i < strs[0].length() ; i++){
//         char prefix = strs[0][i];
//         bool isPrefix = true;
//         for(int j = 1 ; j < n ; j++){
//             if(prefix != strs[j][i]){
//                 isPrefix = false;
//                 break;
//             }
//         }
//         if(isPrefix)    ans += prefix;
//         else    break;
//     }
//
//     return ans;
// }




// Approach II - Optimal Approach

// string longestCommonPrefix(vector<string>& strs) {
//     sort(strs.begin() , strs.end());
//     int m = strs[0].size();
//     string ans = "";
//
//     for(int i = 0 ; i < m ; i++){
//         if(strs[0][i] == strs.back()[i]){
//             ans.push_back(strs[0][i]);
//         }else{
//             break;
//         }
//     }
//
//     return ans;
// }