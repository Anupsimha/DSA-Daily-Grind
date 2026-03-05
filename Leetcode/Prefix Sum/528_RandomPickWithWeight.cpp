// class Solution {
// public:
//     vector<int> weight;

//     Solution(vector<int>& w) {
//         weight.push_back(w[0]);
//         for(int i = 1 ; i < w.size() ; i++){
//             weight.push_back(weight.back() + w[i]);
//         }
//     }
    
//     int pickIndex() {
//         int rand_weight = rand() % (weight.back());
//         return upper_bound(begin(weight) , end(weight) , rand_weight) - begin(weight);
//     }
// };