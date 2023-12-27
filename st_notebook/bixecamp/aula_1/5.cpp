#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y, c = 1;
    cin >> x >> y;

    for (int i = 1; i <= y; i++) {
        if (c == x) {
            cout << i << "\n";
            c = 1;
        }
        else {
        cout << i << " ";
        c++;
        }
    }

    return 0;
}