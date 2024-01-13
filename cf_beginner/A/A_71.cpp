#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() <= 10) {
            cout << s << "\n";
        } else {
            int cnt = 0;
            for (int i = 1; i <= s.length()-2; i++) {
                cnt++;
            }
            cout << s[0] << cnt << s[s.length()-1] << "\n";
        }
    }
    return 0; 
}