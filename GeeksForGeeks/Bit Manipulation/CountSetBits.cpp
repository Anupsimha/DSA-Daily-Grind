// int countSetBits(int n) {
//     int cycle_len = 2;
//     int ans = 0;
//     int p = 1;
    
//     while(p <= n){
//         ans += ( (n / cycle_len) * (cycle_len >> 1) );
        
//         int f = n % cycle_len;
//         if(f >= (cycle_len >> 1)){
//             ans += (f - (cycle_len >> 1) + 1);
//         }
        
//         cycle_len <<= 1;
//         p <<= 1;
//     }
    
//     return ans;
// }