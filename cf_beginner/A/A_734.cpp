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
	int l; cin >> l;
	string s; cin >> s;
	int cnt_a = 0, cnt_d = 0;

	for (int i = 0; i < l; i++) {
		if (s[i] == 'A') cnt_a++;
		else cnt_d++;
	}

	if (cnt_a > cnt_d) cout << "Anton" << "\n";
	else if (cnt_d > cnt_a) cout << "Danik" << "\n";
	else cout << "Friendship" << "\n";
	
	exit(0);
}