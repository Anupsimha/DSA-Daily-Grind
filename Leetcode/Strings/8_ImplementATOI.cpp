// int myAtoi(string s) {
//     int n = s.size();
//     long long num = 0; 
//     bool isNeg = false;

//     int i = 0;

//     while (i < n && s[i] == ' ')
//         i++;

//     if (i < n && (s[i] == '-' || s[i] == '+')) {
//         isNeg = (s[i] == '-');
//         i++;
//     }

//     while (i < n && s[i] >= '0' && s[i] <= '9') {
//         int digit = s[i] - '0';
//         num = num * 10 + digit;

//         if (!isNeg && num > INT_MAX)
//             return INT_MAX;
//         if (isNeg && -num < INT_MIN)
//             return INT_MIN;

//         i++;
//     }

//     if (isNeg)
//         num = -num;

//     return (int)num;
// }



