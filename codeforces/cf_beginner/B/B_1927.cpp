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


map <char, int> alpha;

void solve() { 

    int l; cin >> l;
    vector <int> word(l);    

    for (int i = 0; i < l; i++) {
        cin >> word[i];
    }

    for (auto c = 'a'; c <= 'z'; c++) {
        alpha[c] = 0;
    }


    for (int i = 0; i < l; i++) {

        for (auto w : alpha) {
            
            if (alpha[w.ff] == word[i]) {

                alpha[w.ff]++;
                cout << w.ff;
                break;

            }

        } 

    }

    cout << "\n";


}


signed main() { _ 
    
    int t = 1; cin >> t;
    while(t--) 
        solve();
 
    return 0;
}