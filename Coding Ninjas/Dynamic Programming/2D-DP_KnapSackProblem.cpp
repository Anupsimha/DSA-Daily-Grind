// Approach : Simple Recursion

// int solve(vector<int>& weight , vector<int> &value , int idx , int capacity){
// 	//Base Case - If only 1 item to steal, then just compare its weight with the knapsack capacity
// 	if(idx == 0){
// 		if(weight[0] <= capacity)
// 			return value[0];
// 		else
// 			return 0;
// 	}
//
//
// 	int include = 0;
// 	if(weight[idx] <= capacity)
// 		include = value[idx] + solve(weight , value , idx - 1 , capacity - weight[idx]);
//
// 	int exclude = 0 + solve(weight , value , idx - 1 , capacity);
//
// 	int ans = max(include , exclude);
//
// 	return ans;
// }
//
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
// 	return solve(weight , value , n - 1 , maxWeight);
// }




// Appraoch : Recursion + Memoization

// int solveMem(vector<int>& weight , vector<int> &value , int idx , int capacity , vector<vector<int>>& dp){
// 	//Base Case - If only 1 item to steal, then just compare its weight with the knapsack capacity
// 	if(idx == 0){
// 		if(weight[0] <= capacity)
// 			return value[0];
// 		else
// 			return 0;
// 	}
//
// 	if(dp[idx][capacity] != -1)
// 		return dp[idx][capacity];
//
//
// 	int include = 0;
// 	if(weight[idx] <= capacity)
// 		include = value[idx] + solveMem(weight , value , idx - 1 , capacity - weight[idx] , dp);
//
// 	int exclude = 0 + solveMem(weight , value , idx - 1 , capacity , dp);
//
// 	dp[idx][capacity] = max(include , exclude);
//
// 	return dp[idx][capacity];
// }
//
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
// 	vector<vector<int>> dp(n , vector<int>(maxWeight + 1 , -1));
//
// 	return solveMem(weight , value , n - 1 , maxWeight , dp);
// }





// Approach : Tabulation

// int solveTab(vector<int>& weight , vector<int> &value , int n , int capacity){
// 	vector<vector<int>> dp(n , vector<int>(capacity + 1 , 0));
//
// 	for(int w = weight[0] ; w <= capacity ; w++){
// 		if(weight[0] <= capacity)
// 			dp[0][w] = value[0];
// 		else
// 			dp[0][w] = 0;
// 	}
//
// 	for(int idx = 1 ; idx < n ; idx++){
// 		for(int w = 0 ; w <= capacity ; w++){
// 			int include = 0;
// 			if(weight[idx] <= w)
// 				include = value[idx] + dp[idx - 1][w - weight[idx]];
//
// 			int exclude = 0 + dp[idx - 1][w];
//
// 			dp[idx][w] = max(include , exclude);	
// 		}
// 	}
//
// 	return dp[n - 1][capacity];
// }
//
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
// 	return solveTab(weight , value , n , maxWeight);
// }





// Approach : Space Optimization

// int solveSpace(vector<int>& weight , vector<int> &value , int n , int capacity){
// 	vector<int> prev(capacity + 1 , 0);
// 	vector<int> curr(capacity + 1 , 0);

// 	for(int w = weight[0] ; w <= capacity ; w++){
// 		if(weight[0] <= capacity)
// 			prev[w] = value[0];
// 		else
// 			prev[w] = 0;
// 	}

// 	for(int idx = 1 ; idx < n ; idx++){
// 		for(int w = 0 ; w <= capacity ; w++){
// 			int include = 0;
// 			if(weight[idx] <= w)
// 				include = value[idx] + prev[w - weight[idx]];

// 			int exclude = 0 + prev[w];

// 			curr[w] = max(include , exclude);	
// 		}
// 		prev = curr;
// 	}

// 	return prev[capacity];
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
// 	return solveSpace(weight , value , n , maxWeight);
// }




// Approach : Further Space Optimization

// int solveSpace(vector<int>& weight , vector<int> &value , int n , int capacity){
// 	vector<int> curr(capacity + 1 , 0);

// 	for(int w = weight[0] ; w <= capacity ; w++){
// 		if(weight[0] <= capacity)
// 			curr[w] = value[0];
// 		else
// 			curr[w] = 0;
// 	}

// 	for(int idx = 1 ; idx < n ; idx++){
// 		for(int w = capacity ; w >= 0 ; w--){
// 			int include = 0;
// 			if(weight[idx] <= w)
// 				include = value[idx] + curr[w - weight[idx]];

// 			int exclude = 0 + curr[w];

// 			curr[w] = max(include , exclude);	
// 		}
// 	}

// 	return curr[capacity];
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
// 	return solveSpace(weight , value , n , maxWeight);
// }