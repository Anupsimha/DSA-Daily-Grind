// KMP Algorithm


// void computeLPS(string s , vector<int>& LPS , int n){
//     int len = 0;
        
//     LPS[0] = 0;
    
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

// int minChar(string &s) {
//     int n = s.length();
    
//     string rev = s;
//     reverse(begin(rev) , end(rev));
    
//     s += '$';
    
//     s += rev;
    
//     vector<int> LPS(s.length() , 0);
//     computeLPS(s , LPS , s.length());
    
//     return n - LPS[s.length() - 1];
// }