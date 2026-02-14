// int minSubsetSumDifference(vector<int>& arr, int n)
// {
// 	int totalSum = accumulate(begin(arr) , end(arr) , 0);

// 	vector<vector<bool>> dp(n , vector<bool>(totalSum + 1 , false));

// 	for(int i = 0 ; i < n ; i++){
// 		dp[i][0] = true;
// 	}

// 	if(arr[0] <= totalSum)	dp[0][arr[0]] = true;

// 	for(int i = 1 ; i < n ; i++){
// 		for(int j = 1 ; j <= totalSum ; j++){
// 			bool take = false;
// 			if(arr[i] <= j)
// 				take = dp[i - 1][j - arr[i]];

// 			bool notTake = dp[i - 1][j];

// 			dp[i][j] = take || notTake;
// 		}
// 	}

// 	int mini = INT_MAX;

// 	for(int i = 0 ; i <= totalSum/2 ; i++){
// 		if(!dp[n - 1][i])	continue;

// 		int leftSum = i;
// 		int rightSum = totalSum - i;

// 		mini = min(mini , abs(leftSum - rightSum));
// 	}

// 	return mini;
// }