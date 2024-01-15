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
    // vector <int> v = { 8, 26, 15, 23, 65, 19, 2 };
    // vector <int> ordv = { 8, 26, 15, 23, 65, 19, 2 };
    // map <int,int> mp;
    
    // sort(all(ordv));
    // for (int i = 0; i < v.size(); i++)
    //     mp[ordv[i]] = i;

    // for(int i=0; i<v.size(); i++) v[i] = mp[v[i]];
    
    // for (int i=0; i<v.size(); i++) cout << v[i] << " ";

    int n; cin >> n; 
    vector <int> v(n), ordv(n);
    for (int i=0; i<n; i++) {cin >> v[i]; ordv[i] = v[i];}
    map <int, int> mp;
    sort(all(ordv));
    for (int i=0; i<n; i++) mp[ordv[i]] = i;
    for (int i=0; i<n; i++) v[i] = mp[v[i]];
    for (int i=0; i<n; i++) cout << v[i] << " ";  
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