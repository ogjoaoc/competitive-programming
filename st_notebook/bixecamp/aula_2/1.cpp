#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, acertos = 0;
    string s, g;
    cin >> n >> s >> g;

    for (int i = 0; i < n; i++) {
        if (s[i] == g[i]) {
            acertos++;
        }
    }

    cout << acertos << "\n";

    return 0;
}