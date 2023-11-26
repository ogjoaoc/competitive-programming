// A. System of Equations

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {

    int n, m, contador = 0;
    cin >> n >> m;
    int a, b;
    int eq1, eq2;
    int sum = n + m;

    for (a = 0; a < sum; a++) {
        for (b = 0; b < sum; b++) {
            eq1 = pow(a, 2) + b;
            eq2 = a + pow(b, 2);
            if (eq1 == n && eq2 == m) {
                contador++;
            }
        }
    }

    cout << contador;

    return 0;
}