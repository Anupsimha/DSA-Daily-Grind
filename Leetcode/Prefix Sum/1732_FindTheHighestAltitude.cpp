// int largestAltitude(vector<int>& gain) {
//     int n = gain.size();

//     vector<int> netgain(n + 1 , 0);
//     int highest = 0;

//     for(int i = 0 ; i < n ; i++){
//         netgain[i + 1] = netgain[i] + gain[i];
//         highest = max(highest , netgain[i + 1]);
//     }

//     return highest;        
// }