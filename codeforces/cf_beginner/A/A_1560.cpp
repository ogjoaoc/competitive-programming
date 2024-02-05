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
const int MAX = 2e5+1;

vector <int> v;

void solve(){ 

	int n; cin >> n;

	for (int i = 1; i <= 10001; i++) {
		if (i % 3 == 0 || i % 10 == 3) {
			continue;
		}
		v.pb(i);
	}

	cout << v[n-1] << "\n"; 

}


signed main() { _ 
    
    int t = 1; cin >> t;
    while(t--) 
        solve();
 
    return 0;
}