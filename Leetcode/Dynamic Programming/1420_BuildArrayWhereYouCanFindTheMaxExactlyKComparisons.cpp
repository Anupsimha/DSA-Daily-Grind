// Approach : Using Recursion with Extra Space
// Time Complexity : O(m^n * n)
// Space Complexity : O(n)

// bool check(vector<int> arr , int k){
//     int maxVal = -1;
//     int cost = 0;

//     for(int x : arr){
//         if(x > maxVal){
//             maxVal = x;
//             cost++;
//         }
//     }
//     return cost == k;
// }

// int solve(int n , int m , int k , vector<int> arr , int pos){
//     if(pos == n){
//         return check(arr, k);
//     }

//     int count = 0;

//     for(int value = 1 ; value <= m ; value++){
//         arr[pos] = value;
//         count += solve(n, m, k, arr, pos + 1);
//     }

//     return count;
// }

// int numOfArrays(int n, int m, int k) {
//     vector<int> arr(n , 0);

//     return solve(n , m , k , arr , 0);
// }


            // or//

// Approach : Using Recursion with Less Space
// Time Complexity : O(m^n * n)
// Space Complexity : O(1)

// int solve(int n , int m , int k , int idx , int searchCost , int maxSoFar){
//     if(idx == n){
//         if(searchCost == k) return 1;
//         else    return 0;
//     }

//     int count = 0;

//     for(int i = 1 ; i <= m ; i++){
//         if(i > maxSoFar)
//             count += solve(n , m , k , idx + 1 , searchCost + 1 , i);
//         else
//             count += solve(n , m , k , idx + 1 , searchCost , maxSoFar);
//     }

//     return count % MOD;
// }

// int numOfArrays(int n, int m, int k) {
//     return solve(n , m , k , 0 , 0 , -1);
// }






// Approach : Recursion + Memoization  -> 3D DP
// Time Complexity : O(n * k * m^2)
// Space Complexity : O(n * k * m) + O(n)  -> DP Array + Recursion Stack

// #define MOD 1000000007

// class Solution {
// public:
//     int t[51][51][101];

//     int solve(int n , int m , int k , int idx , int searchCost , int maxSoFar){
//         if(idx == n){
//             if(searchCost == k) return 1;
//             else    return 0;
//         }

//         if(t[idx][searchCost][maxSoFar] != -1)
//             return t[idx][searchCost][maxSoFar];

//         long long count = 0;

//         for(int i = 1 ; i <= m ; i++){
//             if(i > maxSoFar)
//                 count += solve(n , m , k , idx + 1 , searchCost + 1 , i);
//             else
//                 count += solve(n , m , k , idx + 1 , searchCost , maxSoFar);
//         }

//         return t[idx][searchCost][maxSoFar] = count % MOD;
//     }

//     int numOfArrays(int n, int m, int k) {
//         memset(t , -1 , sizeof(t));

//         return solve(n , m , k , 0 , 0 , 0);
//     }
// };

