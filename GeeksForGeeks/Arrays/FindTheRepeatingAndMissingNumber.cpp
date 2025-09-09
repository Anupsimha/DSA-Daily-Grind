// Approach : Using Mathematical Equations

// typedef long long ll;

// vector<int> findTwoElement(vector<int>& arr) {
//     ll n = arr.size();
//     ll actualSum = (n * (n + 1))/2; 
//     ll actualSumSquare = (n * (n + 1) * (2*n + 1))/6;
    
//     ll obtainedSum = 0;
//     ll obtainedSumSquare = 0;
    
//     for(ll val : arr){
//         obtainedSum += val;
//         obtainedSumSquare += (val * val);
//     }
    
//     ll val1 = actualSum - obtainedSum;      
//     ll val2 = actualSumSquare - obtainedSumSquare;
//     val2 = val2 / val1;
        
//     int missing = (val1 + val2)/2;
//     int repeating = val2 - missing;
    
//     return {repeating , missing};
// }




// Approach : Using Bit Manipulation - XOR

// vector<int> findTwoElement(vector<int>& arr) {
//     int n = arr.size();
//     int xor_all = 0;
    
//     for(int i = 0 ; i < n ; i++){
//         xor_all ^= arr[i];
//         xor_all ^= (i + 1);
//     }
    
//     int rightMostSetBit = xor_all & ~(xor_all - 1);
//     int xor1 = 0 , xor2 = 0;
    
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] & rightMostSetBit)
//             xor1 ^= arr[i];
//         else
//             xor2 ^= arr[i];
            
//         if((i + 1) & rightMostSetBit)
//             xor1 ^= (i + 1);
//         else
//             xor2 ^= (i + 1);
//     }
    
//     int missing = 0 , repeating = 0;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == xor1){
//             repeating = xor1;
//             missing = xor2;
//             break;
//         }
//         else if(arr[i] == xor2){
//             repeating = xor2;
//             missing = xor1;
//             break;
//         }
//     }
    
//     return {repeating , missing};
// }





// Approach : Using Hashing

// vector<int> findTwoElement(vector<int>& arr) {
//     int n = arr.size();
    
//     unordered_map<int , int> freq;
//     int missingNum = 0 , repeatingNum = -1;
    
//     for(int i = 0 ; i < n ; i++){
//         freq[arr[i]]++;
//     }
    
//     for(int i = 1 ; i <= n ; i++){
//         if(freq[i] == 2)    repeatingNum = i;
//         else if(freq[i] == 0) missingNum = i;
//     }
    
//     return {repeatingNum , missingNum};
// }