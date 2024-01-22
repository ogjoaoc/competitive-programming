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
    int tram = 0, max = -1;
    // vector <pair <int,int>> v;
    // for (int i = 0; i < t; i++) {
    //     cin >> v[i].f >> v[i].s;
    // }
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        tram -= a; tram += b;
        if (tram > max) max = tram;
    }
    cout << max << "\n";
     
	exit(0);
}