// Approach : Using Greedy Algorithm
// Time Complexity : O(nlogn) + O(mlogm) + O(n+m) ~ O(nlogn) + O(mlogm)
// Space Complexity : O(1)

// int findContentChildren(vector<int>& g, vector<int>& s) {
//     int content_children = 0;
//     sort(g.begin() , g.end());
//     sort(s.begin() , s.end());

//     int i = 0 , j = 0;
//     while(i < g.size() && j < s.size()){
//         if(s[j] >= g[i]){
//             content_children++;
//             i++;
//         }
//         j++;
//     }

//     return content_children;
// }