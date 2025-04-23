//Appraoch 1 : Brute Force

// int countGE(vector<int>& arr , int n , int index){
//     int count = 0;
    
//     for(int i = index + 1 ; i < n ; i++){
//         if(arr[i] > arr[index])
//             count++;
//     }
    
//     return count;
// }

// vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices){
//    vector<int> ans(queries);
   
//    for(int i = 0 ; i < queries ; i++){
//        int countEle = countGE(arr , n , indices[i]);
       
//        ans[i] = countEle;
//    }
   
//    return ans;
// }



//Appraoch 2 : Using Stack
// Time Complexity : O(n)

// vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices) {
//     vector<int> result(queries);
    
//     for (int q = 0; q < queries; q++) {
//         int index = indices[q];
//         int count = 0;
//         stack<int> s;

//         for (int i = n - 1; i > index; i--) {
//             while (!s.empty() && s.top() <= arr[index]) {
//                 s.pop();
//             }
//             if (arr[i] > arr[index]) {
//                 s.push(arr[i]);
//                 count++;
//             }
//         }
//         result[q] = count;
//     }
    
//     return result;
// }
