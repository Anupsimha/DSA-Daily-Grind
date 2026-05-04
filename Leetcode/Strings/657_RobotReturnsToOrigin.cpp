// bool judgeCircle(string moves) {
//     int vertical = 0 , horizontal = 0;

//     for(char steps : moves){
//         if(steps == 'L' || steps == 'R')
//             vertical = (steps == 'L' ? vertical - 1 : vertical + 1);
//         else
//             horizontal = (steps == 'U' ? horizontal + 1 : horizontal - 1);
//     }

//     return !horizontal && !vertical;
// }