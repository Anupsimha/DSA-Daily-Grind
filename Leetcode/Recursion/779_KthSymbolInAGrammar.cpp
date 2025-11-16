// Using Brute Force Approach

// int kthGrammar(int n, int k) {
//     string output = "0";

//     while(n > 1){
//         string temp = "";

//         for(char &c : output){
//             if(c == '0') temp += "01";
//             else    temp += "10";
//         }

//         output = temp;
//         n--;
//     }

//     return output[k - 1] - '0';
// }





// Using Recursion
// Time Complexity : O(n)
// Space Complexity : O(n)  (Recursion Stack Space)

// int kthGrammar(int n, int k) {
//     if(n == 1 && k == 1)
//         return 0;

//     int length = pow(2 , n - 1);
//     int mid = length/2;

//     if(k <= mid)
//         return kthGrammar(n - 1 , k);

//     return !kthGrammar(n - 1 , k - mid);
// }