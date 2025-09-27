// KMP Algorithm


// void computeLPS(string pat , vector<int> &LPS , int m){
//     int len = 0;

//     LPS[0] = 0;

//     int i = 1;
//     while(i < m){
//         if(pat[i] == pat[len]){
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

// bool KMPsearch(string &txt , string &pat){
//     int n = txt.size();
//     int m = pat.size();

//     vector<int> LPS(m , 0);
//     computeLPS(pat , LPS , m);

//     int i = 0;
//     int j = 0;
//     while(i < n){
//         if(txt[i] == pat[j]){
//             i++;
//             j++;
//         }

//         if(j == m)
//             return true;
//         else if(i < n && txt[i] != pat[j]){
//             if(j != 0)
//                 j = LPS[j - 1];
//             else
//                 i++;
//         }
//     }

//     return false;
// }

// int repeatedStringMatch(string a, string b) {
//     string repeated = a;
//     int count = 1;

//     while(repeated.length() < b.length()){
//         repeated += a;
//         count++;
//     }

//     if(KMPsearch(repeated , b))
//         return count;

//     repeated += a;
//     if(KMPsearch(repeated , b))
//         return count + 1;

//     return -1;
// }