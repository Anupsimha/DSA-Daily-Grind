// int getSecondLargest(vector<int> &arr) {
//     int max1 = INT_MIN , max2 = -1;
    
//     for(int i = 0 ; i < arr.size() ; i++){
//         if(arr[i] > max1){
//             max2 = (max1 == INT_MIN) ? -1 : max1; 
//             max1 = arr[i];
//         }
//         else if(arr[i] > max2 && arr[i] < max1){
//             max2 = arr[i];
//         }
//     }
//     return max2;
// }
