// WA

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define f first
#define s second
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

	int n; cin >> n;
    bool is_lucky = true;
    while (n != 0) {
        if (n % 10 != 7 && n % 10 != 4) {
            is_lucky = false;
            break;
        }
        n = n/10;
    }
    if (is_lucky) cout << "YES\n";
    else {
        if (n % 4 == 0 || n % 7 == 0) cout << "YES\n";
        else cout << "NO\n";
    }

	exit(0);
}