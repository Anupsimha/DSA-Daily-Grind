// class MyCalendarTwo {
// public:
//     map<int , int> events;

//     MyCalendarTwo() {
        
//     }
    
//     bool book(int startTime, int endTime) {
//         events[startTime]++;
//         events[endTime]--;

//         int totalEvent = 0;
//         for(auto &event : events){
//             totalEvent += event.second;

//             if(totalEvent > 2){
//                 events[startTime] -= 1;
//                 events[endTime] += 1;
//                 return false;
//             }
//         }

//         return true;
//     }
// };
