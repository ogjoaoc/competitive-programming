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


void solve(){ 

	int l; cin >> l;
	vector <int> v(l);
	map <int, int> mp;

	for (int i=0; i<l; i++) {
		cin >> v[i];
	}
	
	for (int i=0; i<l; i++) {
		mp[v[i]]++;
	}

	//dbg	for (auto p : mp) cout << p.ff << " " << p.ss << "\n";


	for (auto p : mp) {
		if (p.ss == 1) {
			auto f = find(v.begin(), v.end(), p.ff)-v.begin();
			cout << f+1 << "\n";
		}
	}

}


signed main() { _ 
    
    int t = 1; cin >> t;
    while(t--) 
        solve();
 
    return 0;
}