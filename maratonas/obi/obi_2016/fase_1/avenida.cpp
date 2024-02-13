#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int, int>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 998244353;
const int MAX = 1010;

int M[MAX][MAX];

void solve() { 

    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> M[i][j];
        }
    }

    int ans = INT_MAX;

    for (int j = 0; j < m; j++) {
        int cont = 0;
        for (int i = 0; i < n; i++) {
            cont +=  M[i][j];
        }
        if (cont < ans) ans = cont;
    }

    cout << ans << "\n";    

}


signed main() { _ 
    
    int t = 1; // cin >> t;
    while(t--) 
        solve();
 
    return 0;
}

   