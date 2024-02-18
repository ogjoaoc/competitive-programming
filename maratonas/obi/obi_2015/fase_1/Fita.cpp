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
	
    int n; cin >> n;
    vector <int> inicio(n), pos_zeros, ans(n);

    for (int i = 0; i < n; i++) cin >> inicio[i];
    for (int i = 0; i < n; i++) {
        if (inicio[i] == 0) {
            pos_zeros.pb(i);
        }
    }
    for (int i = 0 ; i < n ; i++) {
        if (inicio[i] == -1) {
            int min_dist = 9;
            for (auto pos : pos_zeros) {
                min_dist = min(abs(i-pos), min_dist);
            }
            ans[i] = min_dist;
        }
        else ans[i] = 0;
    }
    for (auto e : ans) {
        cout << e << " ";
    } cout << "\n";

    return 0;

}

