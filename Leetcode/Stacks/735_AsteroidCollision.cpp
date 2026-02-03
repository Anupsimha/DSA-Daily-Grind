// vector<int> asteroidCollision(vector<int>& asteroids) {
//     int n = asteroids.size();
//
//     stack<int> st;
//     vector<int> ans;
//
//     for (int asteroid : asteroids) {
//         bool destroyed = false;
//
//         while (!st.empty() && st.top() > 0 && asteroid < 0) {
//             if (abs(asteroid) > abs(st.top())) {
//                 st.pop();  // current survives, keep checking
//             } else if (abs(asteroid) == abs(st.top())) {
//                 st.pop();  // both destroyed
//                 destroyed = true;
//                 break;
//             } else {
//                 destroyed = true;  // current destroyed
//                 break;
//             }
//         }
//
//         if (!destroyed) {
//             st.push(asteroid);
//         }
//     }
//
//     while(st.size()){
//         ans.push_back(st.top());
//         st.pop();
//     }
//
//     reverse(ans.begin() , ans.end());
//
//     return ans;
// }