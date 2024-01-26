#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, m;
    cin >> n >> m;
    long long ans = m*n;
 
    vector <vector<int>>  g(n+1, vector <int> (m+1));
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> g[i][j];
        }
    }
 
    for (int i = 1; i <= n; i++) {
        int c1 = 0, c0 = 0;
        for (int j = 1; j <= m; j++) {
            if (g[i][j] == 1) {
                c1++;
            } else {
                c0++;
            }
        }
        if (c1 > 0) {
            ans += pow(2, c1) -1 -c1;
        } 
        if (c0 > 0) {
            ans += pow(2, c0) -1 -c0;
        }
    }
 
    for (int j = 1; j <= m; j++) {
        int c0 = 0, c1 = 0;
        for (int i = 1; i <= n; i++) {
            if (g[i][j] == 1) {
                c1++;
            } else {
                c0++;
            }
        }
        if (c1 > 0) {
            ans += pow(2, c1) -1 -c1;
        } 
        if (c0 > 0) {
            ans += pow(2, c0) -1 -c0;
        }
    }
 
    cout << ans << "\n";
 
 
    return 0;
}