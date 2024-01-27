#include <bits/stdc++.h>
#define int long long
#define bl ' '
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define pii pair<int, int>
using namespace std;
const int oo = (((unsigned int)-1)>>1);
const int mod = 1000000007;
const int mxn = 100002;
const int INF = 0x3f3f3f3f;
const int LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 998244353;

void solve(){
    int n; cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int bi = 0, bj = 0;
    int ops = 0;

    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            if (s1[i] == '1') bi++;
            else if (s2[i] == '1') bj++;
        }
    }
    ops = min(bi, bj) + abs(abs(bj-abs(bi)));
    
    cout << ops << "\n";

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
