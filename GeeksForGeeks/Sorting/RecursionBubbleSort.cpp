// void recBubbleSort(vector<int>& arr , int s , int e){
//     if(s == e){
//         return ;
//     }
    
//     for(int j = s ; j < e - s ; j++){
//         if(arr[j] > arr[j + 1]){
//             swap(arr[j] , arr[j + 1]);
//         }
//     }
    
//     recBubbleSort(arr , s , --e);
// }

// void bubbleSort(vector<int>& arr) {
//     int n = arr.size();
//     recBubbleSort(arr , 0 , n - 1);
// }