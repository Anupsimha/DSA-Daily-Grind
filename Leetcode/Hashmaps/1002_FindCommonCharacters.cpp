// vector<string> commonChars(vector<string>& words) {
//     int n = words.size();
    
//     vector<string> res;
//     unordered_map<char , int> mp;
//     for(char ch : words[0]){
//         mp[ch]++;
//     }

//     for(int i = 1 ; i < n ; i++){
//         unordered_map<char , int> helper;
//         for(char ch : words[i]){
//             helper[ch]++;
//         }

//         unordered_map<char , int> newMp;
//         for(auto it : mp){
//             int count_in_map = mp[it.first];
//             int count_in_helper = helper[it.first];

//             if(count_in_helper > 0){
//                 newMp[it.first] = min(count_in_map , count_in_helper);
//             }
//         }

//         mp = newMp;
//     }

//     for(auto it : mp){
//         int count = it.second;

//         for(int i = 0 ; i < count ; i++){
//             res.push_back(string(1 , it.first));
//         }
//     }

//     return res;
// }