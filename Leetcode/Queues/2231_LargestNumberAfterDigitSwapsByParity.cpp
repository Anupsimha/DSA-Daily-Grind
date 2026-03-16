// int largestInteger(int num) {
//     priority_queue<int , vector<int>> evenPQ;
//     priority_queue<int , vector<int>> oddPQ;

//     string str = to_string(num);
//     for(char &ch : str){
//         int n = ch - '0';

//         if(n % 2 == 0)  evenPQ.push(n);
//         else    oddPQ.push(n);
//     }

//     string res = "";
//     for(char &ch : str){
//         int n = ch - '0';

//         if(n % 2 == 0){
//             res += to_string(evenPQ.top());
//             evenPQ.pop();
//         }
//         else{
//             res += to_string(oddPQ.top());
//             oddPQ.pop();
//         }
//     }

//     return stoi(res);
// }