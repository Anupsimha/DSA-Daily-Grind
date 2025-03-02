//My approach

// int getKthLargest(vector<int> &arr, int k)
// {
// 	int n = arr.size();

// 	vector<int> sum_sub;

// 	for(int i = 0 ; i < n ; i++){
// 		sum_sub.push_back(arr[i]);
// 		int sum = arr[i];
// 		for(int j = i + 1 ; j < n ; j++){
// 			sum += arr[j];
// 			sum_sub.push_back(sum);
// 		}
// 	}

// 	priority_queue<int , vector<int> , greater<int>> pq;
// 	for(int i = 0 ; i < k ; i++){
// 		pq.push(sum_sub[i]);
// 	}

// 	for(int i = k ; i < sum_sub.size() ; i++){
// 		if(sum_sub[i] > pq.top()){
// 			pq.pop();
// 			pq.push(sum_sub[i]);
// 		}
// 	}

// 	int ans = pq.top();
// 	return ans;
// }




// Approach 1 - Through Sorting

// int getKthLargest(vector<int> &arr, int k)
// {
// 	int n = arr.size();

// 	vector<int> sum_sub;

// 	for(int i = 0 ; i < n ; i++){
// 		sum_sub.push_back(arr[i]);
// 		int sum = arr[i];
// 		for(int j = i + 1 ; j < n ; j++){
// 			sum += arr[j];
// 			sum_sub.push_back(sum);
// 		}
// 	}

// 	sort(sum_sub.begin() , sum_sub.end());

// 	return sum_sub[sum_sub.size() - k];
// }



// Approach 2 - 

