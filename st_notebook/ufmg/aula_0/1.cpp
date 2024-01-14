#include <bits/stdc++.h>
#define int long long
#define bl ' '
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define pii pair<int, int
using namespace std;
const int oo = (((unsigned int)-1)>>1);
const int mod = 1000000007;
const int mxn = 100002;

int fat(int n) {
    if (n <= 1) {
		return 1;
	}
	return n*fat(n-1);
}

void solve(){
    int n; cin >> n;
	cout << fat(n) << "\n";
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1; // cin >> t;
	while(t--){
		solve();
	}
}