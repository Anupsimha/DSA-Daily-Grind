// Brute Force Approach

// int bestClosingTime(string customers) {
//     int n = customers.size();

//     int minPenalty = INT_MAX;
//     int minHour = 0;

//     for(int closingHour = 0 ; closingHour <= n ; closingHour++){
//         int penalty = 0;
//         for(int i = 0 ; i < n ; i++){
//             if((i < closingHour && customers[i] == 'N') || (i >= closingHour && customers[i] == 'Y'))
//                 penalty++;
//         }

//         if(penalty < minPenalty){
//             minPenalty = penalty;
//             minHour = closingHour;
//         }
//     }

//     return minHour;
// }





// Approach : Using Prefix Array and Suffix Array
//Time Complexity : O(N)
//Space Complexity : O(N)

// int bestClosingTime(string customers) {
//     int n = customers.size();

//     vector<int> prefixN(n + 1 , 0);
//     vector<int> suffixY(n + 1 , 0);

//     for(int i = 1 ; i <= n ; i++){
//         if(customers[i - 1] == 'N')
//             prefixN[i] = prefixN[i - 1] + 1;
//         else
//             prefixN[i] = prefixN[i - 1];
//     }

//     for(int i = n - 1 ; i >= 0 ; i--){
//         if(customers[i] == 'Y')
//             suffixY[i] = suffixY[i + 1] + 1;
//         else
//             suffixY[i] = suffixY[i + 1];
//     }

//     int minPenalty = INT_MAX;
//     int minHour = INT_MAX;

//     for(int i = 0 ; i <= n ; i++){
//         int currPenalty = prefixN[i] + suffixY[i];

//         if(currPenalty < minPenalty){
//             minPenalty = currPenalty;
//             minHour = i;
//         }
//     }

//     return minHour;
// }




// Appraoch : Single Pass 
//Time Complexity : O(N)
//Space Complexity : O(1)

// int bestClosingTime(string customers) {
//     int n = customers.size();

//     int minHour = 0;
//     int penalty = count(begin(customers) , end(customers) , 'Y');

//     int minPenalty = penalty;
//     for(int i = 0 ; i < n ; i++){
//         if(customers[i] == 'Y')
//             penalty--;
//         else
//             penalty++;

//         if(penalty < minPenalty){
//             minPenalty = penalty;
//             minHour = i + 1;
//         }
//     }

//     return minHour;
// }