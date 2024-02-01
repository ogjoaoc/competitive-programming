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

    int n, m; cin >> n >> m;
    map <int, int> mp;
    vector <int> e(m);
    int current;
    int entregue = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (i == 0) current = num;
        mp[num] = i; 
    }

    for (int i = 0; i < m; i++) {
        cin >> e[i];
    }

    int time = 0;

    for (int i = 0; i < m; i++) {
        time += abs(mp[current] - mp[e[i]]);
        current = e[i];
    }

    cout << time << "\n";

  	exit(0);
}