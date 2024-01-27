#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long x, y , aux;
        for (long long i = 0; i < n/2; i++) {
            x = i;
            y = i;
            aux = x + 2*y;
            if (aux == n) {
                cout << x << " " << y << "\n";
                break;
            }
            else if (((abs(x-y) == 0) or (abs(x-y) == 1)) and (n - aux == 1 or n - aux == 2)) {
                long long r = abs(aux - r);
                if (x + 2*(y+1) == n) {
                    y++;
                    cout << x << " " << y << "\n";
                    break;
                }
                else {
                    x++;
                    cout << x << " " << y << "\n";
                    break;
                }
            }
        }


    }

    return 0;
}