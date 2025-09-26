// Approach 1: Recursion

// string countAndSay(int n) {
//     // Base Case
//     if(n == 1)
//         return "1";

//     string prev = countAndSay(n - 1);
//     string res = "";
//     int i = 0;

//     while(i < prev.size()){
//         int count = 1;
//         while(i + 1 < prev.size() && prev[i] == prev[i + 1]){
//             i++;
//             count++;
//         }
//         res += to_string(count) + prev[i];
//         i++;
//     }

//     return res;
// }



// Approach 2: Iterative

// string countAndSay(int n) {
//     if(n == 1)
//         return "1";

//     string res = "1";

//     for(int i = 2 ; i <= n ; i++){
//         string temp = "";
//         int j = 0;
//         while(j < res.size()){
//             int cnt = 1;
//             char ch = res[j];

//             while (j + 1 < res.size() && res[j + 1] == ch) {
//                 cnt++;
//                 j++;
//             }

//             temp += to_string(cnt);  
//             temp += ch;              

//             j++;
//         }
//         res = temp;
//     }

//     return res;
// }