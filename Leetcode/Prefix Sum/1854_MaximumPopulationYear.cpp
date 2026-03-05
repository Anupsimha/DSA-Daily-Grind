// int maximumPopulation(vector<vector<int>>& logs) {
//     int n = logs.size();

//     vector<int> pop(3000);
//     for(vector<int> log : logs){
//         pop[log[0]]++;
//         pop[log[1]]--;
//     }

//     int maxiPop = 0;
//     int earliestYear = 0;
//     for(int i = 1950 ; i <= 2500 ; i++){
//         pop[i] += pop[i - 1];

//         if(pop[i] > maxiPop){
//             maxiPop = pop[i];
//             earliestYear = i;
//         }
//     }

//     return earliestYear;
// }