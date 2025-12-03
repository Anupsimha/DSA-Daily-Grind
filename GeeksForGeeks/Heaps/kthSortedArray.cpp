// Approach using Min Heap

// string isKSortedArray(int arr[], int n, int k) {
//     int count=0;
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    
//     for(int i=0;i<n;i++){
//         pq.push({arr[i],i});
//     }
    
//     bool f=true;
//     while(!pq.empty()){
//         pair<int,int> s= pq.top();
//         pq.pop();
//         if(abs(s.second - count) > k){
//             f=false;
//             break;
//         }
//         count++;
//     }
    
//     if(f)
//         return "Yes";
        
//     return "No";
// }



// Approach 1

// string isKSortedArray(int arr[], int n, int k) {
//     vector<int> sorted(arr, arr + n);

//     sort(sorted.begin(), sorted.end());

//     unordered_map<int, queue<int>> indexMap;

//     for(int i = 0; i < n; i++) {
//         indexMap[sorted[i]].push(i);
//     }

//     for(int i = 0; i < n; i++) {
//         int originalIndex = i;
//         int sortedIndex = indexMap[arr[i]].front();
//         indexMap[arr[i]].pop();

//         if(abs(sortedIndex - originalIndex) > k)
//             return "No";
//     }

//     return "Yes";
// }



// Approach 2 Better Approach

// string isKSortedArray(int arr[], int n, int k) {
//     vector<pair<int,int>>ans;
//     for(int i=0;i<n;i++){
//         ans.push_back({arr[i],i});
//     }
        
//     sort(ans.begin(),ans.end());
//     for(int i=0;i<n;i++){
//         if(abs(i-ans[i].second)>k) return "No";
//     }
        
//         return "Yes";
// }