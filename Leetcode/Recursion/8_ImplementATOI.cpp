// int skipSpaces(const string &s, int i, int n) {
//         if (i >= n || s[i] != ' ')
//             return i;
//         return skipSpaces(s, i + 1, n);
//     }

//     // Recursively parse digits
//     long long parseDigits(const string &s, int i, int n, long long num, bool isNeg) {
//         if (i >= n || !isdigit(s[i]))
//             return num;

//         int digit = s[i] - '0';
//         num = num * 10 + digit;

//         // Check overflow
//         if (!isNeg && num > INT_MAX)
//             return INT_MAX;
//         if (isNeg && -num < INT_MIN)
//             return INT_MIN;

//         return parseDigits(s, i + 1, n, num, isNeg);
//     }

//     int myAtoi(string s) {
//         int i = 0;
//         int n = s.size();

//         // Skip leading spaces recursively
//         i = skipSpaces(s, i, n);

//         // Check sign
//         bool isNeg = false;
//         if (i < n && (s[i] == '-' || s[i] == '+')) {
//             isNeg = (s[i] == '-');
//             i++;
//         }

//         // Parse digits recursively
//         long long num = parseDigits(s, i, n, 0, isNeg);

//         if(isNeg)
//             return num * -1;
            
//         return (int)num;
//     }