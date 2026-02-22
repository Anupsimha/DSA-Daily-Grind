// int maxArea(vector<int>& height) {
//     int n = height.size();

//     int maxArea = INT_MIN;
//     int s = 0 , e = n - 1;
//     while(s < e){
//         int minHeight = min(height[s] , height[e]);
//         int width = e - s;

//         maxArea = max(maxArea , width * minHeight);

//         if(height[s] < height[e])   s++;
//         else    e--;
//     }

//     return maxArea;
// }