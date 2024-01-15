// https://www.beecrowd.com.br/judge/pt/problems/view/2653
// nothing related to graphs ;)

#include <bits/stdc++.h>
#define int long long
#define bl ' '
#define endl '\n'
#define all(x) x.begin(), x.end() // x = v
#define pb push_back
#define ppb pop_back
#define f first
#define s second
#define vi vector<int>
#define pii pair<int, int
using namespace std;
const int oo = (((unsigned int)-1)>>1);
const int mod = 1000000007;
const int mxn = 100002;


void solve(){
	string s;
    set <string> my_set;
    while (cin >> s) my_set.insert(s);
    cout << my_set.size() << "\n";
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