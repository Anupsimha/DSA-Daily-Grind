// void solve(vector<int> &arr , string output , int index , vector<string> &res , string keypad[]){
//     if(index >= arr.size()){
//         res.push_back(output);
//         return ;
//     }
    
//     int num = arr[index];
    
//     string val = keypad[num];
    
//     if (val.empty()) {                
//         solve(arr, output, index + 1, res, keypad);
//         return;
//     }
    
//     for(int i = 0 ; i < val.length() ; i++){
//         output.push_back(val[i]);
//         solve(arr , output , index + 1 , res , keypad);
//         output.pop_back();
//     }
    
// }

// vector<string> possibleWords(vector<int> &arr) {
//     string keypad[10] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
    
//     vector<string> res;
    
//     string output;
    
//     solve(arr , output , 0 , res , keypad);
    
//     return res;
// }