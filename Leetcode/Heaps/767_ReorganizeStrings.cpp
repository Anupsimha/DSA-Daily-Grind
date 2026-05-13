// // Time Complexity -> O(n)

// typedef pair<int , char> P;
// string reorganizeString(string s) {
//     int n = s.length();

//     vector<int> count(26 , 0);

//     for(char &ch : s){
//         count[ch - 'a']++;

//         if(count[ch - 'a'] > (n + 1)/2)
//             return "";
//     }

//     priority_queue<P , vector<P>> pq;
//     for(char ch = 'a' ; ch <= 'z' ; ch++){
//         if(count[ch - 'a'] > 0) pq.push({count[ch - 'a'] , ch});
//     }

//     string res = "";
//     // T.C : O(k * log(k)) , k is the length or size of heap
//     while(pq.size() >= 2){
//         auto p1 = pq.top(); // T.C : O(log(k)) , k is the size of heap (k = 26 in worst case)
//         pq.pop();

//         auto p2 = pq.top(); // T.C : O(log(k)) , k is the size of heap (k = 26 in worst case)
//         pq.pop();

//         res += p1.second;   p1.first--;
//         res += p2.second;   p2.first--;

//         if(p1.first > 0)    pq.push(p1);
//         if(p2.first > 0)    pq.push(p2);
//     }

//     if(!pq.empty()) res += pq.top().second;

//     return res;
// }





// Approach : Using Alternate positioning of characters method
// Time Complexity -> O(n)

// string reorganizeString(string s) {
//     int n = s.length();

//     vector<int> count(26 , 0);
//     int maxFreq = 0;
//     int charMaxFreq;

//     for(char &ch : s){
//         count[ch - 'a']++;

//         if(count[ch - 'a'] > maxFreq){
//             maxFreq = count[ch - 'a'];
//             charMaxFreq = ch;
//         }

//         if(count[ch - 'a'] > (n + 1)/2)
//             return "";
//     }

//     string result = s;
//     int i = 0;
//     while(count[charMaxFreq - 'a'] > 0){
//         result[i] = charMaxFreq;
//         i += 2;
//         count[charMaxFreq - 'a']--;
//     }

//     for(char ch = 'a' ; ch <= 'z' ; ch++){
//         while(count[ch - 'a'] > 0){
//             if(i >= n)  i = 1;

//             result[i] = ch;
//             i += 2;
//             count[ch - 'a']--;
//         }
//     }

//     return result;
// }