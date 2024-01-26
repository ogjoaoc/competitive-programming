#include <bits/stdc++.h>
using namespace std;

const int MAX = 10010;

int main() {
    
    int n; cin >> n;
    int zeros = 0;
    vector <string> v(n);
    vector <int> pos0(n);
    pos0.clear();
    vector <int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == "0") {
            zeros++;
            pos0.push_back(i);
        }
    }

    for (int i = 0; i < n; i++) {
        string current = v[i];
        if (current == "0") {
            ans[i] = 0;
        } else {
            int pos_current = i;
            int best = 1000000;
            for (int j = 0; j < zeros; j++) {
                // cout << pos0[j];
                if (abs(pos0[j] - pos_current) < best) {
                    best = abs(pos0[j] - pos_current);
                }
            }
            if (best >= 9) ans[i] = 9;
            else ans[i] = best;
        }
    }

    for (auto i : ans) {
        cout << i << " ";
    }

    return 0;
}