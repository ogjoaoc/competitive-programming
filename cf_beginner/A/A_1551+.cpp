#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int r, z;
        z = n/3;
        r = n % 3; 
        if (r % 3 == 0) {
            cout << z << " " << z << "\n";                    
        }
        else if (r % 3 == 1) {
            cout << z + 1 << " " << z << "\n";
        }
        else {
            cout << z << " " << z + 1 << "\n";
        }
 
    }

    return 0;
}