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

    string base = "hello";
    string s; cin >> s;
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == base[j]) j++;
        if(j == 5) {
            break;
        }
    }
    if (j == 5) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    
    exit(0);
}