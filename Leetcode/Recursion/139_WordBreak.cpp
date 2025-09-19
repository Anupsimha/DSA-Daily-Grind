// int n;
// unordered_set<string> st;
// int t[301];

// bool solve(int idx , string& s){        
//     if(idx >= n)
//         return true;

//     if(t[idx] != -1)
//         return t[idx];

//     if(st.find(s) != st.end())
//         return true;

//     for(int l = 1 ; l < n ; l++){
//         string temp = s.substr(idx , l);

//         if((st.find(temp) != st.end()) && solve(idx + l , s))
//             return t[idx] = true;
//     }

//     return t[idx] = false;
// }

// bool wordBreak(string s, vector<string>& wordDict) {
//     n = s.length();

//     memset(t , -1 , sizeof(t));     // initiaizing all the t elements to -1

//     for(int i = 0 ; i < wordDict.size() ; i++){
//         st.insert(wordDict[i]);
//     }

//     return solve(0 , s);
// }