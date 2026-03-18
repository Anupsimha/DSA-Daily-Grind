// vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
//     int n = image.size();

//     int l = 0 , r = n - 1;
//     for(int i = 0 ; i < n ; i++){
//         while(l <= r){
//             swap(image[i][l] , image[i][r]);

//             image[i][l] ^= 1;
//             if(l < r)   image[i][r] ^= 1;

//             l++;
//             r--;
//         }

//         l = 0;
//         r = n - 1;
//     }

//     return image;
// }




// Using STL

// vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
//     int n = image.size();

//     for(int i = 0 ; i < n ; i++){
//         reverse(begin(image[i]) , end(image[i]));
//         for(int j = 0 ; j < n ; j++){
//             image[i][j] = (image[i][j] == 0) ? 1 : 0;
//         }
//     }

//     return image;
// }