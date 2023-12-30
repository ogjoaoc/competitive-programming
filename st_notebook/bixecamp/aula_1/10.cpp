// TLE :(

#include <bits/stdc++.h>
using namespace std;

int main () {

    int h, p, f, s;
    bool flag = false;
    cin >> h >> p >> f >> s;

    if (s == 1) {
        while(f != h) {
            f++;
            if (f == p) {
                cout << "N" << "\n";
                flag = true;
                break;
            }
        }
    }
    else {
        while (abs(f) != h) {
            f--;
            if (f == -1) f = 15;
            if (f == p) {
                cout << "N" << "\n";
                flag = true;
                break;
       }
    }
    }

    if (not flag) {
        cout << "S" << "\n";
    }
    
    return 0;
}