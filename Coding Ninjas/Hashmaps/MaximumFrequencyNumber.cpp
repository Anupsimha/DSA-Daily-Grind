// int maximumFrequency(vector<int> &arr, int n)
// {
//     unordered_map<int , int> m;
//     int maxFreq = 0;
//
//     for(int i = 0 ; i < n ; i++){
//         m[arr[i]]++;
//         maxFreq = max(maxFreq , m[arr[i]]);
//     }
//
//     int ans = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(maxFreq == m[arr[i]]){
//             ans = arr[i];
//             break;
//         }
//     }
//    
//     return ans;
// }
//