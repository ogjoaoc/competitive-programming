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
    set <int> st;
    vector <int> v;
    bool ok = true;

    int p; cin >> p;
    for (int i = 0; i < p; i++) {
        int l; cin >> l;
        v.pb(l);
    }

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int l; cin >> l;
        v.pb(l);
    }

    if (!v.empty()) sort(v.begin(), v.end());

    for (auto l : v) {
        st.insert(l);
    }

    // for (auto dbg : st) {
    //     cout << dbg << " ";
    // } 

    if (!v.empty()) {

        vector <int> levels(st.begin(), st.end());
        for (int i = 1; i <= n; i++) {
            if (i != levels[i-1]) {
                ok = false; 
                break;
            }
        }

    }
    else ok = false;

    if (ok) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n"; 
    

}


signed main() { _ 
    
    int t = 1; // cin >> t;
    while(t--) 
        solve();
 
    return 0;
}