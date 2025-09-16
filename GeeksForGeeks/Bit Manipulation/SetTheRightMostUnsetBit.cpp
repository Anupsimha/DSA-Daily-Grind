// Appraoch 1 

// int setBit(int n) {
//         int count = 0;
        
//         int temp = n;
//         while(temp){
//             if(!(temp & 1))
//                 break;
                
//             count++;
//             temp = temp >> 1;
//         }
        
//         int num = (int) pow(2 , count);
        
//         return n | num;
//     }





// Most Optimal Approach

// int setBit(int n) {
//     return n | (n + 1);
// }