//APPROACH 1

// int kSorted(vector<vector<int>> &a, int k, int n) {
//     int mini = INT_MAX, maxi = INT_MIN;
//     vector<int*> ptr(k); // Array of pointers referencing the first element of each list
//
//     // Initialize pointers and track min & max values
//     for (int i = 0; i < k; i++) {
//         ptr[i] = &a[i][0]; // Point to the first element of each list
//         mini = min(mini, *ptr[i]);
//         maxi = max(maxi, *ptr[i]);
//     }
//
//     int start = mini, end = maxi;
//
//     while (true) {
//         int minIndex = -1;
//         mini = INT_MAX;
//
//         // Find the pointer with the smallest value
//         for (int i = 0; i < k; i++) {
//             if (ptr[i] < &a[i][n] && *ptr[i] < mini) {
//                 mini = *ptr[i];
//                 minIndex = i;
//             }
//         }
//
//         // Update range if found smaller
//         if (maxi - mini < end - start) {
//             start = mini;
//             end = maxi;
//         }
//
//         // Move the pointer of the list containing the smallest element
//         if (ptr[minIndex] < &a[minIndex][n - 1]) {
//             ptr[minIndex]++; // Move the pointer forward
//             maxi = max(maxi, *ptr[minIndex]); // Update maximum
//         } else {
//             break; // If any list is exhausted, stop
//         }
//     }
//
//     return end - start + 1;
// }




//APPROACH 2 - More Optimsed Solution

// class node{
//     public:
//         int data;
//         int row;
//         int col;
//         node(int data , int row , int col){
//             this->data = data;
//             this->row = row;
//             this->col = col;
//         }
// };

// class compare{
//     public:
//         bool operator()(node* a , node* b){
//             return a->data > b->data;
//         }
// };

// int kSorted(vector<vector<int>> &a, int k, int n) {
//     int mini = INT_MAX , maxi = INT_MIN;
//     priority_queue<node* , vector<node*> , compare> minHeap;
//
//     for(int i = 0 ; i < k ; i++){
//         int element = a[i][0];
//         mini = min(mini , element);
//         maxi = max(maxi , element);
//         minHeap.push(new node(element , i , 0));
//     }
//
//     int start = mini , end = maxi;
//
//     while(minHeap.size() > 0){
//         node* temp = minHeap.top();
//         minHeap.pop();
//
//         mini = temp->data;
//
//         if(maxi - mini < end - start){
//             start = mini;
//             end = maxi;
//         }
//
//         if(temp->col + 1 < n){
//             maxi = max(maxi , a[temp->row][temp->col + 1]);
//             minHeap.push(new node(a[temp->row][temp->col + 1] , temp->row , temp->col + 1));
//         }
//         else{
//             break;
//         }
//     }
//
//     return end - start + 1;
// }