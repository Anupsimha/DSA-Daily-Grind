// int solve(int& num){
//     int ans = 0;

//     while(num != 0){
//         ans += num % 10;
//         num /= 10;
//     }

//     return ans;
// }

// int addDigits(int num) {
//     if(num < 10)    return num;

//     while(num >= 10){
//         num = solve(num);
//     }

//     return num;
// }