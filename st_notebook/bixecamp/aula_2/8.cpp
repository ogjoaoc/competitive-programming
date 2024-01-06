// WA

#include <bits/stdc++.h>
using namespace std;

const int MAX = 91;

int main() {
    while(1) {
        int N, B;
        cin >> N >> B;
        if (N == 0 && B == 0) break;
        int v[MAX];
        bool ans[MAX] = { false };
        bool able = true;

        for(int i = 0; i < B; i++) {
            int t;
            cin >> t;
            v[i] = t;
        }

        for (int i = 0; i < B; i++) {
            for (int j = 0; j < B; j++) {
                if (!(ans[abs(v[i] - v[j])])) {
                    ans[abs(v[i] - v[j])] = true;
                }
            }
        }

        for (int i = 0; i < B; i++) {
            if(!ans[i]) {
                able = false;
            }
        }

        if (able) {
            cout << "Y" << "\n";
        } else {
            cout << "N" << "\n";
        }
    }

    return 0;
}