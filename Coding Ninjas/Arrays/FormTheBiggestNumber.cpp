// int compare(string& a , string& b){
//     string ab = a + b;
//     string ba = b + a;

//     return ab.compare(ba) > 0 ? 1 : 0;
// }

// string greatestPossibleNumber(int *arr, int n) {
//     vector<string> v;
//     int countZeros = 0;

//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == 0) countZeros++;

//         v.push_back(to_string(arr[i]));
//     }

//     if(countZeros == n) return "0";

//     sort(begin(v) , end(v) , compare);

//     string ans = "";
//     for(string& num : v){
//         ans += num;
//     }

//     return ans;
// }