// Approach : Using Recursion
// Time Complexity : O(3^(r*2))
// Space Complexity : O(r)

// #include <bits/stdc++.h> 
// vector<int> directions = {-1 , 0 , 1};

// int solve(vector<vector<int>> &grid , int r , int c , int i , int j1 , int j2){
//     if(j1 < 0 || j1 >= c || j2 < 0 || j2 >= c)
//         return -1e6;

//     if(i == r - 1){
//         if(j1 == j2)    return grid[i][j1];
//         else            return grid[i][j1] + grid[i][j2];
//     }

//     int maxi = 0;
//     for(int &d1 : directions){
//         for(int &d2 : directions){
//             int _j1 = j1 + d1;
//             int _j2 = j2 + d2;

//             if(_j1 == _j2)
//                 maxi = max(maxi , grid[i][j1] + solve(grid , r , c , i + 1 , _j1 , _j2));
//             else
//                 maxi = max(maxi , grid[i][j1] + grid[i][j2] + solve(grid , r , c , i + 1 , _j1 , _j2));
//         }
//     }

//     return maxi;
// }

// int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
//     return solve(grid , r , c , 0 , 0 , c - 1);
// }






// Approach : Recursion + Memoization
// Time Complexity : O(r*c*c*9)
// Space Complexity : O(r*c*c) + O(r)

// #include <bits/stdc++.h> 
// vector<int> directions = {-1 , 0 , 1};

// int solve(vector<vector<int>> &grid , vector<vector<vector<int>>>& dp , int r , int c , int i , int j1 , int j2){
//     if(j1 < 0 || j1 >= c || j2 < 0 || j2 >= c)
//         return -1e6;

//     if(dp[i][j1][j2] != -1)
//         return dp[i][j1][j2];

//     if(i == r - 1){
//         if(j1 == j2)    return dp[i][j1][j2] = grid[i][j1];
//         else            return dp[i][j1][j2] = grid[i][j1] + grid[i][j2];
//     }

//     int maxi = -1e6;
//     for(int d1 : directions){
//         for(int d2 : directions){
//             int _j1 = j1 + d1;
//             int _j2 = j2 + d2;

//             if(_j1 == _j2)
//                 maxi = max(maxi , grid[i][j1] + solve(grid , dp , r , c , i + 1 , _j1 , _j2));
//             else
//                 maxi = max(maxi , grid[i][j1] + grid[i][j2] + solve(grid , dp , r , c , i + 1 , _j1 , _j2));
//         }
//     }

//     return dp[i][j1][j2] = maxi;
// }

// int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
//     vector<vector<vector<int>>> dp(
//         r,
//         vector<vector<int>>(c, vector<int>(c, -1))
//     );
    
//     return solve(grid , dp , r , c , 0 , 0 , c - 1);
// }




// Approach : Tabulation