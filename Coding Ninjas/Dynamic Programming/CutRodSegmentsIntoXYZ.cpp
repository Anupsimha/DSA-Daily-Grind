// Approach : Recursion

// #include <limits.h>
//
// int solve(int n, int x, int y, int z){
// 	// Base Case
// 	if(n == 0)
// 		return 0;
//
// 	if(n < 0)
// 		return INT_MIN;
//
// 	int a = solve(n - x , x , y , z) + 1;       // + 1 because we made a cut here .i.e we included a segemts of length x
// 	int b = solve(n - y , x , y , z) + 1;       // + 1 because we made a cut here .ie we included a segemts of length y
// 	int c = solve(n - z  , x , y , z) + 1;      // + 1 because we made a cut here .ie we included a segemts of length z
//
// 	int ans = max(a , max(b , c));
// 	return ans;
// }
//
//
// int cutSegments(int n, int x, int y, int z) {
// 	int ans = solve(n , x , y , z);
//
// 	if(ans < 0)
// 		return 0;
//
// 	return ans;
// }




// Approach : Recursion + Memoization

// #include <limits.h>
//
// int solveMemo(int n, int x, int y, int z , vector<int> &dp){
// 	// Base Case
// 	if(n == 0)
// 		return 0;
//
// 	if(n < 0)
// 		return INT_MIN;
//
// 	if(dp[n] != -1)
// 		return dp[n];
//
// 	int a = solveMemo(n - x , x , y , z , dp) + 1;
// 	int b = solveMemo(n - y , x , y , z , dp) + 1;
// 	int c = solveMemo(n - z , x , y , z , dp) + 1;
//
// 	dp[n] = max(a , max(b , c));
// 	return dp[n];
// }
//
//
// int cutSegments(int n, int x, int y, int z) {
// 	vector<int> dp(n + 1  , -1);
//
// 	int ans = solveMemo(n , x , y , z , dp);
//
// 	if(ans < 0)
// 		return 0;
//
// 	return ans;
// }




// Approach : Tabulation

// #include <limits.h>
//
// int solveTab(int n, int x, int y, int z){
// 	vector<int> dp(n + 1 , INT_MIN);
// 	dp[0] = 0;
//
// 	for(int i = 1 ; i <= n ; i++){
// 		if(i - x >= 0)
// 			dp[i] = max(dp[i] , dp[i - x] + 1);
// 		if(i - y >= 0)
// 			dp[i] = max(dp[i] , dp[i - y] + 1);
// 		if(i - z >= 0)
// 			dp[i] = max(dp[i] , dp[i - z] + 1);
// 	}
//
// 	if(dp[n] < 0)
// 		return 0;
//
// 	return dp[n];
// }
//
//
// int cutSegments(int n, int x, int y, int z) {
// 	return solveTab(n , x , y , z);
// }


// Space Optimization is not possible in this case as we need to keep track of all previous states.
// i.e we need to access dp[i - x] , dp[i - y] , dp[i - z] for calculating dp[i].