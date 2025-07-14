// int canMakeBouq(vector<int> bloomDay, int mid, int k){
//     int bouq_count = 0;
//     int consecutive_bouq = 0;

//     for(int num : bloomDay){
//         if(num <= mid){
//             consecutive_bouq++;
//         }
//         else{
//             consecutive_bouq = 0;
//         }

//         if(consecutive_bouq == k){
//             bouq_count++;
//             consecutive_bouq = 0;
//         }
//     }

//     return bouq_count;
// }

// int minDays(vector<int>& bloomDay, int m, int k) {
//     int n = bloomDay.size();

//     int s = 0 , e = *max_element(begin(bloomDay) , end(bloomDay));
//     int minDay = -1;
//     while(s <= e){
//         int mid = (s + e)/2;

//         if(canMakeBouq(bloomDay , mid , k) >= m){
//             minDay = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//     }

//     return minDay;
// }