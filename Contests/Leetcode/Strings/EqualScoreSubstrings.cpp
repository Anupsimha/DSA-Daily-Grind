// bool scoreBalance(string s) {
//     int n = s.length();

//     int total = 0;
//     for(int i = 0 ; i < n ; i++){
//         total += s[i] - 'a' + 1;
//     }

//     int left = 0 , right = 0;
//     for(int i = 0 ; i < n ; i++){
//         left += s[i] - 'a' + 1;
//         right = total - left;

//         if(left == right)
//             return true;
//     }

//     return false;
// }