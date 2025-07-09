// Approach 1

// class SummaryRanges {
// public:
//     set<int> st;

//     SummaryRanges() {
//         st.clear();
//     }
    
//     void addNum(int value) {
//         st.insert(value);
//     }
    
//     vector<vector<int>> getIntervals() {
//         vector<int> nums(begin(st) , end(st));

//         vector<vector<int>> res;

//         int n = nums.size();

//         for(int i = 0 ; i < n ; i++){
//             int left = nums[i];

//             while(i < n - 1 && nums[i] + 1 == nums[i + 1]){
//                 i++;
//             }

//             res.push_back({left , nums[i]});
//         }

//         return res;
//     }
// };




// Approach 2 : using Maps

// class SummaryRanges {
// public:
//     map<int , int> mp;

//     SummaryRanges() {
//         mp.clear();
//     }
    
//     void addNum(int value) {
//         int left = value;
//         int right = value;

//         auto just_greater = mp.upper_bound(value);

//         if(just_greater != mp.begin()){
//             auto just_lesser = just_greater;
//             just_lesser--;

//             if(just_lesser->second >= value)
//                 return ;

//             if(just_lesser->second == value - 1){
//                 left = just_lesser->first;
//             }
//         }

//         if(just_greater != mp.end() && just_greater->first == value + 1){
//             right = just_greater->second;
//             mp.erase(just_greater);
//         }

//         mp[left] = right;
//     }
    
//     vector<vector<int>> getIntervals() {
//         vector<vector<int>> res;

//         for(auto &it : mp){
//             res.push_back({it.first , it.second});
//         }

//         return res;
//     }
// };