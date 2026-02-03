// This is for array containing positive, negative and zero elements

// int longestSubarray(vector<int>& arr, int k) {
//     int n=arr.size();
//     map<int,int> premap;
//     int sum=0;
//     int mlen=0;
//    
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//    
//         if(sum==k){
//             mlen=max(mlen,i+1);
//         }
//         int rem=sum-k;
//        
//         if(premap.find(rem) != premap.end()){
//             int len = i - premap[rem];
//             mlen=max(len,mlen);
//         }
//        
//         if(premap.find(sum)==premap.end()){
//             premap[sum] = i;
//         }
//     }
//    
//     return mlen;
// }