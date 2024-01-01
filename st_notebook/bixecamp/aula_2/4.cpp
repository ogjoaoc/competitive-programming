#include <bits/stdc++.h>
using namespace std;

const int N = 50;
int m[N][N];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int t;
            cin >> t;
            m[i][j] = t; 
        }
    }

    int q, cnt = 0;
    cin >> q;
    while(q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int i = x1; i <= x2; i++) {
            for(int j = y1; j <= y2; j++) {
                cnt += m[i][j];
                m[i][j] = 0;
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}