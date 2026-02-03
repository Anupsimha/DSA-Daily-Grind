// You are given a 2D integer matrix games of size m × n and a list of q query rows, each of length n.
// For each query, determine how many rows in the matrix exactly match the query row.
// Two rows are considered a match only if all corresponding elements are equal.



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int m, n;
//     cin >> m >> n;

//     unordered_map<string, int> freq;

//     for (int i = 0; i < m; i++) {
//         string key = "";
//         for (int j = 0; j < n; j++) {
//             int x;
//             cin >> x;
//             key += to_string(x) + ",";
//         }
//         freq[key]++;
//     }

//     int q;
//     cin >> q;

//     while (q--) {
//         string key = "";
//         for (int j = 0; j < n; j++) {
//             int x;
//             cin >> x;
//             key += to_string(x) + ",";
//         }
//         cout << freq[key] << endl;
//     }

//     return 0;
// }
