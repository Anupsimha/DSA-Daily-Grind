// You are given:
// A list of strings words
// A reference string ref
// Your task is to:
// Compute the Levenshtein distance (Edit Distance) between ref and each string in words
// Find the minimum distance
// If multiple strings have the same minimum distance, return the string that comes first in lexicographical order

// Levenshtein Distance Definition
// The Levenshtein distance between two strings is the minimum number of operations required to convert one string into another, where allowed operations are:
// Insert a character
// Delete a character
// Replace a character




// #include <bits/stdc++.h>
// using namespace std;

// int solve(int i, int j, const string& a, const string& b, vector<vector<int>>& dp) {

//     // Base cases
//     if (i == a.size()) return b.size() - j;
//     if (j == b.size()) return a.size() - i;

//     if (dp[i][j] != -1) return dp[i][j];

//     // If characters match
//     if (a[i] == b[j]) {
//         return dp[i][j] = solve(i + 1, j + 1, a, b, dp);
//     }

//     // Operations
//     int del = solve(i + 1, j, a, b, dp);       // delete
//     int ins = solve(i, j + 1, a, b, dp);       // insert
//     int rep = solve(i + 1, j + 1, a, b, dp);   // replace

//     return dp[i][j] = 1 + min({del, ins, rep});
// }

// int editDistance(const string& a, const string& b) {
//     vector<vector<int>> dp(a.size(), vector<int>(b.size(), -1));
//     return solve(0, 0, a, b, dp);
// }
