#include <bits/stdc++.h>
#include <math.h>
using namespace std;
 
int main() {

    int64_t t;
    cin >> t;

    while (t--) {
        int64_t b, n, cnt = 0;
        cin >> b;
        for (int64_t i = 0; i < b; i++) {
            cin >> n;
            cnt += n;
        }
        
        if (sqrt(cnt) > int64_t(sqrt(cnt))) {
            cout << "NO" << "\n";
        }
        else {
            cout << "YES" << "\n";
        } 

    }
}
