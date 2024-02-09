#include <bits/stdc++.h>
using namespace std;

// string::npos
// str.find(substr)

int main() {

    int n; cin >> n;
    vector <string> v(n);
    vector <string> ans;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    string pfx; cin >> pfx;
    int count = 0;
    int len = pfx.length();
    
    for (int i = 0; i < v.size(); i++) {
        bool f = true;
        for (int j = 0; j < len; j++) {
            if (v[i][j] != pfx[j]) {
                f = false;
                break;
            }
        }
        if (f) {
            ans.push_back(v[i]);
            count++;
        }
    }

    cout << count << "\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }




    return 0;
}