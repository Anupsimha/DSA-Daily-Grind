// Floor : Greatest element smaller than or equal to x

// int floorNum(vector<int> &arr, int n, int x){
// 	int s = 0 , e = n - 1;
// 	int ans = -1;
//
// 	while(s <= e){
// 		int mid = s + (e - s)/2;
//
// 		if(arr[mid] == x){
// 			s = mid + 1;
// 			ans = arr[mid];                  
// 		}                                               
// 		else if(arr[mid] > x){
// 			e = mid - 1;
// 		}
// 		else{
// 			ans = arr[mid];
// 			s = mid + 1;
// 		}
// 	}
//
// 	return ans;
// }

// Ceil : Smallest element greater than or equal to x

// int ceilNum(vector<int> &arr, int n, int x){
// 	int s = 0 , e = n - 1;
// 	int ans = -1;
//
// 	while(s <= e){
// 		int mid = s + (e - s)/2;
//
// 		if(arr[mid] == x){
// 			e = mid - 1;
// 			ans = arr[mid];
// 		}
// 		else if(arr[mid] < x){
// 			s = mid + 1;
// 		}
// 		else{
// 			ans = arr[mid];
// 			e = mid - 1;
// 		}
// 	}
//
// 	return ans;
// }


// pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
//	
// 	int lower = floorNum(a , n , x);
// 	int upper = ceilNum(a , n , x);
//
// 	pair<int , int> p(lower , upper);
//
// 	return p;
// }