// Approach 1 : Using Recursion 

// int MOD = 1e9 + 7;

// int solve(int zerosLeft , int onesLeft , bool lastWasOne , int limit){
//     if(zerosLeft == 0 && onesLeft == 0)
//         return 1;

//     int result = 0;
//     if(lastWasOne){
//         for(int len = 1 ; len <= min(zerosLeft , limit) ; len++){
//             result = (result + solve(zerosLeft - len , onesLeft , false , limit)) % MOD;
//         }
//     }
//     else{
//         for(int len = 1 ; len <= min(onesLeft , limit) ; len++){
//             result = (result + solve(zerosLeft , onesLeft - len , true , limit)) % MOD;
//         }
//     }

//     return result;
// }

// int numberOfStableArrays(int zero, int one, int limit) {
//     int startWithZero = solve(zero , one , true , limit);
//     int startWithOne = solve(zero , one , false , limit);

//     return (startWithZero + startWithOne) % MOD;
// }





// Approach 2 : Using Recursion + Memoization

// int MOD = 1e9 + 7;
// int t[201][201][2];

// int solve(int zerosLeft , int onesLeft , bool lastWasOne , int limit){
//     if(zerosLeft == 0 && onesLeft == 0)
//         return 1;

//     if(t[zerosLeft][onesLeft][lastWasOne] != -1)
//         return t[zerosLeft][onesLeft][lastWasOne];

//     int result = 0;
//     if(lastWasOne){
//         for(int len = 1 ; len <= min(zerosLeft , limit) ; len++){
//             result = (result + solve(zerosLeft - len , onesLeft , false , limit)) % MOD;
//         }
//     }
//     else{
//         for(int len = 1 ; len <= min(onesLeft , limit) ; len++){
//             result = (result + solve(zerosLeft , onesLeft - len , true , limit)) % MOD;
//         }
//     }

//     return t[zerosLeft][onesLeft][lastWasOne] = result;
// }

// int numberOfStableArrays(int zero, int one, int limit) {
//     memset(t , -1 , sizeof(t));

//     int startWithZero = solve(zero , one , true , limit);
//     int startWithOne = solve(zero , one , false , limit);

//     return (startWithZero + startWithOne) % MOD;
// }