// Approach : Brute Force using vector
// Time Complexity : O(n) for both get and put operations
//
// class LRUCache {
// public:
//     vector<pair<int , int>> cache;
//     int n;
//
//     LRUCache(int capacity) {
//         n = capacity;
//     }
//    
//     int get(int key) {
//         for(int i = 0 ; i < cache.size() ; i++){
//             if(cache[i].first == key){
//                 int val = cache[i].second;
//                 pair<int , int> temp = cache[i];
//
//                 cache.erase(begin(cache) + i);
//                 cache.push_back(temp);
//
//                 return val;
//             }
//         }
//
//         return -1;
//     }
//
//     void put(int key, int value) {
//         for(int i = 0 ; i < cache.size() ; i++){
//             if(cache[i].first == key){
//                 cache.erase(begin(cache) + i);
//                 cache.push_back({key , value});
//                 return ;
//             }
//         }
//  
//         if(cache.size() == n){
//             cache.erase(begin(cache));
//             cache.push_back({key , value});
//         }
//         else{
//             cache.push_back({key , value});
//         }
//     }
// };




// Approach : Using map and Double Linked List
// Time Complexity : O(1) for both get and put operations
//
// class LRUCache {
// public:
//     list<int> dll;  // Key
//     map<int , pair<list<int>::iterator , int>> mp;   // map <key , <address , value>> ->data type of dll address is list<int>::iterator
//     int n;
//
//     LRUCache(int capacity) {
//         n = capacity;
//     }
//
//     void makeRecentlyUsed(int key){
//         dll.erase(mp[key].first);
//
//         dll.push_front(key);
//
//         mp[key].first = dll.begin();
//     }
//    
//     int get(int key) {
//         if(mp.find(key) == mp.end())
//             return -1;
//
//         makeRecentlyUsed(key);
//
//         return mp[key].second;
//     }
//    
//     void put(int key, int value) {
//         if(mp.find(key) != mp.end()){
//             mp[key].second = value;
//             makeRecentlyUsed(key);
//         }
//         else{
//             dll.push_front(key);
//             mp[key] = {dll.begin() , value};
//             n--;
//         }
//
//         if(n < 0){
//             int key_to_delete = dll.back();
//             mp.erase(key_to_delete);
//
//             dll.pop_back();
//             n++;
//         }
//     }
// };