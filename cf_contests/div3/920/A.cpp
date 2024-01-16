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
const int INF = 0x3f3f3f3f;
const int LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 998244353;


void solve(){
	int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;

    if (x1 == x2) {
        int r = abs(y1 -y2);
        r = r*r;
        cout << r << "\n";
    } else if (x1 == x3) {
        int r = abs(y1 -y3);
        r = r*r;
        cout << r << "\n";
    } else {
        int r = abs(y1 -y4);
        r = r*r;
        cout << r << "\n";
    }
        
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