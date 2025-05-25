// Appraoch : Using Two Pointers

// string removeStars(string s) 
// {
//     int n=s.length();
//     int j=0;
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]!='*')
//         {
//             s[j]=s[i];
//             j++;
//         }
//         else
//         {
//             j--;
//         }
//     }  
//     return s.substr(0,j);
// }



// Approach : Using Stacks

// string removeStars(string s) {
//     int n = s.size();

//     stack<char> st;

//     for(int i = 0 ; i < n ; i++){
//         if(!st.empty() && s[i] == '*'){
//             st.pop();
//         }
//         else if (s[i] != '*'){
//             st.push(s[i]);
//         }
//     }

//     string res = "";
//     while(!st.empty()){
//         res += st.top();
//         st.pop();
//     }

//     reverse(res.begin() , res.end());

//     return res;
// }