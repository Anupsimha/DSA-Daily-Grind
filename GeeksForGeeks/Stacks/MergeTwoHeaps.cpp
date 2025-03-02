// void heapify(vector<int> &arr , int size , int index){
//     int largest = index;
//     int left = index * 2 + 1;
//     int right = index * 2 + 2;
    
//     if(left < size && arr[largest] < arr[left]){
//         largest = left;
//     }
//     if(right < size && arr[largest] < arr[right]){
//         largest = right;
//     }
    
//     if(largest != index){
//         swap(arr[index] , arr[largest]);
//         heapify(arr , size , largest);
//     }
// }

// vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
//     // vector<int> c = a;
//     // c.insert(c.end() , b.begin() , b.end());
    
//     vector<int> c;
//     for(auto i : a)
//         c.push_back(i);
//     for(auto i : b)
//         c.push_back(i);
    
//     int size = c.size();
//     for(int i = size / 2 - 1 ; i >= 0 ; i--){
//         heapify(c , size , i);
//     }
    
//     return c;
// }