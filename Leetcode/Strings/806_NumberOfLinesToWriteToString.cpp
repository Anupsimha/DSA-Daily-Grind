// vector<int> numberOfLines(vector<int>& widths, string s) {
//     int total = 0 , noOfLines = 0;
//     for(char ch : s){
//         int idx = ch - 'a';
//         int width = widths[idx];

//         if(width + total <= 100){
//             total += width;
//         }
//         else{
//             total = width;
//             noOfLines++;
//         }
//     }

//     return {noOfLines + 1 , total};
// }