#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        
        int n, neg_cnt = 0;
        int v[110];
        int zero_cnt = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num < 0) {
                neg_cnt++;
            }
            else if (num == 0) {
                zero_cnt++;
            }
            v[i] = num;
        }
        if (zero_cnt > 0) {
            cout << "0" << "\n";
        }
        else {
            if (neg_cnt % 2 != 0) {
                cout << 0 << "\n";
            }
            else {
                cout << "1" << "\n";
                cout << "1" << " 0" << "\n";
            }
    }

    }

    return 0;
}