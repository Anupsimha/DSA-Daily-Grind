// My Approach - Approach I

// bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//     int m = flowerbed.size();
//     int count = 0;

//     for(int i = 0 ; i < m ; i++){
//         if(flowerbed[i] == 0){

//             bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
//             bool rightEmpty = (i == m - 1 || flowerbed[i + 1] == 0);

//             if(leftEmpty && rightEmpty){
//                 flowerbed[i] = 1;
//                 n--;
//             }

//             if(n==0)    return true;
//         }
//     }

//     return n <= 0;;
// }