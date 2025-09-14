// bool solve(vector<int>& arr , int sum , int addup , int i){
//     if(addup == sum)    return true;
    
//     if(i >= arr.size())  return false;
    
//     bool take = solve(arr , sum , addup + arr[i] , i + 1);
//     bool notTake = solve(arr , sum , addup , i + 1);
    
//     return take || notTake;
// }

// bool isSubsetSum(vector<int>& arr, int sum) {
//     vector<int> dp
    
//     return solve(arr , sum , 0 , 0);
// }