// typedef long long ll;

// long long maxTotalValue(vector<int>& nums, int k) {
//     int n = nums.size();

//     int minEle = INT_MAX;
//     int maxEle = INT_MIN;

//     for(int& num : nums){
//         minEle = min(minEle , num);
//         maxEle = max(maxEle , num);
//     }

//     return (ll) k * (maxEle - minEle);
// }