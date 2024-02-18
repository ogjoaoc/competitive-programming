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


// We could use two pointers too.

void solve() { 

    int l; cin >> l;
    vector <int> idx;
    string s; cin >> s;

    for (int i = 0; i < l; i++) {

        if (s[i] == 'B') {

            idx.pb(i);

        }

    }
    
    auto max = max_element(idx.begin(), idx.end()); // remember this fucking function that returns a iterator (pointer) to the max/min element. *max *min
    auto min = min_element(idx.begin(), idx.end());

    // cout << *max << " - " << *min << "\n";
    cout << ((*max - *min)+1) << "\n";    

}


signed main() { _ 
    
    int t = 1; cin >> t;
    while(t--) 
        solve();
 
    return 0;
}