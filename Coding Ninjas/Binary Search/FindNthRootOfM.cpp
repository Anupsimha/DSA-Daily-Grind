// int func(int mid,int n,int m){
//   long long ans= 1;
//
//   for(int i=1;i<=n;i++){
//     if(ans*mid>m) 
//       return 0;
//     ans = ans * mid;
//   }
//
//   if(ans == m){
//     return 1;
//   }
//
//   return 2;
// }
//
// int NthRoot(int n, int m) {
//   int s = 1;
//   int e = m;
//
//   while(s <= e){
//     int mid = (s+e)/2;
//     int val = func(mid, n, m);
//
//     if(val==1){
//       return mid;
//     }else if(val == 0){
//       e = mid - 1;
//     }else{ 
//       s = mid + 1; 
//     }
//   }
//
//   return -1;
// }