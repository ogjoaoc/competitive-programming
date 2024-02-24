#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int, int>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


int main() { _

    int n, c, m;
    cin >> n >> c >> m;

    map <int, bool> st;

    for (int i = 0; i < c; i++) {
        int fig; cin >> fig;
        st[fig] = false;
    }

    for (int i = 0; i < m; i++) {
        int nf; cin >> nf;
        st[nf] = true;
    }

    int ans = 0;
    for (auto f : st) {
        if (!f.ss) ans++;
    }

    cout << ans << "\n";
  
    return 0;
}

