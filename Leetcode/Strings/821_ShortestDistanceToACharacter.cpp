// vector<int> shortestToChar(string s, char c) {
//     int n = s.length();

//     vector<int> leftDist(n , INT_MAX);
//     vector<int> rightDist(n , INT_MAX);

//     int dist = INT_MAX;
//     for(int i = 0 ; i < n ; i++){
//         if(s[i] == c){
//             dist = 0;
//             rightDist[i] = dist;
//         }
//         else{
//             if(dist != INT_MAX){
//                 dist++;
//                 rightDist[i] = dist;
//             }
//         }
//     }

//     dist = INT_MAX;
//     for(int i = n - 1 ; i >= 0 ; i--){
//         if(s[i] == c){
//             dist = 0;
//             leftDist[i] = dist;
//         }
//         else{
//             if(dist != INT_MAX){
//                 dist++;
//                 leftDist[i] = dist;
//             }
//         }
//     }

//     vector<int> res(n , 0);
//     for(int i = 0 ; i < n ; i++){
//         res[i] = min(leftDist[i] , rightDist[i]);
//     }

//     return res;
// }