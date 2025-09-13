// vector<string> res;

// void binaryStringRecur(int num , string &ans , int i){
//     if(i > 0 && ans.back() == '1' && ans[ans.size() - 2] == '1')
//         return ;
    
//     if(ans.size() == num){
//         res.push_back(ans);
//         return ;
//     }
    
//     ans.push_back('0');
//     binaryStringRecur(num , ans , i + 1);
//     ans.pop_back();
    
    
//     ans.push_back('1');
//     binaryStringRecur(num , ans , i + 1);
//     ans.pop_back();
// }

// vector<string> generateBinaryStrings(int num) {
//     string ans = "";
    
//     binaryStringRecur(num , ans , 0);
    
//     return res;
// }