// Brute Force Approach

// int totalFruit(vector<int>& fruits) {
//     int n = fruits.size();

//     int maxFruits = 0;
//     for(int i = 0 ; i < n ; i++){
//         set<int> st;
//         st.insert(fruits[i]);
//         int j = i + 1;
//         for( ; j < n ; j++){
//             st.insert(fruits[j]);
//             if(st.size() > 2)
//                 break;
//         }
//         maxFruits = max(maxFruits , j - i);
//     }   

//     return maxFruits;
// }




// Approach : Using two pointer approach + sliding window

// int totalFruit(vector<int>& fruits) {
//     int n = fruits.size();

//     int maxFruits = 0;
//     int i = 0 , j = 0;
//     unordered_map<int , int> mp;
//     while(i < n && j < n){
//         mp[fruits[j]]++;

//         if(mp.size() > 2){
//             while(mp.size() > 2){
//                 mp[fruits[i]]--;
//                 if(mp[fruits[i]] == 0)
//                     mp.erase(fruits[i]);
//                 i++;
//             }
//         }

//         if(mp.size() <= 2)
//             maxFruits = max(maxFruits , j - i + 1);

//         j++;
//     }

//     return maxFruits;
// }



// Approach : Most optimal Appraoch

// int totalFruit(vector<int>& fruits) {
//     int lastFruit = -1, secondLastFruit = -1;
//     int lastFruitCount = 0;
//     int currentMax = 0, maxFruits = 0;

//     for (int fruit : fruits) {
//         if (fruit == lastFruit || fruit == secondLastFruit) {
//             currentMax++;
//         } else {
//             currentMax = lastFruitCount + 1;  // only lastFruit in the previous sequence + current one
//         }

//         if (fruit == lastFruit) {
//             lastFruitCount++;
//         } else {
//             lastFruitCount = 1;
//             secondLastFruit = lastFruit;
//             lastFruit = fruit;
//         }

//         maxFruits = max(maxFruits, currentMax);
//     }

//     return maxFruits;
// }