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
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 998244353;
const int MAX = 2e5+1;


void solve() { 
	
    int a, b, fa, fb;
    cin >> a >> b >> fa >> fb;

    if (a == 0 and b == 0) {
        if (fa == 1 and fb == 1) {
            cout << 1 << "\n";
        } else if (fa == 0 and fb == 1) {
            cout << 2 << "\n";
        } else if (fa == 1 and fb == 0) {
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n";
        }

    } else if (a == 0 and b == 1) {
        if (fa == 1 and fb == 1) {
            cout << 1 << "\n";
        } else if (fa == 0 and fb == 1) {
            cout << 0 << "\n";
        } else if (fa == 1 and fb == 0) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }

    } else if (a == 1 and b == 0) {
        if (fa == 1 and fb == 1) {
            cout << 2 << "\n";
        } else if (fa == 0 and fb == 1) {
            cout << 1 << "\n";
        } else if (fa == 1 and fb == 0) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }

    } else {
        if (fa == 1 and fb == 1) {
            cout << 0 << "\n";
        } else if (fa == 0 and fb == 1) {
            cout << 1 << "\n";
        } else if (fa == 1 and fb == 0) {
            cout << 2 << "\n";
        } else {
            cout << 1 << "\n";
        }

    }

}


signed main() { _ 
    
    int t = 1; // cin >> t;
    while(t--) 
        solve();
 
    return 0;
}