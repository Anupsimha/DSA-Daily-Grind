// long subarrayXor(vector<int> &arr, int k) {
//     int n = arr.size();
    
//     int subArrays = 0;
//     int prefixXor = 0;
    
//     unordered_map<int , int> freq;
//     for(int i = 0 ; i < n ; i++){
//         prefixXor ^= arr[i];
        
//         if(prefixXor == k)  subArrays++;
        
//         if(freq.find(prefixXor ^ k) != freq.end()){      // From the rule, prefixer[i -1] ^ prefixer[i] = k, then prefixer[i] = prefixer[i - 1] ^ k
//             subArrays += freq[prefixXor ^ k];
//         }
        
//         freq[prefixXor]++;
        
//     }
    
//     return subArrays;
// }