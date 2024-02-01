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

    // O(nlogn)
    
	int n; cin >> n;
	vector <int> v(n);

	for (int i = 0; i < n; i++) cin >> v[i];

	int saiu; cin >> saiu;
	vector <int> s(saiu);

	for (int i = 0; i < saiu; i++) cin >> s[i];

	for (int i = 0; i < n; i++) {

		if ((find(s.begin(), s.end(), v[i])) == s.end()) {
			cout << v[i] << " ";
		}

	}
	cout << "\n";
 
 	exit(0);
}