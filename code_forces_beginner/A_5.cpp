// A. System of Equations

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {

    int n, m, contador = 0;
    cin >> n >> m;
    int a, b;
    int sum = n + m;

    for (a = 0; a < sum; a++) {
        for (b = 0; b < sum; b++) {
            if ((pow(a, 2) + b) == n && (a + pow(b, 2)) == m) {
                contador++;
            }
        }
    }

    cout << contador;

    return 0;
}