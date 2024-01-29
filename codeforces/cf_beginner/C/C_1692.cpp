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

    while(t--) {

        vector <vector<char>> m(9, vector<char> (9));

        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                cin >> m[i][j];
            }
        }

        for (int i = 2; i <= 7; i++) {
            for (int j = 2; j <= 7; j++) {

                if( (m[i-1][j-1] == '#') && (m[i-1][j+1] == '#') && (m[i+1][j-1] == '#') && (m[i+1][j+1] == '#')) {
                    cout << i << " " << j << "\n";
                    break;
                }

            }
        }

    }


	exit(0);
}