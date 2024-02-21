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
    
    vector<vector<int>> m(1001, vector<int> (1001));
    vector<int> l(1001), c(1001);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
            l[i] += m[i][j];
            c[j] += m[i][j];
        }
    }
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            maxi = max(maxi, ((l[i]+c[j])-2*m[i][j]));
        }
    }
    cout << maxi << "\n";


    return 0;

}

