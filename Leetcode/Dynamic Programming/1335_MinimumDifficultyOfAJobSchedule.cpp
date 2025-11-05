// // Approach : Recursion

// int solve(vector<int>& jd , int n , int idx , int d){
//     // BASE CASE
//     // If there is only 1 day left, then you have to do all remaining jobs in that
//     // one day and find the max difficulty of that day and return it
//     if(d == 1){
//         int maxD = jd[idx];

//         for(int i = idx ; i < n ; i++){
//             maxD = max(maxD , jd[i]);
//         }

//         return maxD;
//     }

//     int maxD = jd[idx];
//     int finalResult = INT_MAX;

//     // Try one by one with all possibilty like with {idx} , {idx , idx + 1} , {idx , idx , idx + 1}
//     // Then find the optimal one among all the results
//     for(int i = idx ; i <= n - d ; i++){
//         maxD = max(maxD , jd[i]);

//         int result = maxD + solve(jd , n , i + 1 , d - 1);

//         finalResult = min(finalResult , result);
//     }

//     return finalResult;
// }

// int minDifficulty(vector<int>& jobDifficulty, int d) {
//     if(jobDifficulty.size() < d)    return -1;

//     int n = jobDifficulty.size();

//     return solve(jobDifficulty , n , 0 , d);
// }





// Approach : Recursion + Memoization

// int t[301][11];

// int solve(vector<int>& jd , int n , int idx , int d){
//     // BASE CASE
//     // If there is only 1 day left, then you have to do all remaining jobs in that
//     // one day and find the max difficulty of that day and return it
//     if(d == 1){
//         int maxD = jd[idx];

//         for(int i = idx ; i < n ; i++){
//             maxD = max(maxD , jd[i]);
//         }

//         return maxD;
//     }

//     if(t[idx][d] != -1)
//         return t[idx][d];

//     int maxD = jd[idx];
//     int finalResult = INT_MAX;

//     // Try one by one with all possibilty like with {idx} , {idx , idx + 1} , {idx , idx , idx + 1}
//     // Then find the optimal one among all the results
//     for(int i = idx ; i <= n - d ; i++){
//         maxD = max(maxD , jd[i]);

//         int result = maxD + solve(jd , n , i + 1 , d - 1);

//         finalResult = min(finalResult , result);
//     }

//     return t[idx][d] = finalResult;
// }

// int minDifficulty(vector<int>& jobDifficulty, int d) {
//     if(jobDifficulty.size() < d)    return -1;

//     int n = jobDifficulty.size();

//     memset(t , -1 , sizeof(t));

//     return solve(jobDifficulty , n , 0 , d);
// }