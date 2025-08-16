// For any integers 𝑎,𝑏,𝑀 a,b,M:
//      (a×b) mod M = ((a mod M)×(b mod M)) mod M
// This means we can reduce numbers at any step without changing the final result.


// const long long MOD = 1e9 + 7;

// long long modPow(long long base, long long exp, long long mod) {
//     long long res = 1;
//     while (exp > 0) {
//         if (exp % 2 == 1) 
//             res = (res * base) % mod;
//         base = (base * base) % mod;
//         exp /= 2;
//     }
//     return res;
// }

// int countGoodNumbers(long long n) {
//     long long evenCount = (n + 1) / 2; 
//     long long oddCount  = n / 2;       

//     long long ans = (modPow(5, evenCount, MOD) * modPow(4, oddCount, MOD)) % MOD;
//     return (int)ans;
// }