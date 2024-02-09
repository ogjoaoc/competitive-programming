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
    string s; cin >> s;
    map <char, bool> mp;
    vector <char> ans;
    bool ok = true;


    for (int i = 0; i < l; i++) {
        if (s[i] == s[i+1]) {
            continue;
        } else {
            ans.pb(s[i]);
        }
    }

    // for (auto c : ans) {
    //     cout << c << "\n";
    // }

    for (auto c : ans) {
        if (mp[c]) {
            ok = false;
            break;
        } else {
            mp[c] = true;
        }
    }

    if (ok) cout << "YES\n";
    else cout << "NO\n"; 


}


signed main() { _ 
    
    int t = 1; cin >> t;
    while(t--) 
        solve();
 
    return 0;
}