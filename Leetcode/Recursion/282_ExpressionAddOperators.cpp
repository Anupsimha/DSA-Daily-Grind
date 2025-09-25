// typedef long long ll;
// int n;
// vector<char> operators{'*' , '+' , '-'};

// void solve(string num, int target , vector<string>& res , string output , ll currVal , ll last , int idx){
//     if(idx == n){
//         if(currVal == target)
//             res.push_back(output);
//         return ;
//     }

//     for(int i = idx ; i < n ; i++){
//         string part = num.substr(idx , i - idx + 1);

//         if(part.size() > 1 && part[0] == '0')
//             return ;

//         ll currNum = stoll(part);

//         if(idx == 0) {
//             solve(num , target , res , part, currNum , currNum , i + 1); 
//         } else {
//             solve(num , target , res , output + '+'+ part, currVal + currNum , currNum , i + 1);
//             solve(num , target , res , output + '-'+ part, currVal - currNum , -currNum , i + 1);
//             solve(num , target , res , output + '*' + part , currVal - last + last * currNum , last * currNum , i + 1);
//         }

//     }
// }

// vector<string> addOperators(string num, int target) {
//     n = num.size();

//     vector<string> res;
//     solve(num , target , res , "" , 0 , 0 , 0);

//     return res;
// }