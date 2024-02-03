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
        
        string ans = "";
        for (int i = 0; i < 8; i++) {
            string s; cin >> s;

            for (const auto c : s) {
                if (c != '.') ans += c;
            }
        }

        cout << ans << "\n";

    }
    
     
 	exit(0);
}