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

	ll t; cin >> t;
	for (ll i = 0; i < t; i++) {
		ll sz; cin >> sz;
		ll arr[200002] = { 0 };
		int ans = -1;
		for (ll j = 0; j < sz; j++) {
			ll num; cin >> num;
			arr[num]++;
			if (arr[num] == 3) {
				ans = num;
			}
		}
		cout << ans << "\n";
	}

	exit(0);
}