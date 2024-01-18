#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    vector <int> xi (t+1);
    vector <int> yi (t+1);
    vector <int> zi (t+1);
    for (int i = 0; i < t; i++) {
        cin >> xi[i] >> yi[i] >> zi[i];
    }
    if (accumulate(xi.begin(), xi.end(), 0) == 0 && accumulate(yi.begin(), yi.end(), 0) == 0 && accumulate(zi.begin(), zi.end(), 0) == 0) {
        cout << "YES" << "\n";
    } else cout << "NO" << "\n";

    return 0;
}