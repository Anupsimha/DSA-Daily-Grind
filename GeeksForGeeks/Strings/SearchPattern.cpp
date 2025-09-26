// KMP Algorithm

// void computeLPS(string &pat , vector<int> &LPS , int m){
//     int len = 0;    //length of prev longest prefix & suffix which were equal
    
//     LPS[0] = 0;
    
//     int i = 1;
    
//     while(i < m){
//         if(pat[i] == pat[len]){
//             len++;
//             LPS[i] = len;
//             i++;
//         }
//         else{
//             if(len != 0)
//                 len = LPS[len - 1];
//             else{
//                 LPS[i] = 0;
//                 i++;
//             }
//         }
//     }
// }

// vector<int> search(string &pat, string &txt) {
//     int n = txt.size();
//     int m = pat.size();
    
//     vector<int> result;
    
//     //Create an LPS array to store the length of longest proper prefix in txt which is equal to suffix in pat
//     // lps[i] = 
//     // the longest proper prefix of pat[0...i]
//     // which is also a suffix of pat[0...i]
//     vector<int> LPS(m , 0);
//     computeLPS(pat , LPS , m);
    
//     // Apply KMP code
//     int i = 0;
//     int j = 0;
//     while(i < n){
//         if(txt[i] == pat[j]){
//             i++;
//             j++;
//         }
        
//         if(j == m){
//             result.push_back(i - m);
//             j = LPS[j - 1];
//         }
//         else if(i < n && txt[i] != pat[j]){
//             if(j != 0)
//                 j = LPS[j -  1];
//             else
//                 i++;
//         }
//     }
    
//     return result;
// }