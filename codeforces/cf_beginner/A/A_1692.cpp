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

	int t; cin >> t;

	while (t--) {

		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int count = 0;

		if (a < b) count++;
		if (a < c) count++;
		if (a < d) count++;

		cout << count << "\n";

    }


	exit(0);
}