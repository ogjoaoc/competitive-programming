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
const int MAX = 2e5+1;
 
vector <int> postes(MAX, INF);
vector <int> casas(MAX, INF);
int n, m;
 
bool check (int num) {
    
    int aux = 0;
 
    for (int i = 0; i < m; i++) {
 
        int lzinho, rzinho;
 
        lzinho = max(0, postes[i] - num);
        rzinho = num + postes[i];
 
        int it = lower_bound(casas.begin(), casas.end(), lzinho) - casas.begin();
 
        it--;
 
        if (it >= aux) return false;
 
        aux = upper_bound(casas.begin(), casas.end(), rzinho) - casas.begin();
    }
 
    if(aux >= n) return true;
    else return false;
}
 
 
int main() { _
 
    int ans = 0;
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> casas[i];
    }
 
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> postes[i];
    }
 
    int l = 0, r = (int)1e9+10;
    
    while (l <= r) {
 
        int mid = (l+r)/2;
 
        if(check(mid)) {
            ans = mid;
            r = mid-1;        
        } else {
            l = mid + 1;
        }
 
    }
 
    cout << ans << "\n";
 
     exit(0);
}