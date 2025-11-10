// Approach : Using Extra Space
// Time Complexity : O(N)

// vector<int> sortArrayByParity(vector<int>& nums) {
//     int n = nums.size();

//     vector<int> parity(n , 0);
//     int k = 0 ,i = 0 , j = n - 1;
//     while(k < n){
//         if(nums[k] % 2 == 1){
//             parity[j] = nums[k];
//             j--;
//         }
//         else{
//             parity[i] = nums[k];
//             i++;
//         }

//         k++;
//     }        

//     return parity;
// }





// Approach : Using Two Pointers (Optimal Approach)
// Time Complexity : O(N)

// vector<int> sortArrayByParity(vector<int>& nums) {
//     int n = nums.size();

//     int i = 0 , j = 0;
//     while(j < n){
//         if(nums[j] % 2 == 0){
//             swap(nums[j] , nums[i]);
//             i++;
//         }

//         j++;
//     }

//     return nums;
// }





// Approach : Using Sorting with Custom Comparator
// Time Complexity : O(N log N)

// static bool comparator(int &a , int &b){
//     return (a % 2) < (b % 2);

//     // or 

//     if((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1))
//         return a > b;

//     return a % 2 == 0;
// }

// vector<int> sortArrayByParity(vector<int>& nums) {
//     int n = nums.size();

//     sort(begin(nums) , end(nums) , comparator);

//     return nums;
// }

