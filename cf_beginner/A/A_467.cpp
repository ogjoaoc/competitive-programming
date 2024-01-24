#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    int f = 0;
    for (int i = 0; i < t; i++) {
        int a, b; cin >> a >> b;
        if (abs(a-b) >= 2) f++;
    }
    cout << f << "\n";

    return 0;
}