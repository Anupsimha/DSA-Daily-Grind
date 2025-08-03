// Approach using a frequency map to count occurrences of each card

// bool isNStraightHand(vector<int>& hand, int groupSize) {
//     int n = hand.size();

//     if(n % groupSize != 0)
//         return false;

//     map<int , int> mp;
//     for(int i = 0 ; i < n ; i++){
//         mp[hand[i]]++;
//     }

//     while(!mp.empty()){
//         int curr = mp.begin()->first;
//         for(int i = 0 ; i < groupSize ; i++){
//             if(mp[curr + i] == 0)
//                 return false;

//             mp[curr + i]--;
//             if(mp[curr + i] < 1){
//                 mp.erase(curr + i);
//             }
//         }
//     }

//     return true;
// }




// Appraoch using a min-heap to manage the smallest card in the hand

// bool isNStraightHand(vector<int>& hand, int groupSize) {
//         int n = hand.size();

//         if (hand.size() % groupSize != 0) return false;

//         // Step 1: Frequency map
//         map<int, int> freq;
//         for (int card : hand) {
//             freq[card]++;
//         }

//         // Step 2: Min heap of unique cards
//         priority_queue<int, vector<int>, greater<int>> minHeap;
//         for (auto& pair : freq) {
//             minHeap.push(pair.first);
//         }

//         // Step 3: Try to build groups
//         while (!minHeap.empty()) {
//             int first = minHeap.top(); // Start of the current group

//             // Try to form a group starting from 'first'
//             for (int i = 0; i < groupSize; i++) {
//                 int currCard = first + i;

//                 if (freq[currCard] == 0)
//                     return false;

//                 freq[currCard]--;

//                 // If no more of currCard left, remove it from heap
//                 if (freq[currCard] == 0 && currCard == minHeap.top()) {
//                     minHeap.pop();
//                 }
//             }
//         }

//         return true;
//     }