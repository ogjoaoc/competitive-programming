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
	
	
	int n; cin >> n;
	vector<int> e(100), d(100);

	for (int i = 0; i < n; i++) 
	{

		int num;
		char c;

		cin >> num >> c;

		if (c == 'D') d[num]++;
		else e[num]++;

	}
	
	int total = 0;

	for (int i = 0; i < 100; i++) {
	
		if (e[i] < d[i]) {
			total += e[i]; 
		} else {
			total += d[i];
		}
	}	


	cout << total << "\n";
}	


signed main() { _ 
    
    int t = 1; // cin >> t;
    while(t--) 
        solve();
 
    return 0;
}
