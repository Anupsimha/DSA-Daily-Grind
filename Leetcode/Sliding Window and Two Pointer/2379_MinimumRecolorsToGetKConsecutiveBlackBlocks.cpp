// int minimumRecolors(string s, int k) {
//     int n = s.length();

//     int minOp = n;
//     int i = 0 , j = 0;
//     int noOfWhite = 0;
//     while(j < n){
//         if(s[j] == 'W') noOfWhite++;

//         if(j - i + 1 == k){
//             minOp = min(minOp , noOfWhite);

//             if(s[i] == 'W') noOfWhite--;
//             i++;
//         }

//         j++;
//     }

//     return minOp;
// }