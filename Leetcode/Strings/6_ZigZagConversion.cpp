// string convert(string s, int numRows) {
//     if (numRows == 1 || numRows >= s.length())
//         return s;
    
//     vector<string> row(numRows);
//     int currRow = 0;
//     bool isGoingDown = false;

//     for(char &c : s){
//         row[currRow] += c;

//         if(currRow == 0 || currRow == numRows - 1)
//             isGoingDown = !isGoingDown;

//         currRow += isGoingDown ? 1 : -1;
//     }

//     string res = "";

//     for(string &st : row){
//         res += st;
//     }
    
//     return res;
// }