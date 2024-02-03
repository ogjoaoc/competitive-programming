#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define ppb pop_back
#define pii pair<int, int>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 998244353;
const int MAX = 11;

int main() { _

    int t; cin >> t;
    while (t--) {

        int r; cin >> r;
        vector<pii> ans;
        vector<pii> v(r);
        for (int i = 0; i < r; i++) {
            cin >> v[i].ff >> v[i].ss;
        }

        for (const auto p : v) {
            if (p.ff > 10) {
                continue;
            }
            ans.pb(p);
        }

        sort(all(ans), [](const pii a, pii b){
        return a.second > b.second; 
    });

    pii best = ans[0];

    for (int i = 0; i < v.size(); i++) {

        if (v[i].ff == best.ff && v[i].ss == best.ss) {
            cout << i + 1 << "\n";
            break;
        }

    }

    }
     
 	exit(0);
}