// Using sqrt(n) to improve complexity.
 
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        bool prime = true;
        int n; cin >> n;
        // for (int j = 2; j*j <= n; j++)
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                prime = false; 
                break;
            }
        }
        if (prime) cout << "Prime\n";
        else cout << "Not Prime\n";
    }
    return 0; 
}