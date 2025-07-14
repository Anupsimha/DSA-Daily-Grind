//Appraoch 1 

// int trap(vector<int>& height) {
//     vector<int> left_max(height.size()) , right_max(height.size());
//
//     left_max[0] = height[0];
//     for(int i = 1 ; i < height.size() ; i++){
//         left_max[i] = max(left_max[i-1] , height[i]);
//     }
//
//     right_max[height.size() - 1] = height[height.size() - 1];
//     for(int i = height.size() - 2 ; i >= 0 ; i--){
//         right_max[i] = max(right_max[i+1] , height[i]);
//     }
//
//     int trapped_water = 0;
//     for(int i = 0 ; i < height.size() ; i++){
//         trapped_water += min(left_max[i] , right_max[i]) - height[i]; 
//     }
//
//     return trapped_water;
// }



//Approach 2 : Optimizing the above approach

// int trap(vector<int>& height) {
//     int n = height.size();
//
//     int leftmax = 0 , rightmax = 0 , total = 0;
//     int l = 0 , r = n - 1;
//     while(l <= r){
//         if(height[l] <= height[r]){
//             if(leftmax > height[l]) total += leftmax - height[l];
//             else    leftmax = height[l];
//             l++;
//         }
//         else{
//             if(rightmax > height[r]) total += rightmax - height[r];
//             else    rightmax = height[r];
//             r--;
//         }
//     }

//     return total;
// }