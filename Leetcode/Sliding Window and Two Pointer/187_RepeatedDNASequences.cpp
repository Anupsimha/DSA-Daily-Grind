// vector<string> findRepeatedDnaSequences(string s) {
//     int n = s.size();

//     if(n < 10) 
//         return {};

//     vector<string> v;
//     map<string,int> mp;
//     for(int i=0;i<n-9;i++){
//         string a = s.substr(i,10);
//         mp[a]++;
//         if(mp[a] == 2){
//             v.push_back(a);
//         }
//     }
    
//     return v;
// }