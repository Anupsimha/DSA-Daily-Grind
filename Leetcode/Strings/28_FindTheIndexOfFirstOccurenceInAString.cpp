// int strStr(string haystack, string needle) {
//     int n = haystack.size();
//     int m = needle.size();

//     for(int i = 0 ; i <= n ; i++){
//         int j = 0;
//         while(j < m && haystack[i + j] == needle[j]){
//             j++;
//         }
//         if(j == m)  return i;
//     }

//     return -1;
// }




// Using KMP Algorithm

// void computeLPS(string needle , vector<int>& LPS , int m){
//     int len = 0;

//     LPS[0] = 0;

//     int i = 1;
//     while(i < m){
//         if(needle[i] == needle[len]){
//             len++;
//             LPS[i] = len;
//             i++;
//         }
//         else{
//             if(len != 0){
//                 len = LPS[len - 1];
//             }
//             else{
//                 LPS[i] = 0;
//                 i++;
//             }
//         }
//     }
// }

// int strStr(string haystack, string needle) {
//     int n = haystack.size();
//     int m = needle.size();

//     vector<int> LPS(m , 0);
//     computeLPS(needle , LPS , m);

//     int i = 0;
//     int j = 0;
//     while(i < n){
//         if(haystack[i] == needle[j]){
//             i++;
//             j++;
//         }

//         if(j == m)
//             return i - j;
//         else if(i < n && haystack[i] != needle[j]){
//             if(j != 0)
//                 j = LPS[j - 1];
//             else
//                 i++;
//         }
//     }

//     return -1;
// }