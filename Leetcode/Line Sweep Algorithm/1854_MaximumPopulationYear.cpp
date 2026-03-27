// Approach : Using Difference Array Technique

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






// Approach : Using Line Sweep Algorithm

// int maximumPopulation(vector<vector<int>>& logs) {
//     int n = logs.size();

//     vector<pair<int , int>> events;
//     for(auto &log : logs){
//         events.push_back({log[0] , +1});
//         events.push_back({log[1] , -1});
//     }

//     sort(begin(events) , end(events));

//     int currPop = 0 , maxPop = 0;
//     int minYear = 2050;
//     for(auto &e : events){
//         currPop += e.second;
//         if(currPop > maxPop){
//             maxPop = currPop;
//             minYear = e.first;
//         }
//     }

//     return minYear;
// }