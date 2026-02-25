// string reverseVowels(string s) {
//     int n = s.length();

//     int i = 0 , j = n - 1;
//     unordered_set<char> vowels = {'a' , 'e' , 'i' , 'o' , 'u' , 'A' , 'E' , 'I' , 'O' , 'U'};
//     while(i < j){
//         if(vowels.count(s[i]) && vowels.count(s[j])){
//             swap(s[i] , s[j]);
//             i++;
//             j--;
//         }

//         while(i < j && !vowels.count(s[i])) i++;
//         while(i < j && !vowels.count(s[j])) j--;
//     }

//     return s;
// }