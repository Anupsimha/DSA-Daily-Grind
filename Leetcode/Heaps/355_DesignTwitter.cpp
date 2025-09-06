// class tweet{
// public:
//     int id;
//     int count;

//     tweet(int id , int count){
//         this->id = id;
//         this->count = count;
//     }
// };

// class comp{
// public:
//     bool operator()(tweet* a , tweet* b){
//         return a->count > b->count;
//     }
// };

// class Twitter {
// private:
//     int count;
// public:
//     unordered_map<int , vector<tweet*>> Tweets;
//     unordered_map<int , vector<int>> followers;

//     Twitter() {
//         this->count = 0;
//     }
    
//     void postTweet(int userId, int tweetId) {
//         tweet* t = new tweet(tweetId , count++);
//         Tweets[userId].push_back(t);
//         return ;
//     }
    
//     vector<int> getNewsFeed(int userId) {
//         priority_queue<tweet* , vector<tweet*> , comp> pq;

//         for(const auto &i : Tweets[userId]){
//             pq.push(i);
//             if(pq.size() > 10)
//                 pq.pop();
//         }

//         for(const auto &i : followers[userId]){
//             for(auto j : Tweets[i]){
//                 pq.push(j);
//                 if(pq.size() > 10)
//                     pq.pop();
//             }
//         }

//         vector<int> ans;
//         while(!pq.empty()){
//             tweet* t = pq.top();
//             ans.push_back(t->id);
//             pq.pop();
//         }

//         reverse(ans.begin() , ans.end());
//         return ans;
//     }
    
//     void follow(int followerId, int followeeId) {
//         auto i = find(followers[followerId].begin() , followers[followerId].end() , followeeId);
//         if(i == followers[followerId].end())
//             followers[followerId].push_back(followeeId);
//         return ;
//     }
    
//     void unfollow(int followerId, int followeeId) {
//         auto i = find(followers[followerId].begin() , followers[followerId].end() , followeeId);
//         if(i != followers[followerId].end())
//             followers[followerId].erase(i);
//         return ;
//     }
// };