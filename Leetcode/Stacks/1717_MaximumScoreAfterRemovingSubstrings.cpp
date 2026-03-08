// string removeSubstr(string& s , string& matchStr){
//     stack<char> st;

//     for(char &ch : s){
//         if(ch == matchStr[1] && !st.empty() && st.top() == matchStr[0]){
//             st.pop();
//         }
//         else{
//             st.push(ch);
//         }
//     }

//     string temp;
//     while(!st.empty()){
//         temp.push_back(st.top());
//         st.pop();
//     }

//     reverse(begin(temp) , end(temp));
//     return temp;
// }

// int maximumGain(string s, int x, int y) {
//     int n = s.length();

//     int score = 0;
//     string maxStr = (x > y) ? "ab" : "ba";
//     string minStr = (x > y) ? "ba" : "ab";

//     string temp_first = removeSubstr(s , maxStr);
//     int L = temp_first.length();

//     int charsRemoved = (n - L);
//     score += (charsRemoved/2) * max(x , y);

//     string temp_second = removeSubstr(temp_first , minStr);
//     charsRemoved = L - temp_second.length();

//     score += (charsRemoved/2) * min(x , y);

//     return score;
// }







// Approach 2 : Without using Stacks

// string removeSubstr(string& s , string& matchStr){
//     int i = 0;

//     for(int j = 0 ; j < s.length() ; j++){
//         s[i] = s[j];
//         i++;

//         if(i >= 2 && s[i - 2] == matchStr[0] && s[i - 1] == matchStr[1])
//             i -= 2;
//     }

//     s.erase(begin(s) + i , end(s));

//     return s;
// }

// int maximumGain(string s, int x, int y) {
//     int n = s.length();

//     int score = 0;
//     string maxStr = (x > y) ? "ab" : "ba";
//     string minStr = (x > y) ? "ba" : "ab";

//     string temp_first = removeSubstr(s , maxStr);
//     int L = temp_first.length();

//     int charsRemoved = (n - L);
//     score += (charsRemoved/2) * max(x , y);

//     string temp_second = removeSubstr(temp_first , minStr);
//     charsRemoved = L - temp_second.length();

//     score += (charsRemoved/2) * min(x , y);

//     return score;
// }