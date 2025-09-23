// vector<int> findPrimeFactors(int n) {
//     vector<int> res;
//     vector<bool> prime(n + 1 , true);
    
//     prime[0] = prime[1] = false;
    
//     for(int i = 2 ; i <= n ; i++){
//         if(prime[i] && (n % i == 0)){
//             int temp = n;
            
//             while(temp % i == 0){
//                 res.push_back(i);
//                 temp = temp / i;
//             }
            
//             for(int j = 2 * i ; j <= n ; j = j + i){
//                 prime[j] = false;
//             }
//         }
//     }
    
//     return res;
// }