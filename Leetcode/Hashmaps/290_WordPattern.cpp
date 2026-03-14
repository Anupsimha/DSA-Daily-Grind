// bool wordPattern(string pattern, string s) {
//     vector<string> words;

//     stringstream ss(s);
//     string word;

//     while(ss >> word){
//         words.push_back(word);
//     }

//     if(pattern.length() != words.size())    return false;

//     unordered_map<char , string> mp1;
//     unordered_map<string , char> mp2;

//     for(int i = 0 ; i < pattern.length() ; i++){
//         char ch = pattern[i];
//         string str = words[i];

//         if(mp1.find(ch) != mp1.end() && mp1[ch] != str)  return false;
//         if(mp2.find(str) != mp2.end() && mp2[str] != ch)  return false;

//         mp1[ch] = str;
//         mp2[str] = ch;
//     }

//     return true;
// }