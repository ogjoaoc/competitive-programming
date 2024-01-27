#include <bits/stdc++.h>
using namespace std;

int main() {

    int k, n, w; cin >> k >> n >> w;
    int pay = 0;
    for (int i = 1; i <= w; i++) {
        pay += i*k;
    }
    if (pay > n) cout << pay-n << "\n";
    else cout << "0" << "\n";

    return 0;
}