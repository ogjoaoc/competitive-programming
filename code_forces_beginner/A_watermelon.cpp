#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    if (t > 2) {
        if (t % 2 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}