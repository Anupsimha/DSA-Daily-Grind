// int checkCapacity(vector<int> weights, int mid){
//     int no_of_days = 1;
//     int sum = 0;
//     for(int num : weights){
//         sum += num;
//
//         if(sum > mid){
//             no_of_days++;
//             sum = num;
//         }
//     }
//
//     return no_of_days;
// }
//
// int shipWithinDays(vector<int>& weights, int days) {
//     int n = weights.size();
//
//     int s = *max_element(begin(weights) , end(weights)) , e = 0;
//     for(int num : weights){
//         e += num;
//     }
//     int ans = INT_MAX;
//     while(s <= e){
//         int mid = (s + e)/2;
//
//         if(checkCapacity(weights , mid) <= days){
//             ans = min(ans , mid);
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//     }   
//
//     return ans;
// }