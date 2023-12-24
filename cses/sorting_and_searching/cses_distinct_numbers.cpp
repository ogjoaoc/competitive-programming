#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    int cnt = 0;
    cin >> n;
    int v[n];
    int len = sizeof(v)/sizeof(v[0]);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v, v + len);

    for (int k = 0; k < len; k++) {
        if (v[k] != v[k+1]) {
            cnt++;
        }
    }
    
    cout << cnt;


    return 0;
}