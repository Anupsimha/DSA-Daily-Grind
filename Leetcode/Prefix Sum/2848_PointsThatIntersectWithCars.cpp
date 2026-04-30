// int numberOfPoints(vector<vector<int>>& nums) {
//     int n = nums.size();

//     vector<int> coordinates(102 , 0);
//     for(vector<int> coord : nums){
//         coordinates[coord[0]]++;
//         coordinates[coord[1] + 1]--;
//     }

//     int cnt = 0;
//     for(int i = 1 ; i <= 101 ; i++){
//         coordinates[i] += coordinates[i - 1];

//         if(coordinates[i] > 0)  cnt++;
//     }

//     return cnt;
// }