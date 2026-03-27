// class MyCalendar {
// public:
//     set<pair<int , int>> st;

//     MyCalendar() {
        
//     }
    
//     bool book(int startTime, int endTime) {
//         // Find the first event thatt starts after or at the same time of {start , end}
//         auto it = st.lower_bound({startTime , endTime});

//         // Check if the current event overlaps with the next event
//         if(it != st.end() && it->first < endTime)
//             return false; 
            
//         // Check if the current event overlaps with the previous event
//         if(it != st.begin()){
//             auto prevIt = prev(it);
//             if(startTime < prevIt->second)
//                 return false;
//         }

//         st.insert({startTime , endTime});
//         return true;
//     }
// };