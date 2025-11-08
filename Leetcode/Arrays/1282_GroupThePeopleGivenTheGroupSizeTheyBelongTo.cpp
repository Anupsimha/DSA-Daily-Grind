// Approach : Using HashMap to group people based on their group sizes

// vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
//     int n = groupSizes.size();

//     vector<vector<int>> ans;

//     map<int , vector<int>> mp;
//     for(int idx = 0 ; idx < n ; idx++){
//         if(mp.find(groupSizes[idx]) != mp.end() && mp[groupSizes[idx]].size() >= groupSizes[idx]){
//             ans.push_back(mp[groupSizes[idx]]);
//             mp[groupSizes[idx]].clear();
//         }

//             mp[groupSizes[idx]].push_back(idx);
//     }

//     for(auto &it : mp){
//         ans.push_back(it.second);
//     }


//     return ans;
// }




// Space optimized Approach : Using Vector of Vectors to group people based on their group sizes

// vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
//     int n = groupSizes.size();

//     vector<vector<int>> ans;

//     vector<vector<int>> mp(n + 1);

//     for(int idx = 0 ; idx < n ; idx++){
//         int L = groupSizes[idx];

//         mp[L].push_back(idx);

//         if(mp[L].size() == L){
//             ans.push_back(mp[L]);
//             mp[L] = {};
//         }
//     }

//     return ans;
// }