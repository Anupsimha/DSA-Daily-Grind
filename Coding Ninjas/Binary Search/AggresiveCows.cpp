// bool isPossible(vector<int> stalls, int mid , int k , int n){
// int cowCount = 1;
// int lastPos = stalls[0];

// for(int i = 0 ; i < n ; i++){
//     if(stalls[i] - lastPos >= mid){
//         cowCount++;
//         if(cowCount == k)
//             return true;
//         lastPos = stalls[i];
//     }
// }
//
// return false;
// }
//
// int aggressiveCows(vector<int> &stalls, int k)
// {
// sort(begin(stalls) , end(stalls));
//
// int n = stalls.size();
//
// int s = 0;
// int e = *max_element(begin(stalls) , end(stalls));
// int ans = -1;
//
// while(s <= e){
//     int mid = (s + e)/2;
//
//     if(isPossible(stalls , mid , k , n)){
//         ans = mid;
//         s = mid + 1;
//     }
//     else{
//         e = mid - 1;
//     }
// }
//
// return ans;
// }