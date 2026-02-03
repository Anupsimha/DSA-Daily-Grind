// Problem Description
// You are given a string consisting of:
// 'S' → a student occupies the position
// '.' → the position is vacant
// A device can be placed only on a vacant position (.) and can serve adjacent students only, i.e.:
// student at index i can use a device at i-1 or i+1
// Your task is to determine the minimum number of devices required so that every student can access at least one device.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int devices = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'S') {
            // Prefer placing device on the right
            if (i + 1 < n && s[i + 1] == '.') {
                devices++;
                i += 2; // skip covered students
            }
            // Otherwise place on the left
            else if (i - 1 >= 0 && s[i - 1] == '.') {
                devices++;
            }
            // If neither side has a vacant spot, impossible case
            // (usually not asked, but safe to know)
        }
    }

    cout << devices << endl;
    return 0;
}
