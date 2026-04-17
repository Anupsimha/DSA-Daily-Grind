// int pivotInteger(int n) {
//     int leftSum = 0;
//     int rightSum = n * (n + 1)/2;
//
//     for(int i = 1 ; i <= n ; i++){
//         leftSum += i;
//
//         if(leftSum == rightSum) return i;
//
//         rightSum -= i;
//     }
//
//     return -1;
// }