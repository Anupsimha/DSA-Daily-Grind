// int isPossible(vector<int> &boards, int n , int mid){
//     int painterCount = 1;
//     int sumOfArea = 0;

//     for(int i = 0 ; i < n ; i++){
//         if(sumOfArea + boards[i] <= mid){
//             sumOfArea += boards[i];
//         }
//         else{
//             painterCount++;
//             sumOfArea = boards[i];
//         }
//     }

//     return painterCount;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int n = boards.size();

//     if(k > n)   return -1;

//     int s = *max_element(begin(boards) , end(boards));
//     int e = accumulate(begin(boards) , end(boards) , 0);
//     int ans = -1;

//     while(s <= e){
//         int mid = (s + e)/2;

//         if(isPossible(boards , n , mid) <= k){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//     }

//     return ans;
// }