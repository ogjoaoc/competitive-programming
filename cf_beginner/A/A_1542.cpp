#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while (t--) {
        int l; cin >> l;
        int odds = 0, even = 0;
        for (int i=0; i<2*l; i++) {
            int n;
            cin >> n;
            if (n % 2 == 0) {
                even++;
            }
            else {
                odds++;
            }
        }
        if (odds == even) {
            cout << "Yes" << "\n";
        }
        else {
            cout << "No" << "\n";
        }


    }

    return 0;
}