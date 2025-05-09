// My Approach

// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
// {
//     priority_queue<int , vector<int> , greater<int>> pq;
//     for(int i = 0 ; i < kArrays.size() ; i++){
//         for(int j = 0 ; j< kArrays[i].size() ; j++){
//             pq.push(kArrays[i][j]);
//         }
//     }
//     vector<int> ans;
//     while (!pq.empty()) {
//         ans.push_back(pq.top());
//         pq.pop();
//     }
//     return ans;
// }




// Appraoch 1 - Most Optimal Approach

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

// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
// {    
//     priority_queue<node* , vector<node*> , compare> minHeap;
//     for(int i = 0 ; i < k ; i++){
//         node* temp = new node(kArrays[i][0] , i , 0);
//         minHeap.push(temp);
//     }
//     vector<int> ans;
//     while(minHeap.size() > 0){
//         node* temp = minHeap.top();
//         ans.push_back(temp->data);
//         minHeap.pop();
//         int i = temp->row;
//         int j = temp->col;
//         if(j+1 < kArrays[i].size()){
//             node* next = new node(kArrays[i][j+1] , i , j+1);
//             minHeap.push(next);
//         }
//     }
//     return ans;
// }