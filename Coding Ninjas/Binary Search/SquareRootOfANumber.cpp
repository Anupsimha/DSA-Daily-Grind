// int floorSqrt(int n)
// {
//     int s = 0 , e = n;
//     while(s <= e){
//         long long mid = s + (e - s)/2;
//         long long sqr = mid * mid;
//         if(sqr == n)
//             return mid;
//         else if(sqr < n)
//             s = mid + 1;
//         else
//             e = mid - 1;
//     }

//     return e;
// }