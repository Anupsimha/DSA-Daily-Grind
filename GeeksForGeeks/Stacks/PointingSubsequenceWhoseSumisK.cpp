// bool checkSubsequenceRecur(int n , vector<int>& arr, int k , int i , int sum){
//     if(i == n) {
//         return (sum == k);
//     }
    
//     // take
//     if(checkSubsequenceRecur(n, arr, k, i + 1, sum + arr[i]))
//         return true;
    
//     // not take
//     if(checkSubsequenceRecur(n, arr, k, i + 1, sum))
//         return true;
    
//     return false;
// }

// bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
//     return checkSubsequenceRecur(n , arr , k , 0 , 0);
// }