#include <bits/stdc++.h>
#define ll long long
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
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 998244353;


void solve(){

    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    vector <int> moment(n);
    for (ll i=0; i<n; i++) 
        cin >> moment[i];
    
    ll sum = 0, last = 0;
    for (ll i=0; i<n; i++) {
        sum += min((moment[i]-last)*a, b);
        if (sum >= f) {
            cout << "no" << "\n";
            return;
        }
        last = moment[i];
    }
    cout << "yes" << "\n";
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1; cin >> t;
	while(t--){
		solve();
	}
}