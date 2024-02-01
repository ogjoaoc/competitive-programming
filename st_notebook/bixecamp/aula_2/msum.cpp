#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define spc ' '
#define endl "\n"
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

	vector<vector<int>> m(3, vector<int> (3));
	vector <int> colunas(3);
	vector <int> linhas(3);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> m[i][j];
			colunas[j] += m[i][j];
			linhas[i] += m[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int ans = colunas[j] + linhas[i] - m[i][j];
			cout << ans << " ";
		}
		cout << "\n";
	}


 	exit(0);
}