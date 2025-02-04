// int divide(int dividend, int divisor) {
//         if(dividend == divisor) return 1;

//         unsigned int ans = 0;
//         int sign = 1;

//         if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
//             sign = -1;

//         long long n = llabs((long long) dividend);
//         long long d = llabs((long long) divisor);

//         while(n >= d){
//             int count = 0;
//             while(n > (d << (count + 1)))
//                 count++;
//             n -= d <<count;
//             ans += 1 << count;
//         }

//         if(ans == (1 << 31) && sign == 1)  return INT_MAX;
//         if(ans == (1 << 31) && sign == -1) return INT_MIN;

//         return sign * ans;
//     }

//Time Complexity : O(log n)^2
//Space Complexity : O(1)