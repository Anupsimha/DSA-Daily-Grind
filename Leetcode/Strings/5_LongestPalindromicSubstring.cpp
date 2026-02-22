// Approach : Recursion with Memoization (Dynamic Programming)

// int t[1001][1001];

// bool solve(string &s , int i , int j){
//     if(i >= j)
//         return 1;

//     if(t[i][j] != -1)
//         return t[i][j];

//     if(s[i] == s[j])
//         return t[i][j] = solve(s , i + 1 , j - 1);

//     return t[i][j] = 0;
// }

// string longestPalindrome(string s) {
//     int n = s.size();

//     memset(t , -1 , sizeof(t));
//     int maxLen = INT_MIN;
//     int sp = 0;

//     for(int i = 0 ; i < n ; i++){
//         for(int j = i ; j < n ; j++){
//             if(solve(s , i , j) && (j - i + 1 > maxLen)){
//                 maxLen = j - i + 1;
//                 sp = i;
//             }
//         }
//     }

//     return s.substr(sp , maxLen);
// }





// Approach : Using two-pointer's approach of expanding from center

// string longestPalindrome(string s) {
//     int n = s.length();

//     int longestLen = 1;
//     string ans = "";

//     ans += s[0];

//     for(int i = 0 ; i < n ; i++){
//         int cnt = 1;
//         int leftSide = i - 1 , rightSide = i + 1;

//         while(rightSide < n && s[i] == s[rightSide]){
//             cnt++;

//             rightSide++;
//             i = rightSide - 1;
//         }

//         while(leftSide >= 0 && rightSide < n && s[leftSide] == s[rightSide]){
//             cnt += 2;

//             leftSide--;
//             rightSide++;
//         }

//         if(cnt > longestLen){
//             longestLen = cnt;
//             ans = s.substr(leftSide + 1 , cnt);
//         }
//     }

//     return ans;
// }