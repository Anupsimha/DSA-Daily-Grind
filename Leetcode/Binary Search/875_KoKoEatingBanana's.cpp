// long long check(vector<int>& piles, int mid, int n, int h){
//     long long count = 0;
//     for(int i = 0; i < n; i++){
//         count += (piles[i] + mid - 1) / mid;  // ceiling division
//     }
//     return count <= h;
// }
//
// int minEatingSpeed(vector<int>& piles, int h) {
//     int n = piles.size();
//
//     int maxi = INT_MIN;
//     for(int i = 0 ; i < n ; i++){
//         maxi = max(maxi , piles[i]);
//     }
//
//     int s = 1 , e = maxi;
//     int ans = 0;
//     while(s <= e){
//         int mid = (s + e)/2;
//
//         if(check(piles , mid , n , h) == 1){
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//             s = mid + 1;
//     }
//
//     return ans;
// }




// Similar Approach

// bool isPossible(vector<int> piles , int mid , int h){
//     int time_taken = 0;

//     for(int &t : piles){
//         time_taken += t/mid;

//         if(t%mid != 0)
//             time_taken++;
//     }

//     return time_taken <= h;
// }

// int minEatingSpeed(vector<int>& piles, int h) {
//     int n = piles.size();

//     int s = 1 , e = *max_element(begin(piles) , end(piles));
//     while(s < e){
//         int mid = s + (e-s)/2;

//         if(isPossible(piles , mid , h)){
//             e = mid;
//         }
//         else{
//             s = mid + 1;
//         }
//     }
    
//     return s;
// }