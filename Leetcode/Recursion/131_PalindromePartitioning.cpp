// int n;

// bool isPalindrome(string&s , int st , int e){
//     while(st < e){
//         if(s[st] != s[e])   return false;

//         st++;
//         e--;
//     }
//     return true;
// }

// void backtrack(string& s , int idx , vector<string> curr , vector<vector<string>> &res){
//     if(idx == s.size()){
//         res.push_back(curr);
//         return ;
//     }
    
//     for(int i = idx ; i < n ; i++){
//         if(isPalindrome(s , idx , i)){
//             curr.push_back(s.substr(idx , i - idx + 1));
//             backtrack(s , i + 1 , curr , res);
//             curr.pop_back();
//         }
//     }
// }

// vector<vector<string>> partition(string s) {
//     n = s.size();

//     vector<vector<string>> res;
//     vector<string> curr;

//     backtrack(s , 0 , curr , res);

//     return res;
// }