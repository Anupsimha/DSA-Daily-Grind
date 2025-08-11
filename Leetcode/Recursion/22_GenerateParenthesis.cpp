// Most Optimal Approach

// class Solution {
// public:
//     vector<string> result;

//     void solve(string &curr , int n , int open , int close){
//         if(curr.length() == 2 * n){
//             result.push_back(curr);
//             return ;
//         }

//         if(open < n){
//             curr.push_back('(');
//             solve(curr , n , open + 1 , close);              // open++ doesn't work because open get's keep on adding
//             curr.pop_back();
//         }
//         if(close < open){
//             curr.push_back(')');
//             solve(curr , n , open , close + 1);              // close++ doesn't work because close get's keep on adding
//             curr.pop_back();
//         }
//     }

//     vector<string> generateParenthesis(int n) {
//         string curr = "";

//         int open = 0;
//         int close = 0;

//         solve(curr , n , open , close);

//         return result;
//     }
// };




// Approach 1

// class Solution {
// public:
//     vector<string> result;

//     bool isValid(string &curr){
//         int count = 0;
//         for(char &ch : curr){
//             if(ch == '(')
//                 count++;
//             else
//                 count--;

//             if(count < 0)
//                 return false;
//         }

//         return count == 0;
//     }

//     void solve(string &curr , int n){
//         if(curr.length() == 2 * n){
//             if(isValid(curr)){
//                 result.push_back(curr);
//             }
//             return ;
//         }

//         curr.push_back('(');
//         solve(curr , n);
//         curr.pop_back();
//         curr.push_back(')');
//         solve(curr , n);
//         curr.pop_back();
//     }

//     vector<string> generateParenthesis(int n) {
//         string curr = "";

//         solve(curr , n);

//         return result;
//     }
// };



