// int merge(vector<int> &arr , int s , int mid , int e){
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
    
//     vector<int> left(len1) , right(len2);
//     for (int i = 0; i < len1 ; i++) left[i] = arr[s + i];
//     for (int i = 0; i < len2 ; i++) right[i] = arr[mid + 1 + i];
    
//     int i = 0 , j = 0 , mainArrayIndex = s;
//     int inv = 0;
    
//     while(i < len1 && j < len2){
//         if(left[i] <= right[j])
//             arr[mainArrayIndex++] = left[i++];
//         else{
//             arr[mainArrayIndex++] = right[j++];
//             inv += (len1 - i);
//         }
//     }
    
//     while (i < len1) arr[mainArrayIndex++] = left[i++];
//     while (j < len2) arr[mainArrayIndex++] = right[j++];
    
//     return inv;
// }

// int mergeSort(vector<int> &arr , int s , int e){
//     if(s >= e)
//         return 0;
    
//     int inv = 0;
    
//     int mid = s + (e - s)/2;
//     inv += mergeSort(arr , s , mid);
//     inv += mergeSort(arr , mid + 1 , e);
//     inv += merge(arr , s , mid , e);
    
//     return inv;
// }

// int inversionCount(vector<int> &arr) {
//     return mergeSort(arr , 0 , arr.size() - 1);
// }