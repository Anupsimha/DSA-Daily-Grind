// void computeLPS(string s , vector<int>& LPS , int n){
//     int len = 0;

//     int i = 1;
//     while(i < n){
//         if(s[i] == s[len]){
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

// string longestPrefix(string s) {
//     int n = s.length();

//     string res = "";

//     vector<int> LPS(n , 0);
//     computeLPS(s , LPS , n);

//     return s.substr(0 , LPS[s.size()-1]); 
// }