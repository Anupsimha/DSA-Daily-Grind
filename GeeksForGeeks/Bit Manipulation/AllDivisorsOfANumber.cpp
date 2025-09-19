// void print_divisors(int n) {
//     if(n == 0)
//         return ;
//     if(n == 1){
//         cout<<1;
//         return ;
//     }
        
//     vector<int> res;
    
//     for(int i = 1 ; i <= sqrt(n) ; i++){     // should actually use i * i <= n
//         if(n % i == 0){
//             res.push_back(i);
//             if(i != n / i)
//                 res.push_back(n / i);
//         }
//     }
    
//     sort(res.begin() , res.end());
    
//     for(int i = 0 ; i < res.size() ; i++){
//         cout<<res[i]<<" ";
//     }
// }