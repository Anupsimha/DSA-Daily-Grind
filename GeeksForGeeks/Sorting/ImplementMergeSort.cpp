// void merge(vector<int>& arr , int l , int r){
//     int mid = l + (r - l)/2;
//     int len1 = mid - l + 1;
//     int len2 = r - mid;
//     int *first = new int[len1];
//     int *second = new int[len2];
    
//     int mainArrayIndex = l;
//     for(int i = 0 ; i < len1 ; i++){
//         first[i] = arr[mainArrayIndex++];
//     }
    
//     for(int i = 0 ; i < len2 ; i++){
//         second[i] = arr[mainArrayIndex++];
//     }
    
//     int index1 = 0,  index2 = 0;
//     mainArrayIndex = l;
//     while(index1 < len1 && index2 < len2){
//         if(first[index1] < second[index2]){
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else{
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }
    
//     while(index1 < len1){
//         arr[mainArrayIndex++] = first[index1++];
//     }
//     while(index2 < len2){
//         arr[mainArrayIndex++] = second[index2++];
//     }
//     delete[] first;
//     delete[] second;
// }

// void mergeSort(vector<int>& arr, int l, int r) {
//     if(l >= r)
//         return ;
        
//     int mid = l + (r - l)/2;
    
//     mergeSort(arr , l , mid);
//     mergeSort(arr , mid + 1 , r);
    
//     merge(arr , l , r);
// }