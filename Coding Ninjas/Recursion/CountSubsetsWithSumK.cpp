// int countWays(vector<int>& arr, int k , int i , int sum){
// 	if(i == arr.size()) {
// 		return (sum == k) ? 1 : 0;
// 	}
//	
// 	// take arr[i]
//     int take = countWays(arr , k , i + 1 , sum + arr[i]);
//
//     // don't take arr[i]
//     int notTake = countWays(arr , k , i + 1 , sum);
//
//     return take + notTake;
// }
//
// int findWays(vector<int>& arr, int k){
// 	return countWays(arr , k , 0 , 0);
// }
