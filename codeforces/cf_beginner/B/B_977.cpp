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


void solve() { 

	int l; cin >> l;
	string s; cin >> s;

	map <string, int> mp;

	for (int i = 0; i < l-1; i++) {
		
		string sub = "";
		sub += s[i];
		sub += s[i+1];
		mp[sub]++; 

	}

	// for (auto dbg : mp) {
	// 	cout << dbg.ff << " - " << dbg.ss << "\n";
	// }

	vector<pair<string,int>> ans(mp.begin(), mp.end());
	
	sort(ans.begin(), ans.end(), [](auto a, auto b) {
		return a.ss > b.ss;
	});

	// for (const auto p : ans) {
	// 	cout << p.ff << " - " << p.ss << "\n";
	// }

	cout << ans.front().ff << "\n";

}


signed main() { _ 
    
    int t = 1; // cin >> t;
    while(t--) 
        solve();
 
    return 0;
}