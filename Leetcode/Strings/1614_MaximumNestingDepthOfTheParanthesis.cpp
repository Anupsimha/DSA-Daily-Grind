// int maxDepth(string s) {
//     int n = s.size();

//     int maxi = INT_MIN;
//     int count = 0;
//     for(char &ch : s){
//         if(ch == '('){
//             count++;
//         }
//         else if(ch == ')')
//             count--;

//         maxi = max(maxi , count);
//     }

//     return maxi;
// }