// Approach : Using Hashmaps

// Time Complexity : O(1)
// Space Complexity : O(1)

// long long checkNum(int n){
//     long long sum = 0;

//     while(n != 0){
//         int digit = n % 10;
//         sum += digit * digit;
//         n /= 10;
//     }

//     return sum;
// }

// bool isHappy(int n) {
//     if(n == 1)  return true;
    
//     unordered_set<long long> st;

//     while(!st.count(n)){
//         st.insert(n);

//         long long num = checkNum(n);

//         if(num == 1)    return true;

//         n = num;
//     }

//     return false;
// }





// Approach : Using slow-fast pointers 

int getNext(int n) {
    int totalSum = 0;
    while (n > 0) {
        int d = n % 10;
        n = n / 10;
        totalSum += d * d;
    }
    return totalSum;
}

bool isHappy(int n) {
    int slow = n;
    int fast = getNext(n);

    while (fast != 1 && slow != fast) {
        slow = getNext(slow);           
        fast = getNext(getNext(fast)); 
    }

    return fast == 1;
}