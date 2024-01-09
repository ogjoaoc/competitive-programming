#include <bits/stdc++.h>
using namespace std;

int main() {

    long long s, a, b;
    int v[10000];
    int menor = 100000000, maior = 0;
    long long pos = 0;
    cin >> s >> a >> b;

    for (int i = a; i <= b; i++) {
        v[pos] = i;
        pos++;
    }

    for (int i = 0; i < pos; i++) {
        int sum = 0;
        int n = v[i];
        while (n != 0) {
            if (n % 10 <= s) {
                sum += n % 10;
                n = n / 10;
            }
            else {
                break;
            }
        }
        if (sum == s) {
            if (v[i] > maior) maior = v[i];
            if (v[i] < menor) menor = v[i];
        }
    } 

    cout << menor << "\n";
    cout << maior << "\n";

    return 0;
}