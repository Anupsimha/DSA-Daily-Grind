// int countCharacters(vector<string>& words, string chars) {
//     unordered_map<char , int> mp;
//     for(char ch : chars){
//         mp[ch]++;
//     }

//     int length = 0;
//     for(string word : words){
//         unordered_map<char , int> temp = mp;

//         for(char ch : word){
//             if(temp.find(ch) != temp.end() && temp[ch] != 0)    temp[ch]--;
//             else{
//                 length -= word.length();
//                 break;
//             }    
//         }

//         length += word.length();
//     }

//     return length;
// }