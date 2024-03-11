#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb push_back
using ii = pair<int, int>;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 998244353;
const int MAX = 2e5+1;

int g[501][501];

void solve() { 
	
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
        }
    }

    int p; cin >> p;
    int vendas = 0;

    for (int i = 0; i < p; i++) {
        
        int tipo, tam;
        cin >> tipo >> tam;

        if (g[tipo][tam] > 0) {
            g[tipo][tam]--;
            vendas++;
        }
    }

    cout << vendas << "\n";
    
}	


signed main() { _ 
    
    int t = 1; // cin >> t;
    while(t--) 
        solve();
 
    return 0;
}
