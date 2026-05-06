// vector<string> uncommonFromSentences(string s1, string s2) {
//     vector<string> res;
//     string s = s1 + " " + s2;
    
//     unordered_map<string , int> mp;

//     stringstream ss(s);
//     string word;
//     while(getline(ss , word , ' ')){
//         mp[word]++;
//     }

//     for(auto it : mp){
//         if(it.second == 1)  res.push_back(it.first);
//     }

//     return res;
// }