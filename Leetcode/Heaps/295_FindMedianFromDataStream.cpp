// priority_queue<int , vector<int>> left;
// priority_queue<int , vector<int> , greater<int>> right;

// MedianFinder() {    
// }

// void addNum(int num) {
//     left.push(num);
//     right.push(left.top());
//     left.pop();
//     if (right.size() > left.size()) {
//         left.push(right.top());
//         right.pop();
//     }
// }

// double findMedian() {
//     if (left.size() > right.size()) 
//         return left.top();      // Odd case: median is top of left.

//     return (left.top() + right.top()) / 2.0;    // Even case: average of both tops.
// }