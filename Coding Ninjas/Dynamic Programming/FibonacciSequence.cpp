// Approach : Using Top Down DP - Used Recursion with Memoization
//
// #include<bits/stdc++.h>
// #include <vector>
// using namespace std;
//
// int fibn(int n , vector<int> &dp){
//         // Base Case
//         if(n <= 1)
//                 return n;
//
//         // step 3
//         if(dp[n] != -1)
//                 return dp[n];
//
//         // Step 2
//         dp[n] = fibn(n - 1 , dp) + fibn(n - 2 , dp);
//         return dp[n];
// }
//
// int main()
// {
//     int n;
//     cin>>n;
//
//     vector<int> dp(n + 1);
//     for(int i = 0 ; i <= n ; i++){
//         dp[i] = -1;
//     }    
//
//     cout<<fibn(n , dp)<<endl;
// }
//
//
//
//
// Approach : Using Bottom Up DP (Tabulation)
//
// #include<bits/stdc++.h>
// #include <vector>
// using namespace std;
//
// int main()
// {
//     int n;
//     cin>>n;
//
//     // step 1 :
//     vector<int> dp(n + 1);
//     // step 2;
//     dp[1] = 1;
//     dp[0] = 0;
//
//     //step 3 :
//     for(int i = 2 ; i <= n ; i++){
//             dp[i] = dp[i - 1] + dp[i - 2];
//     }
//
//     cout<<dp[n]<<endl;
// }
//
//
//
// Approach : Optimizing the Space Complexity
//
// #include<bits/stdc++.h>
// #include <vector>
// using namespace std;
//
// int main()
// {
//     int n;
//     cin>>n;
//
//     // step 1 :
//     int prev1 = 1;
//     int prev2 = 0;
//
//     if(n == 0)
//         return prev2;
//
//     //step 3 :
//     for(int i = 2 ; i <= n ; i++){
//         int curr = prev1 + prev2;
//         prev2 = prev1;
//         prev1 = curr;
//     }
//
//     cout<<prev1<<endl;
// }