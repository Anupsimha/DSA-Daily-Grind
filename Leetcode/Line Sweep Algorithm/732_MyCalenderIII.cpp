// class MyCalendarThree {
// public:
//     map<int , int> mp;

//     MyCalendarThree() {
        
//     }
    
//     int book(int startTime, int endTime) {
//         mp[startTime]++;
//         mp[endTime]--;

//         int count = 0 , maxInter = 0;
//         for(auto it : mp){
//             count += it.second;
//             maxInter = max(maxInter , count);
//         }

//         return maxInter;
//     }
// };