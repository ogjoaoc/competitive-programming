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


int conv(char c) {
    return c - '0';
}

int main() { _

    int n; cin >> n;

    while (n--) {

        bool ans = true;

        string num; cin >> num;
        
        // cout << (conv(num[0]) + conv(num[1]) + conv(num[2])) << "\n";
        // cout << (conv(num[3]) + conv(num[4]) + conv(num[5])) << "\n";

        if ((conv(num[0]) + conv(num[1]) + conv(num[2])) != (conv(num[3]) + conv(num[4]) + conv(num[5]))) ans = false;      
        
        if (ans) cout << "YES\n";
        else cout << "NO\n";

    }


	exit(0);
}