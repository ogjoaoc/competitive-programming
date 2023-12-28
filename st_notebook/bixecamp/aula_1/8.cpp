// Usando % para percorrer

#include <bits/stdc++.h>
using namespace std;

int main() {

    int64_t t, cnt = 0;
    cin >> t;
    
    while(t != 0) {
        if (t % 10 == 4 or t % 10 == 7) {
            cnt++;
        }
        t /= 10;
    }

    if (cnt == 4 or cnt == 7)
    cout << "YES" << "\n";
    else
    cout << "NO" << "\n";

    return 0;
}