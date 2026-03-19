// Approach : Using Queue

// int countStudents(vector<int>& students, vector<int>& sandwiches) {
//     int n = students.size();

//     queue<int> stud;
//     queue<int> sandwi;
//     for(int i = 0 ; i < n ; i++){
//         stud.push(students[i]);
//         sandwi.push(sandwiches[i]);
//     }

//     int count = 0;

//     while(!stud.empty() && count < stud.size()) {
//         if(stud.front() == sandwi.front()) {
//             stud.pop();
//             sandwi.pop();
//             count = 0; 
//         } else {
//             stud.push(stud.front());
//             stud.pop();
//             count++;
//         }
//     }

//     return stud.size();
// }





// Approach : Greedy Algorithm

// int countStudents(vector<int>& students, vector<int>& sandwiches) {
//     int n = students.size();

//     vector<int> counts(2 , 0);
//     for(int student : students){
//         counts[student]++;
//     }

//     int remaining = n;
//     for(int sandwich : sandwiches){
//         if(counts[sandwich] == 0)   break;
//         if(remaining == 0)  break;

//         counts[sandwich]--;
//         remaining--;
//     }

//     return remaining;
// }