// vector<int> frequencyCount(vector<int>& arr) {
//     int n = arr.size();
//     unordered_map<int , int> mp;
//     vector<int> ans;
    
//     for(int i = 0 ; i < n ; i++){
//         mp[arr[i]]++;
//     }
    
//     for(int i = 0 ; i < n ; i++){
//         ans.push_back(mp[i + 1]);
//     }
    
//     return ans;
// }