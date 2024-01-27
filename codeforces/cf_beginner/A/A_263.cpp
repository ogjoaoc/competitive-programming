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


void solve(){
    vector<vector<int>> m(6, vector<int> (6)); // matrice 5x5 ***int m[5][5];
    int x, y;
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=5; j++) {
            int t; cin >> t;
            m[i][j] = t;
            if (t == 1) {x = i; y = j;}
        }
    }
    cout << (abs(x-3) + abs(y-3)) << "\n";
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1; //cin >> t;
	while(t--){
		solve();
	}
}