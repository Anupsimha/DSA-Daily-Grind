// Approach : Binary Search

// int findKthPositive(vector<int>& arr, int k) {
//     int n = arr.size();
//     int s = 0 , e = n - 1;
//     while(s <= e){
//         int mid = s + (e-s)/2;

//         int no_of_missing = arr[mid] - (mid + 1);

//         if(no_of_missing < k)
//             s = mid + 1;
//         else
//             e = mid - 1;
//     }
    
//     return s + k;
// }



// Approach II

// int findKthPositive(vector<int>& arr, int k) {
//     int n = arr.size();

//     int missing_count = 0;
//     int i = 0 , num = 1;
//     while(i < n){
//         if(missing_count == k)
//             break;

//         if(num != arr[i]){
//             missing_count++;
//             num++;
//         }
//         else{
//             i++;
//             num++;
//         }  
//     }

//     while(missing_count != k){
//         num++;
//         missing_count++;
//     }

//     return num - 1;
// }



// Approach III : optimmized approach

// int findKthPositive(vector<int>& arr, int k) {
//     int n = arr.size();
//     int num = 1;
//     int i = 0;
//     while(i < n && k > 0){
//         if(arr[i] == num){
//             i++;
//         }
//         else{
//             k--;
//         }

//         num++;
//     }

//     while(k--){
//         num++;
//     }

//     return num - 1;
// }