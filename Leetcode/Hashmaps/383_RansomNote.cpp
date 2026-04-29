// bool canConstruct(string ransomNote, string magazine) {
//     vector<int> hash(26 , 0);

//     for(char ch : ransomNote){
//         hash[ch - 'a']++;
//     }

//     for(char ch : magazine){
//         hash[ch - 'a']--;
//     }

//     for(int i = 0 ; i < 26 ; i++){
//         if(hash[i] > 0)   return false;
//     }

//     return true;
// }