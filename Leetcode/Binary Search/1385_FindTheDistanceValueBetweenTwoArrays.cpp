// bool isValid(vector<int>& nums , int m , int num , int d){
//     int s = 0 , e = m - 1;

//     while(s <= e){
//         int mid = s + (e - s)/2;

//         if(abs(nums[mid] - num) <= d)   return false;
//         else if(nums[mid] < num)    s = mid + 1;
//         else    e = mid - 1;
//     }

//     return true;
// }

// int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
//     int n = arr1.size();
//     int m = arr2.size();

//     sort(begin(arr2) , end(arr2));

//     int cnt = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(isValid(arr2 , m , arr1[i] , d))
//             cnt++;
//     }

//     return cnt;
// }