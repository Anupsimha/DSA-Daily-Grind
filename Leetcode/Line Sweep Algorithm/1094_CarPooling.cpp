// bool carPooling(vector<vector<int>>& trips, int capacity) {
//     int n = trips.size();

//     map<int , int> mp;
//     for(auto trip : trips){
//         mp[trip[1]] += trip[0];
//         mp[trip[2]] -= trip[0];
//     }

//     int totalPass = 0;
//     for(auto trip : mp){
//         totalPass += trip.second;

//         if(totalPass > capacity)    return false;
//     }

//     return true;
// }