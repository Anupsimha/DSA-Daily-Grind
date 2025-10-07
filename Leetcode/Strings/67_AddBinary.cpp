// string addBinary(string a, string b) {
//     int m = a.size();
//     int n = b.size();

//     string res = "";
//     int i  = m - 1, j = n - 1;
//     int carry = 0;

//     while(i >= 0 || j >= 0 || carry){
//         if(i >= 0)
//             carry += a[i] - '0';
//         if(j >= 0)
//             carry += b[j] - '0';

//         res += carry % 2 + '0';
//         carry /= 2;

//         i--;
//         j--;
//     }

//     reverse(begin(res) , end(res));
//     return res;
// }