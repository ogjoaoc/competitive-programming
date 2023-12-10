#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    
    int n, k;
    vector<int> v;
    cin >> n >> k;
    int t, cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> t;
        v.push_back(t);
    }
    for (int j = 0; j < n; j++) {
        if (v[j] >= v[k-1] and v[j] > 0) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}