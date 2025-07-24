// class LFUCache {
// public:
//     int cap;
//     int size;

//     unordered_map<int , list<vector<int>>::iterator> mp;    // key -> address of the vector
//     map<int , list<vector<int>>> freq;  // counter -> {key , value , counter}

//     LFUCache(int capacity) {
//         cap = capacity;
//         size = 0;
//     }
    
//     void makeMostFrequentlyUsed(int key){
//         auto &vec = *(mp[key]);

//         int value = vec[1];
//         int f = vec[2];

//         freq[f].erase(mp[key]); //Erase the key from the frequency and the .erase() will look                             
//                                 //  after the pointer adjustment's and all. So, no need to add *mp[key].

//         if(freq[f].empty())
//             freq.erase(f);

//         f++;

//         freq[f].push_front({key , value , f});

//         mp[key] = freq[f].begin();
//     }

//     int get(int key) {
//         if(mp.find(key) == mp.end())
//             return -1;

//         auto vec = (*(mp[key]));    // mp[key] returns the address of vec stored in freq.

//         int value = vec[1];

//         // update the freq
//         makeMostFrequentlyUsed(key);

//         return value;
//     }
    
//     void put(int key, int value) {
//         if(cap == 0)    return ;

//         if(mp.find(key) != mp.end()){
//             auto &vec = (*mp[key]);

//             vec[1] = value;

//             makeMostFrequentlyUsed(key);
//         }
//         else if (size < cap) {
//             size++;
//             //Fresh candidate
//             freq[1].push_front(vector<int>({key , value , 1}));
//             mp[key] = freq[1].begin();
//         }
//         else{
//             // time to remove LFU , or LRU when there is a tie
//             auto &which_list = freq.begin()->second;

//             int key_to_delete = (which_list.back())[0];

//             which_list.pop_back();

//             if(which_list.empty()){
//                 freq.erase(freq.begin()->first);
//             }

//             freq[1].push_front(vector<int>({key , value , 1}));

//             mp.erase(key_to_delete);
//             mp[key] = freq[1].begin();
//         }
//     }
// };