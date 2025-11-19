// Approach : Recursion

// int n;

// static bool comparator(string &a , string &b){
//     return a.size() < b.size();
// }

// bool isPred(string &prev , string &curr){
//     int M = prev.size();
//     int N = curr.size();

//     if(M >= N || N - M != 1)
//         return false;

//     int i = 0 , j =0;
//     while(i < M && j < N){
//         if(prev[i] == curr[j])
//             i++;

//         j++;
//     }

//     return i == M;
// }

// int solve(vector<string>& words , int prev , int curr){
//     if(curr == n)
//         return 0;

//     int take = 0 , skip;

//     if(prev == -1 || isPred(words[prev] , words[curr]))
//         take = 1 + solve(words , curr , curr + 1);

//     skip = solve(words , prev , curr + 1);

//     return max(take , skip);
// }

// int longestStrChain(vector<string>& words) {
//     n = words.size();

//     sort(begin(words) , end(words) , comparator);

//     return solve(words , -1 , 0);
// }




// Approach : Memoization
// Time Complexity : O(N^2)

// int n;

// static bool comparator(string &a , string &b){
//     return a.size() < b.size();
// }

// bool isPred(string &prev , string &curr){
//     int M = prev.size();
//     int N = curr.size();

//     if(M >= N || N - M != 1)
//         return false;

//     int i = 0 , j =0;
//     while(i < M && j < N){
//         if(prev[i] == curr[j])
//             i++;

//         j++;
//     }

//     return i == M;
// }

// int solve(vector<string>& words , int prev , int curr , vector<vector<int>>& dp){
//     if(curr == n)
//         return 0;

//     if(prev != -1 && dp[curr][prev] != -1)
//         return dp[curr][prev];

//     int take = 0 , skip;

//     if(prev == -1 || isPred(words[prev] , words[curr]))
//         take = 1 + solve(words , curr , curr + 1 , dp);

//     skip = solve(words , prev , curr + 1 , dp);

//     if(prev != -1)
//         return dp[curr][prev] = max(take , skip);

//     return max(take , skip);
// }

// int longestStrChain(vector<string>& words) {
//     n = words.size();

//     vector<vector<int>> dp(n + 1 , vector<int>(n + 1 , -1));

//     sort(begin(words) , end(words) , comparator);

//     return solve(words , -1 , 0 , dp);
// }