// int numJewelsInStones(string jewels, string stones) {
//     int m = jewels.size();
//     int n = stones.size();

//     unordered_map<char , int> mp;
//     for(char ch : stones){
//         mp[ch]++;
//     }

//     int cnt = 0;
//     for(char ch : jewels){
//         cnt += mp[ch];
//     }

//     return cnt;
// }