// vector<vector<int>> rectangles;
// vector<int> prefix;
// int totalCoord;

// Solution(vector<vector<int>>& rects) {
//     this->rectangles = rects;

//     totalCoord = 0;
//     for(int i = 0 ; i < rectangles.size() ; i++){
//         vector<int> rectangle = rectangles[i];

//         totalCoord += (rectangle[2] - rectangle[0] + 1) * (rectangle[3] - rectangle[1] + 1);
//         prefix.push_back(totalCoord);
//     }
// }

// vector<int> pick() {
//     int pt_idx = rand() % totalCoord;

//     int l = 0 , r = rectangles.size() - 1;
//     while(l < r){
//         int mid = l + (r - l)/2;
//         if(prefix[mid] <= pt_idx) l = mid + 1;
//         else    r = mid;
//     }

//     vector<int> rectangle = rectangles[l];
//     int x_pts = rectangle[2] - rectangle[0] + 1;
//     int y_pts = (rectangle[3] - rectangle[1] + 1);

//     int pts_in_rect = x_pts * y_pts;
//     int pt_start = prefix[l] - pts_in_rect;

//     int offset = (pt_idx - pt_start);
//     return {rectangle[0] + offset % x_pts , rectangle[1] + offset / x_pts};
// }