// Approach : Using Binary Search
// Time Complexity : O(log(min(M, N)))
// Space Complexity : O(1)

// int kthElement(vector<int> &a, vector<int> &b, int k) {
//     int m = a.size(), n = b.size();

//     // Ensure a is smaller for simpler binary search
//     if (m > n) return kthElement(b, a, k);

//     int low = max(0, k - n), high = min(k, m);

//     while (low <= high) {
//         int cutA = (low + high) / 2;
//         int cutB = k - cutA;

//         int leftA = (cutA == 0) ? INT_MIN : a[cutA - 1];
//         int leftB = (cutB == 0) ? INT_MIN : b[cutB - 1];

//         int rightA = (cutA == m) ? INT_MAX : a[cutA];
//         int rightB = (cutB == n) ? INT_MAX : b[cutB];

//         if (leftA <= rightB && leftB <= rightA) {
//             return max(leftA, leftB);  // k-th element
//         } 
//         else if (leftA > rightB) {
//             high = cutA - 1;  // move left
//         } 
//         else {
//             low = cutA + 1;   // move right
//         }
//     }
//     return -1;
// }



// Approach 2 : Using Merge Sort
// Time Complexity : O(M + N)
// Space Complexity : O(M + N)

// int kthElement(vector<int> &a, vector<int> &b, int k) {
//     int m = a.size();
//     int n = b.size();
    
//     vector<int> c(m + n , 0);
//     int startIdx = 0;
//     int aIdx = 0 , bIdx = 0;
//     while(aIdx < m && bIdx < n){
//         if(a[aIdx] < b[bIdx]){
//             c[startIdx++] = a[aIdx++];
//         }
//         else{
//             c[startIdx++] = b[bIdx++];
//         }
//     }
    
//     while(aIdx < m)
//         c[startIdx++] = a[aIdx++];
    
//     while(bIdx < n)
//         c[startIdx++] = b[bIdx++];
        
//     return c[k - 1];
// }