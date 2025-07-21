// bool knows(vector<vector<int> >& mat , int a , int b , int n){
//     if(mat[a][b] == 1)
//         return true;
        
//     return false;
// }

// int celebrity(vector<vector<int> >& mat) {
//     // code here
//     int n = mat.size();
    
//     stack<int> s;
//     // step1 : push all elements in stack
//     for(int i = 0 ; i < n ; i++){
//         s.push(i);
//     }
    
//     while(s.size() > 1){
//         int a = s.top();
//         s.pop();
        
//         int b = s.top();
//         s.pop();
        
//         if(knows(mat , a , b , n)){
//             s.push(b);
//         }
//         else{
//             s.push(a);
//         }
//     }
//     int candidate = s.top();
    
//     //step3 : ssingle element in stack is potential celeb
//     // so verify it
    
//     for (int i = 0; i < n; i++) {
//         if (i != candidate) {
//             // celeb should not know anyone && everyone should know celeb
//             if (mat[i][candidate] == 0 || mat[candidate][i] == 1) {
//                 return -1; // Not a celebrity
//             }
//         }
//     }

//     return candidate;
    
// }