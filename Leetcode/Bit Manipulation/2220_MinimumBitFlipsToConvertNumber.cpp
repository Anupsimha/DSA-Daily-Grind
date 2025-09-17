// int minBitFlips(int start, int goal) {
//     int bitFlips = 0;

//     while(start || goal){
//         if((goal & 1) && !(start & 1))
//             bitFlips++;
//         else if(!(goal & 1) && (start & 1))
//             bitFlips++;

//         goal = goal >> 1;
//         start = start >> 1;
//     }

//     return bitFlips;
// }