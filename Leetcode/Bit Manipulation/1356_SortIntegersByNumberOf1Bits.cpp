// static bool comparator(int a , int b){
//     int originalA = a;
//     int originalB = b;

//     int abits = 0 , bbits = 0;

//     while(a != 0){
//         if((a & 1) == 1)  abits++;
//         a >>= 1;
//     }

//     while(b != 0){
//         if((b & 1) == 1)  bbits++;
//         b >>= 1;
//     }

//     if(abits == bbits)
//         return originalA < originalB;  

//     return abits < bbits;
// }

// vector<int> sortByBits(vector<int>& arr) {
//     sort(begin(arr) , end(arr) , comparator);

//     return arr;
// }