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

	int t;
    cin >> t;

    while (t--) {

        int n; cin >> n;
        set <int> s;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            s.insert(a); 
        }
        // Obs: when we do odd - odd or even - even, the result will always be even 
        if ((s.size() % 2 == 0 && n % 2 == 0) || (s.size() % 2 != 0 && n % 2 != 0))  {
            cout << s.size() << "\n";
        } else {
            cout << s.size()-1 << "\n";
        }


    }
 	exit(0);
}