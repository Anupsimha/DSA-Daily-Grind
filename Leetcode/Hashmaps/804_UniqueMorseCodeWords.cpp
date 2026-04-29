// vector<string> code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

// int uniqueMorseRepresentations(vector<string>& words) {
//     unordered_set<string> st;
//     for(string word : words){
//         string morse = "";
//         for(char ch : word){
//             morse += code[ch - 'a'];
//         }
//         st.insert(morse);
//     }

//     return st.size();
// }