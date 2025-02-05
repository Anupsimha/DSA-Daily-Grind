/* Approach - I */

// int minFlips(int a, int b, int c) {
//         int count = 0;
//
//         while(a != 0 || b != 0 || c != 0){
//             int bitA = a & 1;
//             int bitB = b & 1;
//             int bitC = c & 1;
//
//             if (bitC == 1) {
//                 if (bitA == 0 && bitB == 0) { 
//                     count++;  // At least one bit should be set
//                 }
//             } else { // bitC == 0
//                 count += bitA + bitB; // Flip any 1s in a and b
//             }
//
//             a = a >> 1;
//             b = b >> 1;
//             c = c >> 1;
//         }
//
//         return count;
// }

/* Approach - II */

// int minFlips(int a, int b, int c) {
//         int result = ((a | b ) ^ c);

//         int result1 = (a & b);

//         int result2 = (result & result1);

//         return __builtin_popcount(result) + __builtin_popcount(result2);
// }